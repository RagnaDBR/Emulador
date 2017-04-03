/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Potais nos arredores de Comodo                            |
\*-----------------------------------------------------------------*/

cmd_fild01,26,318,0	warp	cmd_beach_dun4-2	1,1,beach_dun3,281,56
cmd_fild01,222,24,0	warp	cmd_fild01-1	1,1,cmd_fild02,222,372
cmd_fild01,362,73,0	warp	cmd_fild01-2	1,1,cmd_fild03,27,68
cmd_fild01,362,263,0	warp	cmd_fild01-3	1,1,cmd_fild03,27,269
cmd_fild01,77,366,0	warp	um_fild1-1	1,1,um_fild03,114,53
cmd_fild01,178,370,0	warp	um_fild1-2	1,1,um_fild03,243,29

// ------------------------------------------------------------------
cmd_fild02,222,376,0	warp	cmd_fild02-1	1,1,cmd_fild01,222,30
cmd_fild02,382,269,0	warp	cmd_fild02-2	1,1,cmd_fild04,25,275
cmd_fild02,358,95,0	warp	cmd_fild02-3	1,1,cmd_fild04,35,94

// ------------------------------------------------------------------
cmd_fild03,23,269,0	warp	cmd_fild03-1	1,1,cmd_fild01,359,260
cmd_fild03,23,68,0	warp	cmd_fild03-2	1,1,cmd_fild01,359,76
cmd_fild03,181,17,0	warp	cmd_fild03-3	1,1,cmd_fild04,181,367

// ------------------------------------------------------------------
cmd_fild04,21,275,0	warp	cmd_fild04-1	1,1,cmd_fild02,378,264
cmd_fild04,31,92,0	warp	cmd_fild04-2	1,1,cmd_fild02,351,92
cmd_fild04,376,287,0	warp	cmd_fild04-3	1,1,cmd_fild06,26,288
cmd_fild04,180,372,0	warp	cmd_fild04-4	1,1,cmd_fild03,183,23

// ------------------------------------------------------------------
cmd_fild06,21,285,0	warp	cmd_fild06-4	1,1,cmd_fild04,371,288
cmd_fild06,151,27,0	warp	cmd_fild06-5	1,1,cmd_fild07,147,370
cmd_fild06,368,96,0	warp	cmd_fild06-6	1,1,cmd_fild08,25,102
cmd_fild06,379,174,0	warp	cmd_fild06-7	1,1,cmd_fild08,28,166
cmd_fild06,372,359,0	warp	cmd_fild06-8	1,1,cmd_fild08,31,359

// ------------------------------------------------------------------
cmd_fild07,149,379,0	warp	cmd_fild07-1	10,1,cmd_fild06,147,36
cmd_fild07,389,186,0	warp	cmd_fild07-2	1,3,cmd_fild09,18,170
cmd_fild07,193,117,0	warp	fild07-rogue00	1,1,in_rogue,379,46
cmd_fild07,355,286,0	warp	fild07-rogue03	1,1,in_rogue,247,126

// ------------------------------------------------------------------
cmd_fild08,25,355,0	warp	cmd_fild08-1	1,1,cmd_fild06,366,359
cmd_fild08,25,170,0	warp	cmd_fild08-2	1,1,cmd_fild06,374,167
cmd_fild08,15,102,0	warp	cmd_fild08-3	1,1,cmd_fild06,361,96
cmd_fild08,76,31,0	warp	cmd_fild08-4	2,1,cmd_fild09,76,375
cmd_fild08,309,48,0	warp	cmd_fild08-5	2,1,cmd_fild09,307,374
cmd_fild08,354,324,0	warp	cmd_fild08-6	1,1,moc_fild12,26,305

// ------------------------------------------------------------------
cmd_fild09,12,170,0	warp	cmd_fild09-1	1,4,cmd_fild07,382,184
cmd_fild09,369,164,0	warp	cmd_fild09-2	2,2,moc_fild18,55,170
cmd_fild09,309,381,0	warp	cmd_fild09-3	2,1,cmd_fild08,309,60
cmd_fild09,75,382,0	warp	cmd_fild09-4	2,1,cmd_fild08,75,42

// ------------------------------------------------------------------
cmd_fild08,335,355,0	warp	moc_ant1-1	3,4,anthell01,35,262
cmd_fild08,348,82,0	warp	moc_ant2-1	3,3,anthell02,168,170