/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|      Source Script                             |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#define MAIN_CORE

#include "config/core.h" // CONSOLE_INPUT, MAX_CONSOLE_INPUT
#include "console.h"

#include "common/cbasetypes.h"
#include "common/core.h"
#include "common/nullpo.h"
#include "common/showmsg.h"
#include "common/sysinfo.h"

#include "common/atomic.h"
#include "common/ers.h"
#include "common/memmgr.h"
#include "common/mutex.h"
#include "common/spinlock.h"
#include "common/sql.h"
#include "common/strlib.h"
#include "common/thread.h"
#include "common/timer.h"

#include <stdio.h>
#include <stdlib.h>
#if !defined(WIN32)
#	include <sys/time.h>
#	include <unistd.h>
#else
#	include "common/winapi.h" // Console close event handling
#	ifdef CONSOLE_INPUT
#		include <conio.h> /* _kbhit() */
#	endif
#endif

struct console_interface console_s;
struct console_interface *console;
#ifdef CONSOLE_INPUT
struct console_input_interface console_input_s;
struct spin_lock console_ptlock_s;

struct {
	char queue[CONSOLE_PARSE_SIZE][MAX_CONSOLE_INPUT];
	unsigned short count;
} cinput;
#endif

/*======================================
 * CORE : Display title
 *--------------------------------------*/
void display_title(void) {
	const char *vcstype = sysinfo->vcstype();
	ShowMessage("\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"                                                  "CL_CLL""CL_NORMAL"\n");
 	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"        ____                     _                "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"       /    |                   | |_              "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"      /     |_ __ ____  __ _  __| |_  __ _        "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"     /  /|  | '__/  __|/ _` |/ _  | |/ _` |       "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"    /  __   | | |  |__  (_| | (_| | | (_| |       "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"   /  /  |  |_|  \\____|\\__,_|\\__,_|_|\\__,_|       "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"  /__/   |__|      "CL_BT_RED"Ragnarok Emulator"CL_BT_WHITE"              "CL_CLL""CL_NORMAL"\n");
	ShowMessage(""CL_BG_CYAN""CL_BT_WHITE"                                                  "CL_CLL""CL_NORMAL"\n");
	ShowInfo(" %d-bit para %s\n", sysinfo->is64bit() ? 64 : 32, sysinfo->platform());
	ShowInfo("Sistema operacional: '"CL_WHITE"%s"CL_RESET" [%s]'\n", sysinfo->osversion(), sysinfo->arch());
	ShowInfo("CPU: '"CL_WHITE"%s [%d]"CL_RESET"'\n", sysinfo->cpu(), sysinfo->cpucores());
}

/**
 * Shows a license notice as per GNU GPL recommendation.
 */
void display_gplnotice(void)
{
}

#ifdef CONSOLE_INPUT
int console_parse_key_pressed(void)
{
#ifdef WIN32
	return _kbhit();
#else // ! WIN32
	struct timeval tv;
	fd_set fds;
	tv.tv_sec = 0;
	tv.tv_usec = 0;

	FD_ZERO(&fds);
	FD_SET(STDIN_FILENO, &fds);

	select(STDIN_FILENO+1, &fds, NULL, NULL, &tv);

	return FD_ISSET(STDIN_FILENO, &fds);
#endif // WIN32
}

/*======================================
 * CORE: Console commands
 *--------------------------------------*/

/**
 * Stops server
 **/
CPCMD_C(exit, server)
{
	core->runflag = 0;
}

/**
 * Displays ERS-related statistics (Entry Reusage System)
 **/
CPCMD_C(ers_report, server)
{
	ers_report();
}

/**
 * Displays memory usage
 **/
CPCMD_C(mem_report, server)
{
#ifdef USE_MEMMGR
	memmgr_report(line?atoi(line):0);
#endif
}

/**
 * Displays command list
 **/
CPCMD(help)
{
	int i;
	for (i = 0; i < VECTOR_LENGTH(console->input->command_list); i++) {
		struct CParseEntry *entry = VECTOR_INDEX(console->input->command_list, i);
		if (entry->type == CPET_CATEGORY) {
			ShowInfo("- '"CL_WHITE"%s"CL_RESET"' subs\n", entry->cmd);
			console->input->parse_list_subs(entry, 2);
		} else {
			ShowInfo("- '"CL_WHITE"%s"CL_RESET"'\n", entry->cmd);
		}
	}
}

/**
 * Displays current malloc usage
 */
CPCMD_C(malloc_usage, server)
{
	unsigned int val = (unsigned int)iMalloc->usage();
	ShowInfo("malloc_usage: %.2f MB\n",(double)(val)/1024);
}

/**
 * Loads console commands list
 **/
void console_load_defaults(void)
{
	/**
	 * Defines a main category.
	 *
	 * Categories can't be used as commands!
	 * E.G.
	 * - sql update skip
	 *   'sql' is the main category
	 * CP_DEF_C(category)
	 **/
#define CP_DEF_C(x) { #x , CPET_CATEGORY, NULL , NULL, NULL }
	/**
	 * Defines a sub-category.
	 *
	 * Sub-categories can't be used as commands!
	 * E.G.
	 * - sql update skip
	 *   'update' is a sub-category
	 * CP_DEF_C2(command, category)
	 **/
#define CP_DEF_C2(x,y) { #x , CPET_CATEGORY, NULL , #y, NULL }
	/**
	 * Defines a command that is inside a category or sub-category
	 * CP_DEF_S(command, category/sub-category)
	 **/
#define CP_DEF_S(x,y) { #x, CPET_FUNCTION, CPCMD_C_A(x,y), #y, NULL }
	/**
	 * Defines a command that is _not_ inside any category
	 * CP_DEF_S(command)
	 **/
#define CP_DEF(x) { #x , CPET_FUNCTION, CPCMD_A(x), NULL, NULL }

	struct {
		char *name;
		int type;
		CParseFunc func;
		char *connect;
		struct CParseEntry *self;
	} default_list[] = {
		CP_DEF(help),
		/**
		 * Server related commands
		 **/
		CP_DEF_C(server),
		CP_DEF_S(ers_report,server),
		CP_DEF_S(mem_report,server),
		CP_DEF_S(malloc_usage,server),
		CP_DEF_S(exit,server),
		/**
		 * Sql related commands
		 **/
		CP_DEF_C(sql),
		CP_DEF_C2(update,sql),
	};
	int len = ARRAYLENGTH(default_list);
	struct CParseEntry *cmd;
	int i;

	VECTOR_ENSURE(console->input->commands, len, 1);

	for(i = 0; i < len; i++) {
		CREATE(cmd, struct CParseEntry, 1);

		safestrncpy(cmd->cmd, default_list[i].name, CP_CMD_LENGTH);

		cmd->type = default_list[i].type;

		switch (cmd->type) {
			case CPET_FUNCTION:
				cmd->u.func = default_list[i].func;
				break;
			case CPET_CATEGORY:
				VECTOR_INIT(cmd->u.children);
				break;
			case CPET_UNKNOWN:
				break;
		}

		VECTOR_PUSH(console->input->commands, cmd);
		default_list[i].self = cmd;
		if (!default_list[i].connect) {
			VECTOR_ENSURE(console->input->command_list, 1, 1);
			VECTOR_PUSH(console->input->command_list, cmd);
		}
	}

	for (i = 0; i < len; i++) {
		int k;
		if (!default_list[i].connect)
			continue;
		ARR_FIND(0, VECTOR_LENGTH(console->input->commands), k, strcmpi(default_list[i].connect, VECTOR_INDEX(console->input->commands, k)->cmd) == 0);
		if (k != VECTOR_LENGTH(console->input->commands)) {
			struct CParseEntry *parent = VECTOR_INDEX(console->input->commands, k);
			Assert_retb(parent->type == CPET_CATEGORY);
			cmd = default_list[i].self;
			VECTOR_ENSURE(parent->u.children, 1, 1);
			VECTOR_PUSH(parent->u.children, cmd);
		}
	}
#undef CP_DEF_C
#undef CP_DEF_C2
#undef CP_DEF_S
#undef CP_DEF
}

/**
 * Creates a new console command entry.
 *
 * @param name The command name.
 * @param func The command callback.
 */
void console_parse_create(char *name, CParseFunc func)
{
	int i;
	char *tok;
	char sublist[CP_CMD_LENGTH * 5];
	struct CParseEntry *cmd;

	nullpo_retv(name);
	safestrncpy(sublist, name, CP_CMD_LENGTH * 5);
	tok = strtok(sublist,":");

	ARR_FIND(0, VECTOR_LENGTH(console->input->command_list), i, strcmpi(tok, VECTOR_INDEX(console->input->command_list, i)->cmd) == 0);

	if (i == VECTOR_LENGTH(console->input->command_list)) {
		CREATE(cmd, struct CParseEntry, 1);
		safestrncpy(cmd->cmd, tok, CP_CMD_LENGTH);
		cmd->type = CPET_UNKNOWN;
		VECTOR_ENSURE(console->input->commands, 1, 1);
		VECTOR_PUSH(console->input->commands, cmd);
		VECTOR_ENSURE(console->input->command_list, 1, 1);
		VECTOR_PUSH(console->input->command_list, cmd);
	}

	cmd = VECTOR_INDEX(console->input->command_list, i);
	while ((tok = strtok(NULL, ":")) != NULL) {
		if (cmd->type == CPET_UNKNOWN) {
			cmd->type = CPET_CATEGORY;
			VECTOR_INIT(cmd->u.children);
		}
		Assert_retv(cmd->type == CPET_CATEGORY);

		ARR_FIND(0, VECTOR_LENGTH(cmd->u.children), i, strcmpi(VECTOR_INDEX(cmd->u.children, i)->cmd,tok) == 0);
		if (i == VECTOR_LENGTH(cmd->u.children)) {
			struct CParseEntry *entry;
			CREATE(entry, struct CParseEntry, 1);
			safestrncpy(entry->cmd, tok, CP_CMD_LENGTH);
			entry->type = CPET_UNKNOWN;
			VECTOR_ENSURE(console->input->commands, 1, 1);
			VECTOR_PUSH(console->input->commands, entry);
			VECTOR_ENSURE(cmd->u.children, 1, 1);
			VECTOR_PUSH(cmd->u.children, entry);
			cmd = entry;
			continue;
		}
		cmd = VECTOR_INDEX(cmd->u.children, i);
	}
	Assert_retv(cmd->type != CPET_CATEGORY);
	cmd->type = CPET_FUNCTION;
	cmd->u.func = func;
}

/**
 * Shows the help message for a console command category.
 *
 * @param cmd The command entry.
 * @param depth The current tree depth (for display purposes).
 */
void console_parse_list_subs(struct CParseEntry *cmd, unsigned char depth)
{
	int i;
	char msg[CP_CMD_LENGTH * 2];
	nullpo_retv(cmd);
	Assert_retv(cmd->type == CPET_CATEGORY);
	for (i = 0; i < VECTOR_LENGTH(cmd->u.children); i++) {
		struct CParseEntry *child = VECTOR_INDEX(cmd->u.children, i);
		memset(msg, '-', depth);
		snprintf(msg + depth, (CP_CMD_LENGTH * 2) - depth, " '"CL_WHITE"%s"CL_RESET"'", child->cmd);
		if (child->type == CPET_FUNCTION) {
			ShowInfo("%s\n",msg);
		} else {
			ShowInfo("%s subs\n",msg);
			console->input->parse_list_subs(child,depth + 1);
		}
	}
}

/**
 * Parses a console command.
 *
 * @param line The input line.
 */
void console_parse_sub(char *line)
{
	struct CParseEntry *cmd;
	char bline[200];
	char *tok;
	char sublist[CP_CMD_LENGTH * 5];
	int i;

	nullpo_retv(line);
	memcpy(bline, line, 200);
	tok = strtok(line, " ");

	ARR_FIND(0, VECTOR_LENGTH(console->input->command_list), i, strcmpi(tok, VECTOR_INDEX(console->input->command_list, i)->cmd) == 0);
	if (i == VECTOR_LENGTH(console->input->command_list)) {
		ShowError("'"CL_WHITE"%s"CL_RESET"' nao e um comando conhecido, digite '"CL_WHITE"help"CL_RESET"' para listar todos os comandos\n",line);
		return;
	}

	cmd = VECTOR_INDEX(console->input->command_list, i);

	snprintf(sublist, sizeof(sublist), "%s", cmd->cmd);

	if (cmd->type == CPET_FUNCTION) {
		tok = strtok(NULL, "");
		cmd->u.func(tok);
		return;
	}

	while ((tok = strtok(NULL, " ")) != NULL) {
		struct CParseEntry *entry = NULL;

		Assert_retv(cmd->type == CPET_CATEGORY);

		ARR_FIND(0, VECTOR_LENGTH(cmd->u.children), i, strcmpi(VECTOR_INDEX(cmd->u.children, i)->cmd, tok) == 0);
		if (i == VECTOR_LENGTH(cmd->u.children)) {
			if (strcmpi("help", tok) == 0) {
				if (VECTOR_LENGTH(cmd->u.children)) {
					ShowInfo("- '"CL_WHITE"%s"CL_RESET"' subs\n",sublist);
					console->input->parse_list_subs(cmd,2);
				} else {
					ShowError("'"CL_WHITE"%s"CL_RESET"' n�o possui nenhum subcommands\n",sublist);
				}
				return;
			}
			ShowError("'"CL_WHITE"%s"CL_RESET"' nao e um subcomando conhecido de '"CL_WHITE"%s"CL_RESET"'\n",tok,cmd->cmd);
			ShowError("digite '"CL_WHITE"%s help"CL_RESET"' para listar todos os subcomandos\n",sublist);
			return;
		}
		entry = VECTOR_INDEX(cmd->u.children, i);
		if (entry->type == CPET_FUNCTION) {
			tok = strtok(NULL, "");
			entry->u.func(tok);
			return;
		}

		cmd = entry;

		if (strlen(sublist) < sizeof(sublist)-1)
			snprintf(sublist+strlen(sublist), sizeof(sublist), " %s", cmd->cmd);
	}
	ShowError("E apenas uma categoria, digite '"CL_WHITE"%s help"CL_RESET"' para listar seus subcomandos\n",sublist);
}

void console_parse(char *line)
{
	int c, i = 0, len = MAX_CONSOLE_INPUT - 1;/* we leave room for the \0 :P */

	nullpo_retv(line);
	while( (c = fgetc(stdin)) != EOF ) {
		if( --len == 0 )
			break;
		if( (line[i++] = c) == '\n') {
			line[i-1] = '\0';/* clear, we skip the new line */
			break;/* new line~! we leave it for the next cycle */
		}
	}

	line[i++] = '\0';
}

void *cThread_main(void *x)
{
	while( console->input->ptstate ) {/* loopx */
		if( console->input->key_pressed() ) {
			char input[MAX_CONSOLE_INPUT];

			console->input->parse(input);
			if( input[0] != '\0' ) {/* did we get something? */
				EnterSpinLock(console->input->ptlock);

				if( cinput.count == CONSOLE_PARSE_SIZE ) {
					LeaveSpinLock(console->input->ptlock);
					continue;/* drop */
				}

				safestrncpy(cinput.queue[cinput.count++],input,MAX_CONSOLE_INPUT);
				LeaveSpinLock(console->input->ptlock);
			}
		}
		mutex->lock(console->input->ptmutex);
		mutex->cond_wait(console->input->ptcond, console->input->ptmutex, -1);
		mutex->unlock(console->input->ptmutex);
	}

	return NULL;
}

int console_parse_timer(int tid, int64 tick, int id, intptr_t data)
{
	int i;
	EnterSpinLock(console->input->ptlock);
	for(i = 0; i < cinput.count; i++) {
		console->input->parse_sub(cinput.queue[i]);
	}
	cinput.count = 0;
	LeaveSpinLock(console->input->ptlock);
	mutex->cond_signal(console->input->ptcond);
	return 0;
}

void console_parse_final(void)
{
	if( console->input->ptstate ) {
		InterlockedDecrement(&console->input->ptstate);
		mutex->cond_signal(console->input->ptcond);

		/* wait for thread to close */
		thread->wait(console->input->pthread, NULL);

		mutex->cond_destroy(console->input->ptcond);
		mutex->destroy(console->input->ptmutex);
	}
}

void console_parse_init(void)
{
	cinput.count = 0;

	console->input->ptstate = 1;

	InitializeSpinLock(console->input->ptlock);

	console->input->ptmutex = mutex->create();
	console->input->ptcond = mutex->cond_create();

	if( (console->input->pthread = thread->create(console->input->pthread_main, NULL)) == NULL ){
		ShowFatalError("console_parse_init: falhou ao gerar a thread console_parse.\n");
		exit(EXIT_FAILURE);
	}

	timer->add_func_list(console->input->parse_timer, "console_parse_timer");
	timer->add_interval(timer->gettick() + 1000, console->input->parse_timer, 0, 0, 500);/* start listening in 1s; re-try every 0.5s */
}

void console_setSQL(struct Sql *SQL_handle)
{
	console->input->SQL = SQL_handle;
}
#endif /* CONSOLE_INPUT */

void console_init(void)
{
#ifdef CONSOLE_INPUT
	VECTOR_INIT(console->input->command_list);
	VECTOR_INIT(console->input->commands);
	console->input->load_defaults();
	console->input->parse_init();
#endif
}

void console_final(void)
{
#ifdef CONSOLE_INPUT
	console->input->parse_final();
	while (VECTOR_LENGTH(console->input->commands)) {
		struct CParseEntry *entry = VECTOR_POP(console->input->commands);
		if (entry->type == CPET_CATEGORY)
			VECTOR_CLEAR(entry->u.children);
		aFree(entry);
	}
	VECTOR_CLEAR(console->input->commands);
	VECTOR_CLEAR(console->input->command_list);
#endif
}

void console_defaults(void)
{
	console = &console_s;
	console->init = console_init;
	console->final = console_final;
	console->display_title = display_title;
	console->display_gplnotice = display_gplnotice;
#ifdef CONSOLE_INPUT
	console->input = &console_input_s;
	console->input->ptlock = &console_ptlock_s;
	console->input->parse_init = console_parse_init;
	console->input->parse_final = console_parse_final;
	console->input->parse_timer = console_parse_timer;
	console->input->pthread_main = cThread_main;
	console->input->parse = console_parse;
	console->input->parse_sub = console_parse_sub;
	console->input->key_pressed = console_parse_key_pressed;
	console->input->load_defaults = console_load_defaults;
	console->input->parse_list_subs = console_parse_list_subs;
	console->input->addCommand = console_parse_create;
	console->input->setSQL = console_setSQL;
	console->input->SQL = NULL;
#else
	console->input = NULL;
#endif
}
