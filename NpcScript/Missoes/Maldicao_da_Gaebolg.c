/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Quest da Maldi��o da Fam�lia Gaebolg                      |
\*-----------------------------------------------------------------*/

prontera,248,212,3	script	Garoto Ocupado#prtcurse	4_M_KID1,{
	if (BaseLevel > 59) {
		if (!prt_curse) {
			specialeffect(EF_HITDARK);
			mes "^3355FF*BAM!*^000000";
			next;
			mes "[Garoto Ocupado]";
			mes "Ei, olhe por onde anda!";
			mes "Voc� n�o pode ser mais cuidadoso?!";
			emotion(e_ag);
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oops, eu lamento muito.";
			mes "Voc� est� bem?";
			next;
			mes "[Garoto Ocupado]";
			mes "Sim, mas n�o gra�as a voc�!";
			mes "Oh... N�o se preocupe, eu estou bem.";
			next;
			mes "^3355FFVoc� percebe que o garoto deixou cair muitos livros de capa dura que provavelmente s�o sobre ru�nas e suas lendas, baseado no seus t�tulos.";
			mes "O garoto esquece de si pr�prio e come�a a empilhar cuidadosamente os livros.^000000";
			next;
			if (select("Deix�-lo","Ajud�-lo a empilhar os livros") == 1) {
				mes "[Garoto Ocupado]";
				mes "Da pr�xima vez, olhe por onde anda, certo?";
				mes "Digo, voc� pode quebrar algo se continuar sem cuidado!";
				prt_curse = 1;
				close;
			} else {
				if (!checkweight(Several_Books,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, voc� est� carregando muitas coisas com voc�.";
					mes "Por favor volte depois de usar o Servi�o Kafra para armazenar alguns de seus itens.^000000";
					close;
				} else {
					mes "[Garoto Ocupado]";
					mes "Ah, muito obrigado!";
					mes "Voc� n�o entende o quanto eu tenho pavor daqueles Aeroplanos.";
					mes "Agora, voc� poderia entregar estes livros para o ^FF0000Sr. Karlomoff^000000 perto da Biblioteca de Juno?";
					next;
					mes "[Garoto Ocupado]";
					mes "Eu sei que estes livros s�o muito pesados, mas tenha muito cuidado com eles!";
					mes "Sendo assim,";
					mes "Obrigado por fazer isto por mim.";
					mes "Eu quase fiquei maluco com isso...";
					prt_curse = 3;
					getitem(Several_Books,1);
					close;
				}
			}
		} else if (prt_curse == 1 || prt_curse == 2) {
			if (!checkweight(Several_Books,1)) {
				mes "^3355FFEspere um segundo!";
				mes "Agora, voc� est� carregando muitas coisas com voc�.";
				mes "Por favor volte depois de usar o Servi�o Kafra para armazenar alguns de seus itens.^000000";
				close;
			}
			mes "[Garoto Ocupado]";
			mes "Ah, Ol� novamente.";
			mes "Desculpe, mas eu estou tentando me concentrar aqui.";
			mes "Tentando invocar toda a minha coragem e em-embarcar no Aeroplano!";
			mes "Argh! N�o, n�o posso fazer isto!";
			emotion(e_dots);
			next;
			if (select("Ajud�-lo","N�o ajud�-lo") == 1) {
				mes "[Garoto Ocupado]";
				mes "Ah, muito obrigado!";
				mes "Voc� n�o entende o quanto eu tenho pavor daqueles Aeroplanos.";
				mes "Agora, voc� poderia entregar estes livros para o ^FF0000Sr. Karlomoff^000000 perto da Biblioteca de Juno?";
				next;
				mes "[Garoto Ocupado]";
				mes "Eu sei que estes livros s�o muito pesados, mas tenha muito cuidado com eles!";
				mes "Sendo assim,";
				mes "Obrigado por fazer isto por mim.";
				mes "Eu quase fiquei maluco com isso...";
				prt_curse = 3;
				setquest(18030);
				getitem(Several_Books,1);
				close;
			} else {
				mes "[Garoto Ocupado]";
				mes "^333333*Solu�o...*^000000";
				mes "O que eu farei?";
				mes "Este cara est� esperando por mim para entregar seus livros por um bom tempo agora...";
				prt_curse = 2;
				emotion(e_sob);
				close;
			}
		} else if (prt_curse == 3) {
			mes "[Garoto Ocupado]";
			mes "Oh, por favor entregue estes livros que eu lhe dei para o ^FF0000Sr. Karlomoff^000000.";
			mes "Que deve estar esperando pr�ximo da Biblioteca de Juno.";
			mes "Obrigado novamente por sua ajuda!";
			close;
		} else {
			mes "[Garoto Ocupado]";
			mes "Argh! Ser� que d� pra me deixar sozinho para que eu possa trabalhar?";
			mes "Eu tenho um trabalho importante para fazer!";
			mes "Quando eu terminar de arrumar esses livros, eu preciso...";
			mes "Preciso fazer alguns preparativos!";
			close;
		}
	} else {
		mes "[Garoto Ocupado]";
		mes "Ah, droga...";
		mes "O eu irei fazer?";
		mes "Eu tenho que entregar estes livros, mas... eu...";
		mes "Ah cara, eu n�o posso me apavorar agora!";
		close;
	}
}

// ------------------------------------------------------------------
prt_in,162,99,4	script	Bibliotec�rio#prtcurse	1_F_02,{
	if (prt_curse == 3) {
		if (countitem(Several_Books) < 1) {
			mes "[Bibliotec�rio]";
			mes "Por favor, certifique-se de colocar os livros da biblioteca no local correto ap�s t�-los usado.";
			mes "N�o temos pessoal suficiente para organizar todos esses livros...";
			next;
			if (select("Relatar a perda dos livros","Terminar Conversa") == 1) {
				if (!checkweight(Several_Books,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, voc� est� carregando muitas coisas com voc�.";
					mes "Por favor volte depois de usar o Servi�o Kafra para armazenar alguns de seus itens.^000000";
					close;
				} else {
					mes "[Bibliotec�rio]";
					mes "Oh, voc� perdeu alguns livros?";
					mes "Por favor, escreva o nome dos livros e pague a muita de 700 zenys.";
					mes "Afinal, n�s iremos lhe fornecer c�pias de substitui��o.";
					next;
					if (Zeny > 699) {
						mes "[Bibliotec�rio]";
						mes "Ah, aqui est� voc�.";
						mes "Por favor pegue essas c�pias de substitui��o, e tente n�o perd�-los de novo.";
						mes "Obrigado.";
						Zeny -= 700;
						getitem(Several_Books,1);
						close;
					} else {
						mes "[Bibliotec�rio]";
						mes "Hmm...";
						mes "Volte o mais r�pido que puder com 700 zenys para pagar a multa de perda de livros.";
						close;
					}
				}
			} else {
				mes "[Bibliotec�rio]";
				mes "Por favor fa�a sil�ncio, enquanto est� dentro da biblioteca.";
				mes "Obrigado pela compreens�o.";
				close;
			}
		} else {
			mes "[Bibliotec�rio]";
			mes "Ser um bibliotec�rio pode";
			mes "ser bem chato. Pessoas";
			mes "levam os livros todos";
			mes "desorganizados, e esperam";
			mes "que sejam organizados. Ooh, livross";
			mes "eles est�o sempre perdidos...";
			next;
			mes "[Bibliotec�rio]";
			mes "Quando voc� tem que arrumar a bagun�a deles, voc� percebe como as pessoas s�o desleixadas.";
			close;
		}
	} else {
		mes "[Bibliotec�rio]";
		mes "Ser um bibliotec�rio pode ser bem chato.";
		mes "Pessoas levam os livros todos desorganizados, e esperam que sejam organizados.";
		mes "Ooh, livros eles est�o sempre perdidos...";
		next;
		mes "[Bibliotec�rio]";
		mes "Quando voc� tem que arrumar a bagun�a deles, voc� percebe como as pessoas s�o desleixadas.";
		close;
	}
}

// ------------------------------------------------------------------
yuno,311,195,3	script	Historiador#prtcurse	4_M_SAGE_A,{
	if (prt_curse < 3) {
		mes "[Historiador]";
		mes "O Passado misterioso de Juno esconde grandes segredos.";
		mes "Tenho certeza disso!";
		mes "Me anima saber que minha pesquisa me deixar� muito perto de finalmente desvend�-lo!";
		next;
		mes "[Historiador]";
		mes "Mas eu tenho que admitir que eu ainda n�o sei o quanto eu terei de cavar para descobrir o que eu quero.";
		mes "� nosso dever, como historiadores descobrir a verdade sobre o passado, mas isto n�o ser� f�cil.";
		next;
		mes "[Historiador]";
		mes "Para entender, para ver a verdade do passado com meus pr�prios olhos...";
		mes "Eu at� venderia minha alma pela oportunidade.";
		close;
	} else if (prt_curse == 3) {
		mes "^3355FFEnquanto voc� se aproximava, este historiador de repente fechou o livro que estava lendo.";
		mes "Olhou para cima, e suspirou profundamente em uma v� tentativa de aliviar sua tens�o.^000000";
		next;
		mes "[Historiador]";
		mes "GRRRRRRRRR!";
		mes "Onde est�o meus livros?!";
		emotion(e_ag);
		next;
		select("Voc� est� bem?");
		mes "[Historiador]";
		mes "Er? Oh. Desculpe por voc� ter visto isso.";
		mes "S� estou extremamente chateado.";
		mes "� o seguinte:";
		mes "Eu estou esperando uma entrega de uns livros de pesquisa de Prontera, mas eles ainda n�o chegaram.";
		next;
		mes "[Historiador]";
		mes "Na verdade, o garoto da entrega est� muito atrasado.";
		mes "Isso ir� atrasar minha pesquisa consideravelmente, j� que eu n�o posso prosseguir sem material novo para estudar.";
		next;
		if (!countitem(Several_Books)) {
			select("Oh, eu estou fazendo a entrega dos livros para ele.");
			emotion e_what;
			mes "[Historiador]";
			mes "Ah, �?";
			mes "�timo, voc� est� aqui!";
			mes "Ent�o, onde est�o os livros?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Eu...";
			mes "Eles n�o est�o comigo no momento.";
			next;
			mes "[Historiador]";
			mes "Qu�...?";
			mes "N�o vai me dizer que voc� os perdeu!";
			mes "Aqueles livros n�o tinham pre�o!";
			mes "Voc� veio at� aqui s� para me dizer isso?";
			next;
			mes "[Historiador]";
			mes "Bem, eu acho que voc� terpa que relatar a perda dos livros e ir pegar algumas c�pias novas dos livros que voc� deveria ter entregue.";
			mes "Agora v� logo, eu tenho que trabalhar!";
			close;
		} else {
			select("Com licen�a, mas qual � o seu nome?");
			mes "[Historiador]";
			mes "Hm? Eu sou Karlomoff, o principal estudioso do Grupo de Pesquisa Hist�rica Rekenber.";
			mes "Voc� precisa de algo, ou est� procurando por algu�m em especial?";
			next;
		}
		select("Certo, eu trouxe os seus livros.");
		mes "[Historiador]";
		mes "O que? Mas voc� n�o � o garoto da entrega.";
		mes "Bem, deixe-me ver os livros que voc� trouxe. Hm...";
		mes "Assim como eu pensei: o Reino de Rune-Midgard tem uma grande quantidade de informa��es antigas.";
		next;
		mes "[Historiador]";
		mes "Ah, muito obrigador por trazer estes livros.";
		mes "No entanto, pelo seu modo de vestir, posso dizer que voc� � um aventureiro.";
		mes "O que aconteceu com o garoto da entrega que deveria trazer estes livros para mim.";
		next;
		mes "[Historiador]";
		mes "..........?";
		mes "Medo de andar de Aeroplano?";
		mes "Medo de altura?";
		mes "Bem, isso � perfeitamente compreensivo.";
		mes "O pobre garoto deveria ter me falado sobre isso antes.";
		next;
		mes "[Historiador]";
		mes "Bem, j� se passou um tempo desde que eu tive uma visita.";
		mes "Voc� gostaria de ficar para conversar um pouco?";
		mes "Me d� um minuto para pegar um copo de �gua gelada.";
		prt_curse = 4;
		delitem(Several_Books,1);
		close;
	} else if (prt_curse == 4) {
		mes "[Historiador]";
		mes "Ah, esse copo de �gua era tudo que eu precisava para me refrescar.";
		mes "Deixe lhe contar um pouco sobre o meu trabalho.";
		next;
		mes "[Historiador]";
		mes "Eu devia ter mencionado antes.";
		mes "Mas meu nome � Karlomoff e eu trabalho no Grupo de Pesquisa Hist�rica Rekenber como seu estudioso principal.";
		mes "Recentemente n�es terminamos nosso projeto na Rep�blica de Schwaltzvalt.";
		next;
		mes "[Historiador]";
		mes "Agora, n�s estamos tentando aprender";
		mes "mais sobre a hist�ria do Reino de";
		mes "Rune-Midgard.";
		mes "N�s acreditamos que esteja ligada a Rep�blica de Schwaltzvalt por que partilham do mesmo continente.";
		mes "Faz sentido, certo?";
		next;
		mes "[Historiador]";
		mes "Por fim, esperamos que novas informa��es da nossa pesquisa de Rune-Midgard trar�o uma nova luz sobre a atual compreens�o do passado Rep�blica Schwaltzvalt.";
		next;
		mes "[Historiador]";
		mes "Incluindo eu mesmo, h� mais ^3131FF3 membros do Grupo de Pesquisa Hist�rica Rekenber^000000.";
		mes "Que est�o estudando a hist�ria do Reino de Rune-Midgard.";
		next;
		select("Grupo de Pesquisa Hist�rica Rekenber?");
		mes "[Historiador]";
		mes "Voc�s aventureiros de Rune-";
		mes "Midgarts podem n�o saber, mas";
		mes "a Corpora��o Rekenber tem";
		mes "controle n�o oficial sobre";
		mes "a Rep�blica de Schwaltzvalt.";
		mes "Alguns n�o gostam disso, outros n�o ligam.";
		next;
		mes "[Historiador]";
		mes "De qualquer modo, Rekenber tem seu pr�prio Grupo de Pesquisa Hist�rica desde a redescoberta de tecnologias antigas";
		mes "Tem sido fundamental para seu sucesso.";
		mes "Assim t�o longe quanto posso dizer.";
		mes "Pessoalmente, eu gosto de buscar pelo conhecimento.";
		next;
		mes "[Historiador]";
		mes "Ah, aqui est� um fato interessante!";
		mes "Voc� sabia que o t�tulo de nobreza de Rune-Midgarts nem sempre � passado atrav�s de uma mesma fam�lia?";
		next;
		mes "[Historiador]";
		mes "Na verdade, existem v�rias fam�lias reais que realizam uma competi��o especial para decidir qual pr�ncipe ser� o pr�ximo rei.";
		mes "Fascinante...";
		next;
		select("V�rias fam�lias reais?");
		mes "[Historiador]";
		mes "Sim, vou tentar explicar isto rapidamente.";
		mes "H� um total de 7 fam�lias reais.";
		mes "Cada fam�lia � descendente de um dos 7 guerreiros que fundaram o Reino de Rune-Midgard.";
		next;
		mes "[Historiador]";
		mes "De acordo com os registros Jormungand, a serpente da terra, apareceu e trouxe o caos para todo o continente.";
		mes "7 guerreiros apareceram e levaram esta serpente para longe, salvando o mundo.";
		next;
		mes "[Historiador]";
		mes "Com o retorno da paz, os 7 guerreiros estabeleceram o Reino de Rune-Midgard.";
		mes "Escolher�o Tristram Gaebolg 3� como o primeiro governante do reino.";
		next;
		mes "[Historiador]";
		mes "Sabendo que seus descendentes podem n�o serem sempre merecedores de mandar no Reino.";
		mes "Os 7 guerreiros concordaram em realizar uma competi��o entre cada gera��o de suas fam�lias para prevenir a corrup��o.";
		next;
		emotion(e_swt2);
		mes "[Historiador]";
		mes "Oh... N�o est� muito animado com esta hist�ria, huh?";
		mes "Bem, talvez se eu cantar o antigo poema sobre este mito, voc� dever� entender melhor...";
		next;
		mes "[Historiador]";
		mes "^FF0000*A grande serpente engoliu o mar.*^000000";
		mes "^FF0000*A �guia do arco-�ris engoliu a serpente.*^000000";
		mes "^FF0000*A �guia ent�o construiu seu ninho.*^000000";
		mes "^FF0000*Um ninho sob o mar encoberto.*^000000";
		next;
		mes "[Historiador]";
		mes "^333333*Ahem*^000000 Como v�, estou um pouco surdo.";
		mes "Mas o ponto � que as pessoas continuam a elogiar os 7 guerreiros gra�as a essa can��o.";
		mes "N�o � interessante saber sobre isso?";
		prt_curse = 5;
		close;
	} else if (prt_curse == 5) {
		mes "[Historiador]";
		mes "Me desculpe se eu fiquei falando demais sobre o hist�rico de Rune-Midgard.";
		mes "Contudo, eu espero que voc� tenha achado este conto pelo menos um pouco agrad�vel.";
		next;
		mes "[Historiador]";
		mes "Oh! Voc� est� retornando ao Reindo de Rune-Midgard?";
		mes "Se estiver, ent�o eu tenho um favor para lhe pedir.";
		mes "Voc� poderia entregar este relat�rio que eu escrevi para minha colega, em Morroc?";
		next;
		mes "[Historiador]";
		mes "Seria um grande ajuda para mim, se voc� pudesse levar este relat�rio para ela.";
		mes "Ah, o nome dela � Rodafrian.";
		mes "Estou certo de que voc� pode encontr�-la em algum lugar na cidade do deserto.";
		changequest(18030,18031);
		prt_curse = 6;
		getitem(File01,1);
		close;
	} else if (prt_curse == 6) {
		mes "[Historiador]";
		mes "Por favor encontre minha colega, Rodafrian, em Morroc e entregue meu relat�rio para ela.";
		mes "Voc� deve ser capaz de encontr�-la buscando pelos edif�cios da cidade.";
		next;
		if (select("Eu irei","Posso escutar o poema novamente?") == 1) {
			mes "[Historiador]";
			mes "Mais uma vez, obrigado pela sua ajuda.";
			mes "Isso ir� agilizar o processo de minha pesquisa, especialmente porque estes livros foram entregues com atraso...";
			close;
		} else {
			mes "[Historiador]";
			mes "Poema? Ah, voc� diz o elogio aos 7 que fundaram o Reino de Rune-Midgard?";
			mes "Claro, vamos ver...";
			next;
			mes "[Historiador]";
			mes "^FF0000*A grande serpente engoliu o mar.*^000000";
			mes "^FF0000*A �guia do arco-�ris engoliu a serpente.*^000000";
			mes "^FF0000*A �guia ent�o construiu seu ninho.*^000000";
			mes "^FF0000*Um ninho sob o mar encoberto.*^000000";
			next;
			mes "[Historiador]";
			mes "Voc� deve estar mais interessado na hist�ria do que eu pensei.";
			mes "Se voc� quiser, eu posso escrever uma carta ou recomenda��o para Grupo de Pesquisa Hist�rica Rekenber.";
			close;
		}
	} else {
		mes "[Historiador]";
		mes "Ah, j� se passou um tempo desde a ultima vez que vi voc�.";
		mes "Rodafrian veio me visitar a alguns dias atr�s.";
		mes "Eu pensei que ela viria aqui para me dar bronca ou amea�ar...";
		next;
		mes "[Historiador]";
		mes "Foi muito surreal.";
		mes "Ela segurou sua raiva gra�as a uma incr�vel revela��o e finalmente me colocar no meu lugar.";
		mes "Eu n�o sabia que ela poderia ser t�o competitiva!";
		close;
	}
}

// ------------------------------------------------------------------
morocc_in,45,126,3	script	Historiadora#prtcurse	4_F_GON,{
	if (prt_curse == 6) {
		if (!countitem(File01)) {
			mes "^3355FFVoc� parece ter perdido o Relat�rio de Karlomoff.";
			mes "Voc� precisa entreg�-lo para um de seus colegas neste local...";
			close;
		} else {
			mes "[Historiadora Rodafrian]";
			mes "Ah, porque este local tem que ser t�o quente?";
			mes "Isso n�o pode ser bom para minha pele...";
			mes "Aah, eu queria estar de volta em minha casa na Rep�blica de Schwaltzvalt.";
			emotion(e_sob);
			next;
			mes "[Historiadora Rodafrian]";
			mes "Ol�.";
			mes "Co-Com licen�a, posso ajud�-lo?";
			next;
			select("O Sr. Karlomoff me enviou.");
			mes "[Historiadora Rodafrian]";
			mes "Karlomoff...?";
			mes "Ele? Tudo bem...";
			mes "O que ele enviou para mim?";
			next;
			mes "^3355FFVoc� entrega relat�rio de Karlomoff para Rodafrian.^000000";
			next;
			mes "[Historiadora Rodafrian]";
			mes "Um relat�rio?";
			mes "O que � que ele quer me mostrar dessa vez?";
			mes "^333333*Suspiro*^000000";
			mes "Oh bem, obrigada pelo problema.";
			mes "Eu irei olhar o relat�rio, apesar de n�o esperar muito j� que Karlomoff escreveu este relat�rio.";
			next;
			if (select("Perguntar a ela sobre a pesquisa","Parar Conversa") == 1) {
				mes "[Historiadora Rodafrian]";
				mes "Ah, voc� sabe sobre o Grupo Hist�rico de Pesquisa Rekenber?";
				mes "Karlomoff j� deve ter falado com voc�.";
				mes "Atualmente estamos pesquisando sobre o Reino de Rune-Midgard.";
				next;
				mes "[Historiadora Rodafrian]";
				mes "Agora, embora eu entenda o valor de livros antigos e registros.";
				mes "Eu acho que Karlomoff se baseia neles demais.";
				mes "Eu prefiro a investiga��o ativa que est� na veia de um arque�logo.";
				next;
				mes "[Historiadora Rodafrian]";
				mes "No momento, eu estou gastando tempo em Morroc para visitar a";
				mes "Esfinge e as Pir�mides e ver se eu posso escavar algumas rel�quias.";
				mes "Felizmente eu posso descobrir alguma nova evid�ncia hist�rica por l�.";
				next;
				mes "[Historiadora Rodafrian]";
				mes "Se voc� est� interessado em aprender mais sobre a hist�ria de Morroc, ent�o v� adiante e fale com meu assistente.";
				mes "Ele � apaixonado por estudar a cultura e conhecimento desta cidade.";
				next;
				mes "[Historiadora Rodafrian]";
				mes "Realmente, o povo de Morroc sabe apreciar a hist�ria da cidade, e passa o poema sobre os tempos antigos atrav�s das gera��es.";
				mes "Vamos ver, como era mesmo?";
				next;
				mes "[Historiadora Rodafrian]";
				mes "^FF0000*A grande serpente*^000000";
				mes "^FF0000*engoliu o mar.*^000000";
				mes "^FF0000*A �guia do arco-�ris*^000000";
				mes "^FF0000*engoliu a serpente, e*^000000";
				mes "e... e... Hm. Ah cara.";
				next;
				mes "[Historiadora Rodafrian]";
				mes "Eu n�o consigo lembrar a pr�xima linha!";
				mes "Por acaso voc� j� escutou este poema antes?";
				next;
				switch (select("Sim, ja ouvi","Sim, mas � diferente","N�o")) {
					case 1:
					mes "[Historiadora Rodafrian]";
					mes "Ah, isso � �timo!";
					mes "Poderia me dizer qual a linha que segue essa letra?";
					next;
					mes "^FF0000*A grande serpente*^000000";
					mes "^FF0000*engoliu o mar.*^000000";
					mes "^FF0000*A �guia do arco-�ris*^000000";
					mes "^FF0000*engoliu a serpente.*^000000";
					mes "......................";
					next;
					input(.@answer$);
					if (.@answer$ == "Ent�o a �guia construiu seu ninho.") {
						mes "[Historiadora Rodafrian]";
						mes "S�rio? Faz sentido, mas estas letras s�o diferentes das que eu escutei.";
						mes "Hmmmm...";
						mes "Se voc� n�o se importa, poderia me dizer o seu nome?";
						break;
					} else {
						mes "[Historiadora Rodafrian]";
						mes "Huh...?";
						mes "Isso n�o parece nada com o que eu escutei.";
						mes "Voc� tem certeza de que essa � a letra que escutou?";
						prt_curse = 7;
						close;
					}
					case 2:
					mes "[Historiadora Rodafrian]";
					mes "Como �?";
					mes "O poema � diferente?";
					mes "Hmm....";
					mes "Ent�o, poderia cantar a vers�o que voc� sabe para mim?";
					next;
					mes "^3355FFVoc� limpa a sua garganta e come�a a cantar o poema que voc� escutou de Karlomoff.^000000";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					input(.@line$);
					if (.@line$ == "A grande serpente engoliu o mar.") {
						.@total += 1;
						mes "*A grande serpente*";
						mes "*engoliu o mar.*";
					} else {
						mes "* "+.@line$+"*";
					}
					input(.@line$);
					if (.@line$ == "A �guia do arco-�ris engoliu a serpente.") {
						.@total += 1;
						mes "*A �guia do arco-�ris*";
						mes "*engoliu a serpente.*";
					} else {
						mes "*"+.@line$+"*";
					}
					input(.@line$);
					if (.@line$ == "A �guia ent�o construiu seu ninho.") {
						.@total += 1;
						mes "*A �guia ent�o construiu seu ninho.*";
					} else {
						mes "*"+.@line$+"*";
					}
					input(.@line$);
					if (.@line$ == "Um ninho sob o mar encoberto.") {
						.@total += 1;
						mes "*Um ninho sob o mar encoberto.*";
					} else {
						mes "*"+.@line$+"*";
					}
					next;
					if (.@total == 4) {
						mes "[Historiadora Rodafrian]";
						mes "S�rio? Faz sentido, mas estas letras s�o diferentes das que eu escutei.";
						mes "Hmmmm...";
						mes "Se voc� n�o se importa, poderia me dizer o seu nome?";
						break;
					} else {
						mes "[Historiadora Rodafrian]";
						mes "Huh...?";
						mes "Isso n�o parece nada com o que eu escutei.";
						mes "Voc� tem certeza de que essa � a letra que escutou?";
						prt_curse = 7;
						close;
					}
					case 3:
					mes "[Historiadora Rodafrian]";
					mes "............";
					mes "........................";
					mes "Pois bem.";
					mes "Voc� poderia me dizer o seu verdadeiro nome, aventureiro?";
					break;
				}
				next;
				mes "[Historiadora Rodafrian]";
				mes "Pe�o desculpas para pedir a para fazer uma coisa que parece ser coletiva.";
				mes "Mas eu preciso muito de saber as letras do poema pelo bem de minha conversa...";
				delitem(File01,1);
				prt_curse = 8;
				changequest(18031,18032);
				close;
			} else {
				mes "[Historiadora]";
				mes "Embora eu ame fazer pesquisas e descobrir novas informa��es hist�ricas.";
				mes "Me sinto solit�ria algumas vezes.";
				mes "N�o s�o muitas as pessoas que compartilham o meu interesse, voc� sabe...";
				close;
			}
		}
	} else if (prt_curse == 7) {
		mes "^3355FFCom os bra�os cruzados, Rodafrian parece pensar profundamente.";
		mes "Ent�o, como se ela estivesse tomando uma decis�o importante.";
		mes "Ela olha diretamente em seus olhos e come�a a falar.^000000";
		next;
		mes "[Historiadora Rodafrian]";
		mes "Aventureiro...";
		mes "Quero saber o seu nome.";
		next;
		select("Meu nome � "+strcharinfo(CHAR_NAME)+".");
		mes "[Historiadora Rodafrian]";
		mes "Ah "+strcharinfo(CHAR_NAME)+", �?";
		mes "Ser� que eu posso lhe pedir um favor?";
		mes "Eu realmente preciso verificar se s�o verdadeiras as letras deste poema.";
		mes "No entanto, eu preciso ficar aqui em Morroc para completar minha pesquisa.";
		next;
		mes "[Historiadora Rodafrian]";
		mes "Voc� poderia encontrar meu colega Mondo e perguntar a ele sobre as letras do poema?";
		mes "Voc� pode encontr�-lo nas ru�nas antigas no Monte Mjolnir, a norte do Reino de Rune-Midgard.";
		next;
		mes "[Historiadora Rodafrian]";
		mes "Pe�o desculpas para pedir a para fazer uma coisa que parece ser coletiva.";
		mes "Mas eu preciso muito de saber as letras do poema pelo bem de minha conversa...";
		delitem(File01,1);
		prt_curse = 8;
		changequest(18031,18032);
		close;
	} else if (prt_curse > 7 && prt_curse < 30) {
		mes "[Historiadora Rodafrian]";
		mes "Pelo que me lembro, Mondo deve estar no Monte Mjolnir, localizado na regi�o norte do Reino de Rune-Midgard.";
		mes "Pergunte a ele pelas letras do poema que eu n�o consigo me lembrar...";
		close;
	} else if (prt_curse == 30 || prt_curse == 55) {
		mes "[Historiadora Rodafrian]";
		mes "Oh, voc� retornou.";
		mes "Voc� se encontrou com Mondo e conseguiu as letras do poema que eu estava procurando?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^FF0000*A grande serpente*^000000";
		mes "^FF0000*engoliu o mar.*^000000";
		mes "^FF0000*A �guia do arco-�ris*^000000";
		mes "^FF0000*engoliu a serpente.*^000000";
		mes "^FF0000*Ent�o escamas de cobra cresceram*^000000";
		mes "^FF0000*na �guia, e ela morreu lentamente.*^000000";
		next;
		mes "[Historiadora Rodafrian]";
		mes "Ah, sim!";
		mes "Sim, era isso!";
		mes "Agora eu lembrei, muito obrigada!";
		mes "Ah, de volta ao trabalho...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^333333(Como historiadora, Rodafrian talvez possa me ajudar na investiga��o sobre a maldi��o dos Gaebolgs.";
		mes "Os sacerdotes me disseram para n�o contar a ningu�m, sem exce��o.";
		mes "Eu devo correr este risco?)^000000";
		next;
		if (select("Dizer a ela sobre a Maldi��o de Jormungand","N�o dizer a ela") == 1) {
			mes "^3355FFVoc� explica tudo que voc� aprendeu para Rodafrian, escolhendo n�o esconder nenhum segredo.^000000";
			emotion(e_ic);
			next;
			mes "[Historiadora Rodafrian]";
			mes ".....................!";
			emotion(e_gasp);
			next;
			mes "[Historiadora Rodafrian]";
			mes "Obrigada por compartilhar isso comigo.";
			mes "Espero que voc� perceba como essa informa��o � preciosa.";
			mes "EU n�o tinha id�ia de que a fam�lia real mantinha essa esp�cie de segredo.";
			mes "�timo para mim...";
			next;
			mes "[Historiadora Rodafrian]";
			mes "Voc� sabe, eu n�o sei muito sobre veneno, mas eu sei que, pelos nossos pr�prios Mercen�rios.";
			mes "S�o especialistas em veneno vivendo em alguma terra estranha localizada a oeste.";
			next;
			mes "[Historiadora Rodafrian]";
			mes "Sendo assim, seu relat�rio sobre a fam�lia Gaebolg ser� muito apreciado pelo Grupo de Pesquisa Hist�rica Rekenber.";
			mes "Mas primeiro, eu preciso terminar este projeto de Morroc...";
			next;
			mes "[Historiadora Rodafrian]";
			mes "De qualquer forma, mantenha esta informa��o como segredo entre eu e voc� por enquanto.";
			mes "Ent�o, quando eu revelar o segredo da Maldi��o de Gaebolg sobre a fam�lia real.";
			mes "Eeu finalmente deixarei Karmoloff para tr�s! Muahahahahaha!";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333(Droga, ela n�o me ajudou em nada...";
			mes "Tudo que eu fiz foi revelar um grande segredo a ela com o risco dela sair espalhando!";
			mes "Ah bem, acho melhor voltar para os sacerdotes...)^000000";
			if (prt_curse == 30) {
				prt_curse = 31;
				changequest(18042,18044);
			} else {
				prt_curse = 60;
				changequest(18051,18052);
			}
			close;
		} else {
			mes "[Historiadora Rodafrian]";
			mes "Ah, deixe-me lhe agrade�er mais uma vez por resolver o problema conseguindo as letras do poema para mim.";
			mes "Eu j� coloquei meu assistente em problemas o suficiente...";
			next;
			mes "[Historiadora Rodafrian]";
			mes "Eu tamb�m n�o posso me esquecer de enviar o relat�rio de Karlomoff.";
			mes "Eu terei que ter um debate com ele mais cedo ou mais tarde, e eu quero de verdade colocar este cara em seu lugar!";
			next;
			mes "^3355FFRodafrian parece muito feliz e come�a a ler o relat�rio de Karlomoff.";
			mes "Por enquanto, � melhor voltar ao Padre Bamph.^000000";
			if (prt_curse == 30) {
				prt_curse = 40;
				changequest(18042,18045);
			} else {
				prt_curse = 56;
				completequest(18051);
			}
			close;
		}
	} else if (prt_curse == 31 || prt_curse == 40) {
		mes "^3355FFRodafrian parece muito feliz e come�a a ler o relat�rio de Karlomoff.";
		mes "Por enquanto, � melhor voltar ao Padre Bamph.^000000";
		close;
	} else if (prt_curse == 56) {
		emotion(e_an);
		mes "[Historiadora Rodafrian]";
		mes "Eu pago para ter uma visita a do que eu tenho na mente!";
		mes "Eu acho que colocarei ele em seu lugar.";
		mes "Mas eu nunca poderia falar calmamente com este cara...";
		close;
	} else if (prt_curse == 60) {
		emotion(e_an);
		mes "[Historiadora Rodafrian]";
		mes "Eu pago para ter uma visita a do que eu tenho na mente! Eu acho...";
		mes "Eu acho que colocarei ele em seu lugar.";
		mes "Mas eu nunca poderia falar calmamente com este cara...";
		next;
		mes "N�o parece que";
		mes "Rodafrian possa lhe oferecer mais nenhuma informa��o.";
		mes "Mas agora, seria melhor ir para a ^3355FFCatedral de Prontera.^000000";
		close;
	} else {
		mes "[Historiadora Rodafrian]";
		mes "Lamento, mas eu estou muito ocupada com a pesquisa no momento.";
		mes "Talvez possamos conversar depois que eu terminar aqui?";
		close;
	}
}

// ------------------------------------------------------------------
mjolnir_01,135,168,3	script	Historiador#prtcurse2	4_M_SAGE_A,{
	if (prt_curse == 8) {
		mes "[Historiador Mondo]";
		mes "Com licen�a...";
		mes "Mas se voc� n�o tem nada importante para mim, ent�o poderia me deixar em paz?";
		mes "Eu preciso pesquisar para atender a...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Me desculpe, mas a Sra. Rodafrian me pediu para lhe perguntar pelas letras de um poema.";
		mes "Que explica a cria��o do Reino de Rune-Midgard.";
		mes "Poderia me dizer para passar para ela?";
		next;
		mes "[Historiador Mondo]";
		mes "Rodafrian? Ah, ela deve estar falando do poema de quando �ramos crian�as.";
		mes "Como era mesmo?";
		mes "Ah, agora eu me lembrei...";
		next;
		mes "[Historiador Mondo]";
		mes "^FF0000*A grande serpente*^000000";
		mes "^FF0000*engoliu o mar.*^000000";
		mes "^FF0000*A �guia do arco-�ris*^000000";
		mes "^FF0000*engoliu a serpente.*^000000";
		mes "^FF0000*Ent�o escamas de cobra cresceram*^000000";
		mes "^FF0000*na �guia, e ela morreu lentamente.*^000000";
		next;
		select("...........?");
		mes "[Historiador Mondo]";
		mes "Sim, eu sei: o poema � bastante m�rbido, apesar do fato de que ele � cantado como um poema feliz.";
		mes "Algumas vezes estes pequenos poemas s�o feitos para assustarem crian�as para que elas fa�am o bem.";
		next;
		select("Com licen�a...");
		mes "[Historiador Mondo]";
		mes "Hm? Voc� parece confuso.";
		mes "Voc� tem alguma pergunta para fazer sobre este poema?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Na verdade, eu ouvi uma vers�o diferente deste poema.";
		mes "Ent�o eu estava me perguntando porque as letras s�o diferentes...";
		next;
		mes "[Historiador Mondo]";
		mes "S�rio?";
		mes "Bem ent�o, deixe-me escutar a vers�o que voc� escutou, come�ando do in�cio.";
		next;
		callsub(S_Song);
	} else if (prt_curse == 9) {
		mes "[Historiador Mondo]" ;
		mes "Ah, voc� poderia me dizer as letras da vers�o do poema sobre o mito da cria��o do Reino de Rune-Midgard que voc� ouviu?";
		next;
		callsub(S_Song);
	} else if (prt_curse == 10) {
		mes "[Historiador Mondo]";
		mes "Interessante...";
		mes "A vers�o que voc� ouviu de Karlomoff � diferente da que eu sei.";
		mes "� poss�vel que essa vers�o seja a mais aut�ntica.";
		next;
		mes "[Historiador Mondo]";
		mes "Afinal, eu aprendi";
		mes "esta vers�o que eu sei";
		mes "escutando um garoto";
		mes "cant�-la.";
		next;
		select("Um garoto?");
		mes "[Historiador Mondo]";
		mes "Eh. Eu acho que esta vers�o";
		mes "que o garoto cantou possa ter";
		mes "se modificado quando foi passada";
		mes "de boca a boca pelas gera��es. Se voc� quiser saber mais, voc�";
		mes "provavelmente deve encontrar este garoto.";
		next;
		mes "[Historiador Mondo]";
		mes "De qualquer forma, Karlomoff deve ter a vers�o mais fiel do poema.";
		mes "J� que ele � bom em aquisi��es e autentica��es de registros hist�ricos escritos.";
		mes "Essa � a sua especialidade.";
		next;
		mes "[Historiador Mondo]";
		mes "Ah, Se voc� quiser saber mais, ent�o voc� deve tentar encontrar o garoto que estava cantando o poema.";
		mes "Hmm, ele deve estar ^3131DDperto do rio que fica aqui^000000.";
		mes "Felizmente n�o ser� dif�cil de encontr�-lo.";
		next;
		mes "[Historiador Mondo]";
		mes "Assim que voc� puder falar com o garoto, v� e fale sobre isso para Rodafrian.";
		mes "Ela provavelmente precisa saber logo, e eu posso falar com este pequeno garoto por minha vontade, mas...";
		next;
		mes "[Historiador Mondo]";
		mes "Pois bem, eu espero que voc� encontre o que est� procurando.";
		mes "Boa sorte em suas viagens, aventureiro.";
		prt_curse = 11;
		changequest(18032,18033);
		close;
	} else {
		mes "[Historiador Mondo]";
		mes "Este n�o � um lindo lugar?";
		mes "N�o me admira que povos antigos escolheram viver por aqui...";
		close;
	}

	S_Song:
	mes "["+strcharinfo(CHAR_NAME)+"]";
	input(.@line$);
	if (.@line$ == "A grande serpente engoliu o mar") {
		.@total += 1;
		mes "*A grande serpente*";
		mes "*engoliu o mar.*";
	} else {
		mes "*"+.@line$+"*";
	}
	input(.@line$);
	if (.@line$ == "A �guia do arco-�ris engoliu a serpente") {
		.@total += 1;
		mes "*A �guia do arco-�ris*";
		mes "*engoliu a serpente.*";
	} else {
		mes "*"+.@line$+"*";
	}
	input(.@line$);
	if (.@line$ == "A �guia ent�o construiu seu ninho") { .@total += 1; }
	mes "*"+.@line$+"*";
	input(.@line$);
	if (.@line$ == "Um ninho sob o mar encoberto") { .@total += 1; }
	mes "*"+.@line$+"*";
	if (.@total == 4) {
		prt_curse = 10;
	} else {
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espera, espera...";
		mes "Eu acho que misturei tudo!";
		mes "(Estas n�o s�o as letras corretas...)";
		prt_curse = 9;
	}
	close;
}

// ------------------------------------------------------------------
mjolnir_01,316,268,3	script	Mulher Exausta#prtcurse	4_F_CAPEGIRL,{
	if (prt_curse == 11) {
		mes "[Garoto Distra�do]";
		mes "A grande serpente engoliu o mar.";
		mes "A �guia do arco-�ris engoliu a serpente.";
		mes "Ent�o escamas de cobra cresceram na �guia, e ela morreu lentamente.";
		next;
		mes "[Mulher Parecendo Exausta]";
		mes "Pelo amor de Deus...!";
		mes "Poderia por favor parar de cantar este poema?";
		next;
		mes "[Garoto Distra�do]";
		mes "..................";
		next;
		mes "^3355FFO pequeno garoto calmamente olha para a mulher por um momento.";
		mes "Em seguida se agacha e come�a a brincar com o cachorro perto dele.^000000";
		next;
		if (select("O que voc� acabou de cantar?","Ignorar") == 1) {
			mes "[Garoto Distra�do]";
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "[Garoto Distra�do]";
			mes "Au-au, voc� escutou este poema?";
			mes "Mam�e me ensinou a cantar, voc� sabe.";
			mes "Ela diz que foi cantado por pessoas por muito tempo.";
			next;
			mes "^3355FFO garoto continuou falando com o cachorro como se fosse um velho amigo, ignorando a sua presen�a e agindo como se voc� n�o existisse.^000000";
			next;
			mes "[Mulher Parecendo Exausta]";
			mes "Kaanu...";
			mes "O que eu lhe disse sobre ignorar as perguntas de pessoas!";
			next;
			mes "[Garoto Distra�do]";
			mes ".........";
			mes "..................";
			mes "Uh oh, Au-au.";
			mes "Mam�e parece perturbada por algum motivo.";
			next;
			mes "[Mulher Parecendo Exausta]";
			mes "Me desculpe, meu garoto �...";
			mes "Olha, voc� quer saber mais sobre este poema?";
			mes "Tente n�o se preocupar com isso, � apenas uma m�sica infantil.";
			next;
			if (select("O que voc� faz aqui?","Posso ouvir o poema novamente?") == 1) {
				mes "[Mulher Parecendo Exausta]";
				mes ".................";
				next;
				mes "^3355FFA mulher parece estar envergonhada.";
				mes "� �bvio que este assunto deixa ela desconfort�vel.^000000";
				next;
				mes "[Garoto Distra�do]";
				mes "...";
				mes "......";
				mes ".........";
				next;
				mes "[Garoto Distra�do]";
				mes "Au-au, voc� sabe porque mam�e est� sempre triste?";
				mes "Gostaria de saber porqu� minha m�e nunca sorri...";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "........";
				prt_curse = 12;
				close;
			} else {
				mes "[Mulher Parecendo Exausta]";
				mes "..................";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "Ok. Eu posso fazer essa coisa para voc�.";
				mes "Deixe-me recitar este poema...";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "A grande serpente engoliu o mar.";
				mes "A �guia do arco-�ris engoliu a serpente.";
				mes "Ent�o escamas de cobra cresceram na �guia, e ela morreu lentamente.";
			}
			prt_curse = 12;
			close;
		} else {
			mes "...........";
			close;
		}
	}
	if (strnpcinfo(NPC_NAME) == "Mulher Exausta#prtcurse") {
		if (prt_curse == 12) {
			if (!checkweight(Leather_Pouch,1)) {
				mes "^3355FFEspere um segundo!";
				mes "Agora, voc� est� carregando muitas coisas com voc�.";
				mes "Por favor volte depois de usar o Servi�o Kafra para armazenar alguns de seus itens.^000000";
				close;
			} else {
				mes "[Mulher Parecendo Exausta]";
				mes "A grande maioria das pessoas n�o gostam de vir a esta �rea remota.";
				mes "O que voc� procura aqui para ter passado por todo esse caminho, eu me pergunto?";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Na verdade, eu estou apenas tentando aprender a verdadeira letra do poema que este garoto estava cantando.";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes ".........";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "As letras deste poema, e o seu significado, pode mudar de pessoa para pessoa com o passar do tempo.";
				mes "Eu acho que isto ocorre porque este poema passa para cada pessoa oralmente...";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "Este poema parece tem parece feliz, mas seu significado mudou para mim desde que o acidente aconteceu...";
				mes "Aconteceu a muito tempo atr�s, mas eu n�o acho que a dor ir� se curar.";
				next;
				select("Acidente?");
				mes "[Mulher Parecendo Exausta]";
				mes "Eu... Eu lamento.";
				mes "N�o acho que eu possa falar sobre isso.";
				mes "Se eu tentar, eu irei reviver o horror.";
				mes "Todo dia j� � uma luta para pagar os pecados que eu cometi.";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "Eu sei que isto � ego�sta, mas eu tenho um favor para pedir a voc�.";
				mes "Eu n�o posso deixar esta �rea, e raramente eu recebo visitantes.";
				mes "Poderia fazer a gentileza de entregar algo em Prontera para mim?";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "Eu costumava viver em Prontera, e desde o acidente, o Padre Bamph tem me apoiado tanto.";
				mes "N�o � o suficiente para retribuir sua bondade, mas por favor entregue estas ervas para ele por mim.";
				next;
				mes "[Mulher Parecendo Exausta]";
				mes "Voc� pode encontrar o ^3131FFPadre Bamph^000000 na ^3131FFCatedral de Prontera^000000.";
				mes "Quando voc� ver ele, por favor d� a ele meus cumprimentos.";
				mes "Eu gostaria de fazer eu mesma, mas por causa do que eu fiz, eu n�o posso retornar a Prontera...";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "^333333Est� certo ent�o.";
				mes "Eu acho que devo entregar estas ervas na Catedral de Prontera depois de falar com Rodafrian.^000000";
				getitem(Leather_Pouch,1);
				prt_curse = 13;
				changequest(18033,18034);
				close;
			}
		} else if (prt_curse > 12 && prt_curse < 16) {
			mes "[Mulher Parecendo Exausta]";
			mes "Padre Bamph me ajudou muito.";
			mes "Por favor leve esta bolsa de ervas para ele na Catedral de Prontera, e d� a ele meus cumprimentos.";
			close;
		} else if (prt_curse == 16) {
			mes "[Bonnie Imbullea]";
			mes "Oh, voc� voltou?";
			mes "Voc� conseguiu entregar a bolsa de ervas que eu lhe dei para o Padre Bamph?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sim, eu entreguei.";
			mes "Na verdade, o Padre Bamph me enviou aqui para lhe perguntar algumas coisas.";
			mes "Ele me disse tudo sobre o seu segredo real e, bem, seu exorcismo.";
			next;
			mes "[Bonnie Imbullea]";
			mes "Ah. Entendo.";
			mes "Voc� deve estar pensando que sou um monstro...";
			mes "Aquelas pobres crian�as est�o mortas por minha culpa...";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "N-N�o! Nada disso!";
			mes "Eu s� queria perguntar se h� alguma conex�o entre o poema que Kaanu estava cantando e a Maldi��o de Jormungand.";
			next;
			mes "[Bonnie Imbullea]";
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "[Bonnie Imbullea]";
			mes "Ap�s o exorcismo n�o ter funcionado, eu deveria ter sido punida com a morte.";
			mes "Por�m, a fam�lia real e a Catedral de Prontera tiveram pena de mim, e permitiram que eu vivesse neste ex�lio.";
			emotion(e_dots);
			next;
			mes "[Bonnie Imbullea]";
			mes "Eu comecei a cantar este poema para me manter distra�da, mesmo que relacionada com a Maldi��o de Jormungand.";
			next;
			mes "[Bonnie Imbullea]";
			mes "Voc� sabe, agora o que eu penso disso, eu lembro que ap�s eu ouvir que o exorcismo fracassou.";
			mes "Uma empregada encontrou um fragmento de Gema Vermelha enquanto limpava o �rea cerimonial secreta.";
			emotion(e_gasp,1);
			next;
			mes "[Bonnie Imbullea]";
			mes "Eu sempre achei que isso foi um pouco estranho.";
			mes "Eu queria investigar isto, mas ent�o eu fui expulsa da Catedral de Prontera depois de minha falha...";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Um fragmento de uma Gema Vermelha?";
			mes "Talvez... talvez seja uma evid�ncia de sabotagem do exorcismo!";
			next;
			mes "[Bonnie Imbullea]";
			mes "O que aconteceu foi tr�gico, mas isso faria me sentir bem melhor se esta fosse a real verdade.";
			mes "Mesmo que o exorcismo tenha sido sabotado, n�o podemos voltar no tempo...";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333Hmm...";
			mes "Seria melhor voltar para a Catedral de Prontera e fazer com que o Padre Bamph saiba desta informa��o.^000000";
			prt_curse = 17;
			changequest(18035,18036);
			close;
		} else if (prt_curse == 17) {
			mes "[Bonnie Imbullea]";
			mes "� muito dif�cil viver com esta culpa.";
			mes "Eu estive treinando a ajudar pessoas, e n�o mat�-las!";
			next;
			mes "^3355FFVoc� tenta confortar Bonnie Imbullea por um pequeno momento enquanto voc� n�o retorna a Catedral de Prontera.";
			close;
		} else if (prt_curse == 35 || prt_curse == 44 || prt_curse == 54) {
			mes "^3355FFVoc� diz a Bonnie Imbullea que as mortes dos pr�ncipes n�o foram por sua culpa.";
			mes "Esse exorcismo provavelmente foi sabotado.";
			mes "No entanto,voc� se mant�m triste, como se usasse veneno, em si mesma.^000000";
			next;
			mes "[Bonnie Imbullea]";
			mes "Isso � verdade...?";
			mes "Ah, eu estou t�o feliz!";
			mes "Eu pensei que eu teria de viver o resto da minha vida afastada com esta horr�vel vergonha.";
			mes "Ah, muito obrigada pela sua ajuda!";
			next;
			mes "[Bonnie Imbullea]";
			mes "Kaanu poder� conhecer outras crian�as com a sua idade...";
			mes "Finalmente poderemos viver normalmente.";
			mes "Que maravilhoso...";
			next;
			mes "[Bonnie Imbullea]";
			mes "Mas espere...";
			mes "Como � que os pr�ncipes morreram, ent�o?";
			mes "N�o havia nenhuma ferida nos corpos pelo que eu me lembre...";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Bem, hm, eu n�o sei de nada disso, mas o Padre Bamph e o Padre Biscuss est�o fazendo a investiga��o.";
			mes "Eles est�o dando o seu melhor para descobrir.";
			next;
			mes "[Bonnie Imbullea]";
			mes "Entendo.";
			mes "Bem, eu acredito neles, eles s�o grandes sacerdotes apesar de tudo.";
			mes "Embora eu tenha sido perdoada pela minha falha, eu ainda tenho medo da fam�lia real...";
			mes "Tudo que eu posso fazer por enquanto � rezar.";
			next;
			mes "[Bonnie Imbullea]";
			mes "De qualquer forma, eu prometo n�o revelar o que eu sei sobre este incidente para o p�blico.";
			mes "E se voc� vier a montanha novamente, espero que voc� pare para nos visitar.";
			next;
			mes "[Bonnie Imbullea]";
			mes "Voc� n�o tem id�ia do quanto essas not�cias que voc� me trouxe significam para mim.";
			mes "Eu posso finalmente me livrar desta grande culpa...";
			mes "Obrigada, aventureiro.";
			if (prt_curse == 35) {
				prt_curse = 36;
				completequest(18050);
			} else if (prt_curse == 44) {
				prt_curse = 45;
				completequest(18049);
			} else {
				next;
				mes "^3355FFAgpra, voc� pode voltar a Rodafrian, a historiadora que fica em Morroc.^000000";
				prt_curse = 55;
				changequest(18049,18051);
			}
			close;
		} else if (prt_curse == 36) {
			mes "[Bonnie Imbullea]";
			mes "Pela sua gra�a e miseric�rdia, por favor lamente as pobres almas e proteja a fam�lia real...";
			mes "Aben�oe eles com a sua luz e com sua sabedoria os guie...";
			close;
		} else if (prt_curse == 45) {
			mes "[Bonnie Imbullea]";
			mes "Eu acho que n�s ficamos muito acostumados com a paz e serenidade do Monte Mjolnir.";
			mes "N�o ser� f�cil ir embora mesmo que possamos voltar a Prontera sempre que quisermos...";
			close;
		} else if (prt_curse > 54) {
			mes "[Bonnie Imbullea]";
			mes "Muito obrigada por voc� ter ajudado na investiga��o dos pr�ncipes.";
			mes "Eu n�o pensava que poderia alcan�ar a felicidade novamente se n�o fosse pelos seus esfor�os.";
			close;
		} else {
			mes "[Bonnie Imbullea]";
			mes "^333333*Suspiro...*^000000";
			close;
		}
	}
}
mjolnir_01,313,269,5	duplicate(Mulher Exausta#prtcurse)	Garoto Distra�do#prtcurse	4_M_KID1

// ------------------------------------------------------------------
prt_church,185,106,3	script	Padre Bamph#prtcurse	1_M_PASTOR,{
	if (prt_curse == 13) {
		if (countitem(Leather_Pouch) < 1) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Argh!";
			mes "Agora, aonde eu coloquei esta bolsa de ervas?";
			close;
		} else {
			mes "[Padre Bamph]";
			mes "Seja Bem vindo a Catedral de Prontera.";
			mes "Por favor relaxe, e deixe sua mente e esp�rito encontrarem a paz dentro destas paredes sagradas.";
			next;
			select("Entregar a ele a bolsa de ervas.");
			mes "[Padre Bamph]";
			mes "Deixe-me perguntar...";
			mes "Por que voc� est� me dando esta bolsa de ervas?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Bem, foi aquela mo�a que vive no Monte Mjolnir que me mandou te entregar estas ervas.";
			mes "Hm, ela tem um filho chamado Kaanu?";
			next;
			mes "[Padre Bamph]";
			mes "Ah, voc� deve ter conhecido Bonnie Imbullea.";
			mes "J� se passou um bom tempo desde que eu a vi pela �ltima vez.";
			mes "O que ela tem feito, posso perguntar?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oh...";
			mes "Eu acho que ela est� bem.";
			mes "Mas ela parece muito...";
			mes "Como posso dizer, atormentada...";
			next;
			mes "[Padre Biscuss]";
			mes "�timo! Se ela est� feliz e relaxada ap�s o que ela fez, nem mesmo Deus poderia perdo�-la!";
			mes "Ela merece viver o resto de sua vida em agonia!";
			next;
			mes "[Padre Bamph]";
			mes "Padre Biscuss, como voc� pode dizer algo como isto?";
			mes "Ela fez o melhor para impedir que aquilo acontecesse!";
			mes "Devemos lamentar o sofrimento que ela deve estar sentindo.";
			mes "Aonde est� a sua compaix�o?";
			next;
			mes "[Padre Biscuss]";
			mes "Bah! N�o fale comigo sobre compaix�o!";
			mes "Em primeiro lugar, n�o foi voc� quem recomendou ela para ela para executar o exorcismo?";
			mes "Voc� n�o se esqueceu disto, esqueceu?";
			next;
			mes "[Padre Bamph]";
			mes "......";
			mes ".........";
			mes "............";
			next;
			mes "[Padre Biscuss]";
			mes "Hah!";
			next;
			select("Perguntar sobre Bonnie Imbullea");
			mes "[Padre Bamph]";
			mes "Bem...";
			mes "Eu n�o...";
			mes "Eu n�o sei se eu deveria estar falando a voc� sobre este incidente...";
			next;
			mes "[Padre Biscuss]";
			mes "O que voc� sabe?";
			mes "Se Bonnie enviou este aventureiro aqui por um favor, provavelmente isso significa que ela acredita nesta pessoa.";
			if (Sex == SEX_MALE) {
				mes "Al�m disso, n�s precisamos de algu�m que fa�a esta tarefa por n�s.";
				mes "Por que n�o ele?";
			} else {
				mes "Al�m disso, n�s precisamos de algu�m que fa�a esta tarefa por n�s.";
				mes "Por que n�o ela?";
			}
			next;
			mes "[Padre Bamph]";
			mes "Suas palavras t�m o anel da verdade, Padre Biscuss.";
			mes "Bem ent�o, aventureiro, me d� a oportunidade de lhe dizer algo muito importante.";
			mes "Mas, voc� n�o deve dizer ningu�m...";
			prt_curse = 14;
			delitem(Leather_Pouch,1);
			close;
		}
	} else if (prt_curse == 14) {
		mes "[Padre Bamph]";
		mes "O que estou prestes a dizer para voc� deve ser mantido em segredo.";
		mes "Agora, voc� sabe sobre Jormungand, a grande serpente que nasceu do Deus Loki e da giganta, Angrboda?";
		next;
		mes "[Padre Bamph]";
		mes "Jormungand foi uma besta do mal, que ap�s milhares de anos de guerra entre os deuses e os dem�nios, come�ou a atacar humanos.";
		mes "Isso trouxe um grande caos e muito sofrimento pelo mundo todo...";
		next;
		mes "[Padre Bamph]";
		mes "Finalmente, o Primeiro Tristram da fam�lia Gaebolg derrotou Jormungand juntamente com 6 outros guerreiros.";
		mes "Mas somente ap�s Jormungand ter matado o seu amado pai.";
		next;
		mes "[Padre Bamph]";
		mes "Tristram se tornou o primeiro rei do Reino de Rune-Midgard.";
		mes "Mas sua fam�lia deveria sofrer com a maldi��o que foi colocada por Jormungand ap�s sua derrota.";
		next;
		mes "[Padre Bamph]";
		mes "Depois deste dia...";
		mes "^FF0000Todo primeiro pr�ncipe da fam�lia Gaebolg morrer� quando estiver na inf�ncia^000000.";
		mes "Esta � a Maldi��o de Jormungand e o segredo da fam�lia real.";
		emotion(e_omg,1);
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que...?!";
		mes "Isto � verdade?!";
		mes "N�o ha nenhuma maneira de acabar com esta horr�vel maldi��o?!";
		next;
		mes "[Padre Bamph]";
		mes "Por favor abaixe o tom de sua voz.";
		mes "Sim, � uma pena que a fam�lia real tenha que sofrer com isso.";
		mes "Mas todos os exorcismos que tentaram por todos estes anos falharam...";
		next;
		mes "[Padre Bamph]";
		mes "Embora a situa��o parece ser de desespero, o Rei Tristram III tentou mais uma vez exorcizar a maldi��o.";
		mes "Seguindo as suas ordens, os maiores sacerdotes exorcistas foram todos convocados.";
		next;
		mes "[Padre Bamph]";
		mes "Uma s�rie de testes foi realizada para selecionar o melhor sacerdote e exorcista para remover esta maldi��o.";
		mes "No fim disto, ^3131FFBonnie Imbullea^000000 foi escolhida para liderar a cerim�nia de exorcismo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere, mas voc� mencionou algo sobre um acidente.";
		mes "Quer dizer que ela falhou no desempenho do exorcismo?";
		next;
		mes "[Padre Bamph]";
		mes "Sim, infelizmente.";
		mes "Ap�s os sacerdotes e exorcistas terem sido levados a �rea cerimonial secreta tr�s pr�ncipes foram mortos ao inv�s de apenas o primeiro.";
		next;
		mes "[Padre Biscuss]";
		mes "Embora todos n�s termos jurado manter o incidente em segredo, Bonnie Imbullea levou toda a responsabilidade pelas mortes.";
		mes "� por isso que ela est� em ex�lio imposto pelo reino.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O Que...?";
		mes "Isso �...";
		mes "Isso � loucura!";
		next;
		mes "[Padre Biscuss]";
		mes "Eu sei que esta � uma longa hist�ria, e � um pouco complicada.";
		mes "Por favor ou�a o que n�s temos de falar...";
		emotion e_dots;
		prt_curse = 15;
		close;
	} else if (prt_curse == 15) {
		mes "[Padre Bamph]";
		mes "Agora, voc� deve saber que todos os pr�ncipes que foram mortos neste dia tinham marcas estranhas em seus corpos.";
		mes "� como se estivessem crescendo escamas de serpente.";
		emotion(e_gasp,1);
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere, cresceram escamas de serpente?";
		mes "Isso parece igual a uma das vers�es do poema que estou investigando.";
		mes "Eu acho que foi o poema sobre a origem do Reino de Rune-Midgard.";
		next;
		mes "[Padre Bamph]";
		mes "Espere, que poema?";
		mes "Hm, eu n�o se est� relacionado.";
		mes "Vamos ver agora, como era?";
		mes "Arco-�ris... �guias...";
		mes "Ah! Agora eu me lembro!";
		next;
		mes "[Padre Bamph]";
		mes "A grande serpente engoliu o mar.";
		mes "A �guia do arco-�ris engoliu a serpente.";
		mes "A �guia ent�o construiu seu ninho.";
		mes "Um ninho sob o mar encoberto.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmm...";
		mes "Bem, eu escutei uma diferente vers�o do mesmo poema.";
		mes "Ela � assim...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "A grande serpente engoliu o mar.";
		mes "A �guia do arco-�ris engoliu a serpente.";
		mes "Ent�o escamas de cobra cresceram na �guia, e ela morreu lentamente.";
		next;
		mes "[Padre Bamph]";
		mes "Ah, meu... Eu aprendi este poema quando eu era um garoto pelo meu pai.";
		mes "No entanto, sua vers�o parece revelar o segredo da Fam�lia dos Gaebolgs.";
		mes "Por favor, me diga onde voc� escutou este poema?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, primeiro eu escutei esta vers�o de um historiador, e depois eu descobri que Bonnie Imbullea sabe ele muito bem.";
		mes "Hm, h� algum problema?";
		next;
		mes "[Padre Bamph]";
		mes "Se essas letras do poema forem passadas, o segredo da maldi��o da fam�lia real poder� ser revelado para o p�blico.";
		mes "Voc� poderia por favor nos ajudar a falar com Bonnie Imbullea mas uma vez?";
		next;
		mes "[Padre Bamph]";
		mes "Se voc� puder, tente ver se voc� descobre alguma conex�o entre a maldi��o e o poema.";
		mes "Ou se ela se lembra de algo que aconteceu ap�s a falha do exorcismo...";
		prt_curse = 16;
		changequest(18034,18035);
		close;
	} else if (prt_curse == 16) {
		mes "[Padre Bamph]";
		mes "Por favor visite Bonnie Imbullea no Monte Mjolnir para ver se voc� descobre mais sobre o poema.";
		mes "Ou sobre o que aconteceu ap�s a tentativa de exorcismo da maldi��o de Jormungand.";
		close;
	} else if (prt_curse == 17) {
		mes "[Padre Bamph]";
		mes "Ah, voc� falou com Bonnie Imbullea?";
		mes "Por favor me diga se voc� aprendeu algo novo.";
		next;
		mes "^3355FFVoc� relata tudo que Bonnie Imbullea disse sobre a descoberta de um fragmento de Gema Vermelha na �rea cerimonial secreta.";
		next;
		mes "[Padre Bamph]";
		mes "Gema Vermelha?";
		mes "N�o h� nenhuma raz�o para isto estar em um lugar sagrado. Hmm.";
		mes "� melhor investigarmos a verdade, come�ando a partir de agora.";
		next;
		mes "[Padre Bamph]";
		mes "Venha comigo, aventureiro, para a �rea cerimonial secreta para a fam�lia real.";
		mes "Apenas use o interruptor na estante perto de mim";
		mes "Eu lhe encontro l�.";
		prt_curse = 18;
		changequest(18036,18037);
		close;
	} else if (prt_curse > 17 && prt_curse < 22) {
		mes "[Padre Bamph]";
		mes "Venha comigo para a �rea cerimonial secreta ent�o poderemos investigar a possibilidade de uma sabotagem no exorcismo que";
		mes "Bonnie Imbullea realizou.";
		next;
		mes "[Padre Bamph]";
		mes "H� um interruptor escondido na estante de livros que voc� pode para se teleportar para l�.";
		mes "V�, e eu te encontrarei no �rea cerimonial secreta.";
		close;
	} else if (prt_curse == 22) {
		mes "[Padre Bamph]";
		mes "Esta � uma quest�o de grave import�ncia, mas n�o podemos alertar a fam�lia real ainda e causar um p�nico.";
		mes "� melhor investigar tudo primeiro e coletar provas.";
		next;
		mes "[Padre Bamph]";
		mes "Bravo aventureiro, voc� poderia visitar a Guilda dos Mercen�rios em Morroc.";
		mes "E ver se voc� pode aprender alguma coisa sobre como n�s podemos verificar se foi usado veneno para matar os pr�ncipes?";
		prt_curse = 23;
		changequest(18039,18040);
		close;
	} else if (prt_curse == 23) {
		mes "[Padre Bamph]";
		mes "Por favor veja se voc� pode aprender algo sobre testes.";
		mes "Para o uso de veneno de um membro da Guilda de Mercen�rios em Morroc.";
		close;
	} else if (prt_curse == 31) {
		mes "[Padre Bamph]";
		mes "Ah, voc� retornou.";
		mes "Voc� conseguiu aprender algo sobre veneno na Guilda dos Mercen�rios?";
		mes "Eu sei que seus membros s�o muito dif�ceis de se encontrar...";
		next;
		mes "^3355FFVoc� relata todas as informa��es que voc� conseguiu aprender sobre veneno para o Padre Bamph.";
		mes "Incluindo o m�todo de teste para o uso de veneno em assassinatos. ";
		next;
		mes "[Padre Bamph]";
		mes "Ah, entendo.";
		mes "Ent�o, voc� poderia trazer 1 Gema Amarela e 1 Po��o Verde para a �rea cerimonial secreta o mais r�pido poss�vel?";
		mes "Eu irei te esperar l� novamente.";
		prt_curse = 32;
		changequest(18044,18046);
		close;
	} else if (prt_curse == 32 || prt_curse == 33 || prt_curse == 41 || prt_curse == 42 || prt_curse == 51 || prt_curse == 52) {
		mes "[Padre Bamph]";
		mes "Voc� pode utilizar o interruptor secreto na estante para entrar na �rea cerimonial secreta.";
		mes "N�o se esque�a de que n�s precisamos de ^3131FF1 Gema Amarela^000000 e ^3131FF1 Po��o Verde^000000 para testar o veneno.";
		close;
	} else if (prt_curse == 34) {
		mes "[Padre Bamph]";
		mes "Eu n�o posso acreditar!";
		mes "Se veneno foi usado, ent�o o";
		mes "segundo e o terceiro pr�ncipes";
		mes "foram assassinados! Inacredit�vel...";
		mes "Como algu�m pode matar crian�as?";
		next;
		mes "[Padre Bamph]";
		mes "Pelo menos, agora n�s sabemos";
		mes "que a morte deles n�o foi culpa";
		mes "da Bonnie Imbullea.";
		mes "Agora eu tenho que discutir com o Padre";
		mes "Biscuss e decidir como contar a";
		mes "fam�lia real sobre isto...";
		next;
		mes "[Padre Bamph]";
		mes "Mais uma vez, deixe-me lembrar";
		mes "a voc� que tudo que ocorreu";
		mes "aqui deve ser mantido em";
		mes "secredo. O P�blico n�o pode saber da";
		mes "Maldi��o de Jormungand! Isto poderia trazer turbul�ncia pol�tica e caos!";
		next;
		mes "[Padre Bamph]";
		mes "Ainda assim, isto n�o quer dizer que eu n�o possa agradecer pessoalmente por toda a sua ajuda.";
		mes "Eu sou muito grato pelo o que voc� fez, aventureiro.";
		mes "A seguran�a o acompanhar� em todas as suas jornadas.";
		prt_curse = 35;
		changequest(18047,18050);
		close;
	} else if (prt_curse > 34 && prt_curse < 40 && !aru_monas) {
		mes "[Padre Bamph]";
		mes "Eu esqueci o que eu tinha para fazer.";
		mes "Algumas vezes, at� mesmo eu tenho d�vidas e acreditar que Odin nos abandonou...";
		close;
	} else if (prt_curse == 40) {
		mes "[Padre Bamph]";
		mes "Ah, voc� retornou.";
		mes "Voc� conseguiu aprender algo";
		mes "sobre veneno na Guilda dos";
		mes "Mercen�rios? Eu sei que seus";
		mes "membros s�o muito dif�ceis";
		mes "de se encontrar...";
		next;
		mes "^3355FFVoc� relata todas as informa��es";
		mes "que voc� conseguiu aprender";
		mes "sobre veneno para o Padre Bamph,";
		mes "incluindo o m�todo de teste";
		mes "para o uso de veneno em assassinatos. ";
		next;
		mes "[Padre Bamph]";
		mes "Ah, entendo...";
		mes "Ent�o, voc� poderia trazer 1 Gema Amarela e 1 Po��o Verde para a �rea cerimonial secreta o mais r�pido poss�vel?";
		mes "Eu irei te esperar l� novamente.";
		prt_curse = 41;
		changequest(18045,18046);
		close;
	} else if (prt_curse == 43 || prt_curse == 53) {
		mes "[Padre Bamph]";
		mes "Eu n�o posso acreditar!";
		mes "Se veneno foi usado, ent�o o segundo e o terceiro pr�ncipes foram assassinados! Inacredit�vel...";
		mes "Como algu�m pode matar crian�as?";
		next;
		mes "[Padre Bamph]";
		mes "Pelo menos, agora n�s sabemos que a morte deles n�o foi culpa da Bonnie Imbullea.";
		mes "Agora eu tenho que discutir com o Padre Biscuss e decidir como contar a fam�lia real sobre isto...";
		next;
		mes "[Padre Bamph]";
		mes "Ah, e voc� poderia por favor informar a ^3131FFBonnie Imbullea^000000 que as mortes dos pr�ncipes n�o foram culpa dela?";
		mes "Eu tenho certeza que estas novidades trariam a ela um grande al�vio de sua culpa...";
		next;
		mes "[Padre Bamph]";
		mes "Mais uma vez, deixe-me lembrar a voc� que tudo que ocorreu aqui deve ser mantido em secredo.";
		mes "O P�blico n�o pode saber da Maldi��o de Jormungand!";
		mes "Isto poderia trazer turbul�ncia pol�tica e caos!";
		next;
		mes "[Padre Bamph]";
		mes "Ainda assim, isto n�o quer dizer que eu n�o possa agradecer pessoalmente por toda a sua ajuda.";
		mes "Sou muito grato pelo o que voc� fez, aventureiro.";
		mes "A seguran�a o acompanhar� em todas as suas jornadas.";
		if (prt_curse == 43) {
			prt_curse = 44;
		} else {
			prt_curse = 54;
		}
		changequest(18047,18049);
		getexp(1600000,0);
		close;
	} else if (prt_curse > 43 && prt_curse < 50 && !aru_monas) {
		mes "[Padre Bamph]";
		mes "Voc� ainda n�o falou com Bonnie Imbullea?";
		mes "Tente n�o se preocupar com as not�cias sobre o assassinato dos pr�ncipes.";
		mes "Padre Biscuss e eu cuidaremos disto.";
		close;
	} else if (prt_curse == 50) {
		mes "[Padre Bamph]";
		mes "Ah, voc� retornou.";
		mes "Voc� conseguiu aprender algo sobre veneno na Guilda dos Mercen�rios?";
		mes "Eu sei que seus membros s�o muito dif�ceis de se encontrar...";
		next;
		mes "^3355FFVoc� relata todas as informa��es que voc� conseguiu aprender sobre veneno para o Padre Bamph.";
		mes "Incluindo o m�todo de teste para o uso de veneno em assassinatos. ";
		next;
		mes "[Padre Bamph]";
		mes "Ah, entendo...";
		mes "Ent�o, voc� poderia trazer 1 Gema Amarela e 1 Po��o Verde para a �rea cerimonial secreta o mais r�pido poss�vel?";
		mes "Eu irei te esperar l� novamente.";
		prt_curse = 51;
		changequest(18043,18046);
		close;
	} else if (prt_curse == 60) {
		mes "[Padre Bamph]";
		mes "Ah, "+strcharinfo(CHAR_NAME)+".";
		mes "J� se passou um tempo, ein.";
		mes "Voc� j� falou com";
		mes "Bonnie? Ah, e";
		mes "como eu posso ajud�-lo hoje?";
		next;
		mes "^3355FFVoc� diz ao Padre Bamph que ervas raras crescem na terra para oeste.";
		mes "Embora voc� n�o ter dito a ele que contou a Rodafrian sobre a maldi��o.^000000";
		next;
		mes "[Padre Biscuss]";
		mes "Terra para o oeste?";
		mes "H� rumores de que este lugar � povoado por fan�ticos.";
		mes "Padre Bamph, eu acho que eles devem ser os principais suspeitos do assassinato dos pr�ncipes...";
		next;
		mes "[Padre Bamph]";
		mes "Bem, vou admitir que isto � poss�vel, mas n�o tivemos contato com ningu�m da terra para o oeste por um bom tempo...";
		mes "E tamb�m � muito cedo para fazer este tipo de suposi��o.";
		next;
		select("Terra para o Oeste?");
		mes "[Padre Bamph]";
		mes "N�o se sabe muito sobre a terra para o oeste.";
		mes "N�s enviamos v�rios sacerdotes para l� para espalhar a nossa f�";
		mes "No entanto, eles falharam...";
		next;
		mes "[Padre Bamph]";
		mes "Pelo que eu posso dizer, quase todos l� s�o adeptos da religi�o nativa do lugar.";
		mes "De qualquer forma, obrigado por nos informar.";
		mes "Cuidaremos disso daqui.";
		next;
		mes "[Padre Bamph]";
		mes "Ah, para preservar os segredos da fam�lia real, pe�o que voc� evite entrar no �rea cerimonial sagrada de agora em diante.";
		mes "Obrigado novamente pela a sua ajuda, "+strcharinfo(CHAR_NAME)+".";
		prt_curse = 61;
		completequest(18052);
		close;
	} else if (prt_curse == 61) {
		//if (!aru_monas) {
		//	mes "[Padre Bamph]";
		//	mes "Me desculpe, mas poder�amos conversar mais tarde?";
		//	mes "Eu tenho que cuidar de uma tarefa muito importante agora...";
		//	close;
		//}
		//else if (aru_monas == 1) {
		if (!aru_monas) {
			mes "[Padre Bamph]";
			mes "Oh, eu estive esperando por voc�, aventureiro.";
			mes "Lamento em dar a voc� este aviso.";
			mes "Mas parece que voc� cresceu e est� mais forte do que a �ltima vez que nos vimos.";
			next;
			mes "[Padre Bamph]";
			mes "A Catedral recebeu um pedido do Castelo de Prontera, mas n�s n�o temos recursos para lidar com ele.";
			mes "Eu acredito que voc� deve estar bem adaptado para esta tarefa se voc� quiser ajudar.";
			next;
			mes "[Padre Bamph]";
			mes "Um homem de alto padr�o de repente desapareceu h� algum tempo.";
			mes "Embora o Castelo de Prontera pediu para que encontr�ssemos ele.";
			mes "Eu posso dizer que agora � tarde de mais.";
			next;
			mes "[Padre Bamph]";
			mes "Tudo o que sabemos � que ele foi visto pela �ltima vez Comodo.";
			mes "Por favor fale com nosso informante, ^6B8E23Larjes^000000.";
			mes "E ele o ajudar� na busca pelo oficial perdido.";
			aru_monas = 2;
			//changequest(17000,17001);
			setquest(17001);
			close;
		} else if (aru_monas == 2 || aru_monas == 3) {
			mes "[Padre Bamph]";
			mes "Por favor v� para Comodo e encontre nosso informante, ^6B8E23Larjes^000000, no Casino.";
			mes "Ele o ajudar� na sua busca pelo oficial que desapareceu.";
			close;
		} else if (aru_monas == 4) {
			mes "[Padre Bamph]";
			mes "Ah, ent�o voc� encontrou Larjes?";
			mes "A sua investiga��o sobre";
			mes "desaparecimento do oficial tem";
			mes "progredido? Eu espero que";
			mes "voc� encontre ele s�o e salvo";
			next;
			select("Dizer a ele o que Larjes disse.");
			mes "[Padre Bamph]";
			mes "Entendo.";
			mes "N�s detectamos algumas atividades inquietantes de Arunafeltz ultimamente.";
			mes "Mas eu n�o acho que eles v�o se mexer t�o cedo...";
			mes "Me d� um momento para pensar.";
			aru_monas = 5;
			close;
		} else if (aru_monas == 5) {
			if (rand(1,5) == 4) {
				mes "[Padre Bamph]";
				mes "Bem, eu tenho que considerar todos os cen�rios poss�veis.";
				mes "Eu acho eu acho que funciona melhor voc� continuar sua investiga��o em nosso nome.";
				mes "Ou seja, se voc� est� disposto a faz�-lo.";
				next;
				mes "[Padre Bamph]";
				mes "N�s n�o queremos provocar um conflito internacional com o envolvimento do oficial, mas tamb�m n�o posso for�ar voc� a trabalhar para n�s.";
				mes "S� voc� pode ajudar em sua escolha.";
				next;
				if (select("Deixe me pensar sobre isso.:Certamente vou ajudar.") == 1) {
					mes "[Padre Bamph]";
					mes "Eu espero que voc� decida nos ajudar.";
					mes "A seguran�a da nossa na��o depende do sucesso desta investiga��o.";
					mes "N�s realmente precisaremos da sua ajuda.";
					close;
				}
				mes "[Padre Bamph]";
				mes "Muito obrigado.";
				mes "Fico feliz em ouvir que voc� nos ajudar�.";
				mes "Voc� deve pegar o aeroplano em Izlude para viajar a Arunafeltz, onde voc� poder� continuar a sua investiga��o.";
				next;
				mes "[Padre Bamph]";
				mes "Eu acredito que voc� poder� conseguir mais informa��es se voc� investigar na cidade de ^9370DBRachel^000000.";
				mes "Por favor aceite este dinheiro para cobri a passagem do Aeroplano.";
				mes "Obrigado, e boa sorte.";
				aru_monas = 6;
				Zeny += 5000;
				changequest(17002,17003);
				close;
			} else {
				mes "[Padre Bamph]";
				mes "Hmm... Qual � a melhor maneira para lidarmos com isso?";
				mes "Me deixe pensar sobre as op��es.";
				mes "Bem, n�s podemos--n�o. N�o funcionaria.";
				mes "Isso ser� muito dif�cil.";
				close;
			}
		} else if (aru_monas == 6) {
			mes "[Padre Bamph]";
			mes "Voc� pode ter problemas em Rachel j� que a cultura deles � muito diferente da nossa.;";
			mes "O modo de fazerem as coisas, o governo...";
			mes "Tudo est� vinculado � religi�o.";
			close;
		} else if (aru_monas > 6 && aru_monas < 25) {
			mes "[Padre Bamph]";
			mes "Muito obrigado por todo o seu trabalho duro.";
			mes "Nossos agentes entraram em contato com voc� sempre que os mesmos descobrirem alguma coisa nova.";
			mes "Lembre-se que ningu�m pode o que n�s temos feito.";
			close;
		} else if (aru_monas == 25 || aru_monas == 26) {
			mes "[Padre Bamph]";
			mes "Muito obrigado por nos trazer esta informa��o importante.";
			mes "Com a sua ajuda, fomos capazes de resolver alguns casos.";
			mes "N�s esper�vamos algo como isto, mas n�o t�o r�pido.";
			next;
			mes "[Padre Bamph]";
			mes "Eu temo que a corte real est�o dando prioridade para as suas necessidades ego�stas.";
			mes "Eu rezo para que isto n�o aumente, desconcentra��o no caos.";
			mes "^666666*Suspiro*^000000";
			mes "Vamos ver...";
			close;
		} else {
			mes "[Padre Bamph]";
			mes "Muito obrigado por nos trazer esta informa��o importante.";
			mes "Com a sua ajuda, fomos capazes de resolver alguns casos.";
			mes "N�s esper�vamos algo como isto, mas n�o t�o r�pido.";
			close;
		}
	} else {
		mes "[Padre Bamph]";
		mes "Me desculpe, mas poder�amos conversar mais tarde?";
		mes "Eu tenho que cuidar de uma tarefa muito importante agora...";
		close;
	}
}

// ------------------------------------------------------------------
prt_church,16,114,4	script	Padre Bamph#prtcurse2	1_M_PASTOR,{
	if (prt_curse == 18) {
		mes "[Padre Bamph]";
		mes "Ali est�o os corpos dos pr�ncipes Gaebolg que foram mortos durante o exorcismo.";
		mes "Por favor, d� uma olhada no corpo a esquerda.";
		prt_curse = 19;
		close;
	} else if (prt_curse == 19) {
		mes "[Padre Bamph]";
		mes "Por favor de uma olhada no corpo que est� na extrema esquerda, o primeiro Pr�ncipe.";
		close;
	} else if (prt_curse == 20) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Esta marca estranha � muito parecida com escamas de cobra.";
		mes "�... � esta a marca por tr�s da maldi��o de Jormungand?";
		next;
		mes "[Padre Bamph]";
		mes "Est� certo.";
		mes "Agora, vamos examinar o corpo do segundo pr�ncipe, localizado no meio.";
		close;
	} else if (prt_curse == 21) {
		mes "[Padre Bamph]";
		mes "Agora...";
		mes "Agora n�s devemos examinar o 3� pr�ncipe.";
		close;
	} else if (prt_curse == 22) {
		mes "[Padre Bamph]";
		mes "Vamos subir a escada, aonde poderemos continuar com nossa conversa.";
		mes "Ah, voc� pode querer pedir ao Padre Biscuss para levar voc�.";
		close;
	} else if (prt_curse == 32 || prt_curse == 41 || prt_curse == 51) {
		mes "[Padre Bamph]";
		mes "Voc� est� com uma ^3131FFGema Amarela^000000 e ^3131FF1 Po��o Verde^000000 prontas?";
		mes "Se estiver, voc� deve come�ar o teste no corpo do terceiro pr�ncipe, antes dos outros.";
		close;
	} else if (prt_curse == 33 || prt_curse == 42 || prt_curse == 52) {
		mes "[Padre Bamph]";
		mes "A marca desapareceu?";
		mes "Oh, isso � horrivel!";
		mes "Isso significa que foi utilizado veneno para matar os outros 2 pr�ncipes!";
		mes "Eu quase... n�o posso...";
		next;
		mes "[Padre Bamph]";
		mes "Eu... Eu preciso de um tempo para me recuperar do choque e pensar sobre tudo isso com cuidado.";
		mes "Por enquanto vamos voltar e subir a escada.";
		if (prt_curse == 33) { prt_curse = 34; }
		else if (prt_curse == 42) { prt_curse = 43; }
		else { prt_curse = 53; }
		close;
	} else if (prt_curse == 43 || prt_curse == 53) {
		mes "[Padre Bamph]";
		mes "N�s j� perturbamos demais os corpos destas pobres almas o bastante.";
		mes "N�s temos que subir a escada agora...";
		close;
	} else {
		end;
	}
}

// ------------------------------------------------------------------
prt_church,19,111,5	script	Corpo#prtcurse	4_M_LIEMAN,{
	if (prt_curse == 19) {
		mes "[Padre Bamph]";
		mes "Este � o corpo do primeiro filho do rei, o pr�ncipe herdeiro.";
		mes "Assim como tem acontecido h� gera��es, a maldi��o roubou a vida do filho primog�nito...";
		next;
		mes "^3355FFSob uma das mangas do pr�ncipe, voc� observa uma marca escura.";
		mes "Ao puxar a manga para cima, voc� nota que a marca se assemelha �s escamas de uma serpente.^000000";
		prt_curse = 20;
		changequest(18037,18038);
		close;
	} else if (prt_curse == 33 || prt_curse > 41 && prt_curse < 51 || prt_curse == 52) {
		mes "^3355FFVoc� despejou um pouco da solu��o feita da Gema Amarela e da Po��o Verde em cima da marca na pele.";
		mes "Voc� esperou um pouco, mas n�o houve uma rea��o da solu��o^000000";
		close;
	} else {
		mes "^3355FF� o corpo de um homem vestido com mantos luxuosos.";
		mes "Apesar de morto, a cor da vida ainda n�o deixou seu corpo. ";
		close;
	}
}

// ------------------------------------------------------------------
prt_church,21,111,5	script	Corpo#prtcurse2	4_M_LIEMAN,{
	if (prt_curse == 20) {
		mes "[Padre Bamph]";
		mes "Este � o corpo do segundo pr�ncipe.";
		mes "A maldi��o s� deveria matar o princ�pe primog�nito, mas todos os tr�s pr�ncipes dessa gera��o foram mortos...";
		next;
		mes "[Padre Bamph]";
		mes "Apesar de nossos grandes esfor�os para exorcizar essa poderosa maldi��o, todos n�s fracassamos.";
		mes "Aqueles envolvidos come�aram a acreditar que Odin pode ter nos abandonado... ";
		emotion(e_omg,1);
		next;
		mes "^3355FFVoc� examina o corpo do segundo pr�ncipe e nota que as marcas de escama em sua pele est�o mais esmaecidas.";
		mes "Levemente diferentes quanto � tonalidade, do que as marcas do primeiro pr�ncipe.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Padre Bamph...!";
		mes "Olhe, essas marcas do segundo pr�ncipe s�o diferentes das marcas do primeiro";
		mes "pr�ncipe! Viu?";
		mes "Elas s�o diferentes tanto na tonalidade quanto na colora��o.";
		next;
		mes "[Padre Bamph]";
		mes "Meu Deus, Voc� est� certo!";
		mes "Como pudemos n�o prestar aten��o nisso?!?!";
		mes "Hmmm, isso sustenta a id�ia de que uma conspira��o pode estar envolvida.";
		mes "Vamos verificar o corpo do terceiro pr�ncipe.";
		prt_curse = 21;
		changequest(18038,18039);
		close;
	} else if (prt_curse == 33 || prt_curse > 41 && prt_curse < 51 || prt_curse == 52) {
		specialeffect(EF_POISONATTACK);
		specialeffect(EF_POISONHIT);
		specialeffect(EF_BUBBLE);
		mes "^3355FFVoc� despejou um pouco da solu��o feita da Po��o Verde e da Gema Amarela sobre as marcas de escama do corpo.";
		mes "As marcas de escama ficam mais fracas a solu��o borbulha ao contato. ";
		close;
	} else {
		mes "^3355FF� o corpo de um homem vestido com mantos luxuosos.";
		mes "Apesar de morto, a cor da vida ainda n�o deixou seu corpo. ";
		close;
	}
}

// ------------------------------------------------------------------
prt_church,24,111,5	script	Corpo#prtcurse3	4_M_LIEMAN,{
	if (prt_curse == 21) {
		mes "^3355FFVoc� e o Padre Bamph";
		mes "verificam apressadamente o corpo";
		mes "do terceiro pr�ncipe, e descobrem que";
		mes "as marcas de escama em sua pele s�o";
		mes "um pouco mais escuras que as marcas";
		mes "que est�o na pele do segundo pr�ncipe.^000000";
		next;
		mes "[Padre Bamph]";
		mes "Isso � muito suspeito...";
		mes "As mortes do segundo e do";
		mes "terceiro pr�ncipe foram";
		mes "causadas por assassinato, e n�o pela";
		mes "maldi��o. Entretanto, o que poderia";
		mes "ter sido utilizado para mat�-los?";
		next;
		if (select("Uma arma!","Veneno!") == 1) {
			mes "[Padre Bamph]";
			mes "Hmm... Mas nenhum destes corpos tem hematomas ou cicatrizes.";
			mes "E se fosse este o caso, tenho certeza de que o rei declararia guerra a algu�m.";
			mes "N�o pode ter sido uma arma.";
			next;
		} else {
			close;
		}
		mes "[Padre Bamph]";
		mes "Veneno...?";
		mes "Oh, minha nossa!";
		mes "Ningu�m na Igreja de Prontera saberia nada sobre isso.";
		mes "Mas talvez veneno tenha sido usado.";
		mes "Como podemos ter certeza?";
		next;
		mes "[Padre Biscuss]";
		mes "Vou dizer como, voc� vai direto aos especialistas.";
		mes "Algu�m da ^FF0000Guilda dos Mercen�rios em Morroc^000000 deve saber.";
		mes "Eu ouvi falar que eles podem fazer venenos que matam um homem com apenas uma gota!";
		next;
		mes "[Padre Bamph]";
		mes "Ah, essa � uma boa id�ia!";
		mes "Hmmm, mas primeiro, vamos continuar com nossa conversa l� fora, certo?";
		mes "Eu prefiro n�o pertubar esses corpos...";
		prt_curse = 22;
		close;
	} else if (prt_curse == 22) {
		mes "[Padre Bamph]";
		mes "Vamos subir a escada, aonde poderemos continuar com nossa conversa.";
		mes "Ah, voc� pode querer pedir ao Padre Biscuss para levar voc�.";
		close;
	} else if (prt_curse == 32 || prt_curse == 41 || prt_curse == 51) {
		if (countitem(Green_Potion) > 0 && countitem(Yellow_Gemstone) > 0) {
			mes "^3355FFVoc� abre uma garrafa de Po��o Verde e insere uma Gema Amarela.";
			mes "A gema se dissolve rapidamente, formando convenientemente, uma solu��o para testar a presen�a de veneno.";
			mes "Voc� a despeja sobre as marcas de escamas do pr�ncipe.^000000";
			next;
			specialeffect EF_POISONATTACK;
			specialeffect EF_POISONHIT;
			specialeffect EF_BUBBLE;
			mes "^3355FF*Pssssssssh*^000000";
			next;
			mes "^3355FFA solu��o borbulho ao tocar a pele, e as marcas e escama de serpente come�am a desaparecer lentamente do corpo do Jovem Pr�ncipe.^000000";
			delitem(Green_Potion,1);
			delitem(Yellow_Gemstone,1);
			if (prt_curse == 32) { prt_curse = 33; }
			else if (prt_curse == 41) { prt_curse = 42; }
			else  { prt_curse = 52; }
			changequest(18046,18047);
			close;
		}
		mes "^3355FFVoc� precisar� ter uma Po��o Verde e uma Gema Amarela para testar e confirmar ser foi veneno que matou o segundo e o terceiro pr�ncipe.^000000";
		close;
	} else if (prt_curse == 33 || prt_curse == 42 || prt_curse == 52) {
		mes "^3355FFAs marcas de escama de serpente no corpo desse pr�ncipe desapareceram ap�s voc� ter aplicado a Po��o Verde e a Gema Amarela na pele.^000000";
		close;
	} else {
		mes "^3355FF� o corpo de um homem vestido com mantos luxuosos.";
		mes "Apesar de morto, a cor da vida ainda n�o deixou seu corpo. ";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,201,295,5	script	Mercen�rio#prtcurse	4_M_ACROSS,{
	if (prt_curse == 23) {
		mes "[Mercen�rio]";
		mes "Quais os neg�cios que o trazem aqui?";
		next;
		if (select("Veneno","Nada") == 1) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Eu preciso falar com um especialista em venenos.";
			mes "Estou investigando uma coisa para a Igreja de Prontera, provavelmente um assassinato.";
			next;
			mes "[Mercen�rio]";
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "[Mercen�rio da Guilda";
			mes "Ou�a cuidadosamente.";
			mes "Eu s� irei lhe dizer isso uma vez.";
			next;
			mes "[Mercen�rio]";
			mes "H� um Bar Particular de Mercen�rios a sudoeste de Morroc.";
			mes "V� encontrar algu�m chamado ^3131FFMarjana^000000 l� dentro.";
			prt_curse = 24;
			changequest(18040,18041);
			close;
		} else {
			mes "[Mercen�rio]";
			mes "N�o. Esse olhar em seus olhos.";
			mes "Tenho certeza que h� uma raz�o para voc� ter vindo aqui...";
			close;
		}
	} else {
		mes "[Mercen�rio]";
		mes "Est� muito seco e ventando muito hoje.";
		mes "Eu gosto desse clima.";
		mes "Parece se adequar perfeitamente � alma de um verdadeiro Mercen�rio, o solit�rio que se esconde nas sombras.";
		close;
	}
}

// ------------------------------------------------------------------
que_job01,10,16,5	script	Marjana#prtcurse	4_F_ACROSS,{
	if (prt_curse == 24) {
		mes "[Marjana]";
		mes "O que traz voc� aqui?";
		mes "Eu vou lhe dar 4  minutos para me dizer, ent�o v� direto ao ponto.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu quero saber mais sobre venenos e confirmar se foi usado para matar algu�m.";
		next;
		mes "[Marjana]";
		mes "Veneno?";
		mes "Voc� veio � pessoa certa.";
		mes "Se eu n�o souber a resposta, eu duvido que voc� encontre algu�m que possa lhe dar.";
		mes "Pergunte.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� verdade que o veneno de um Mercen�rio pode ser t�o poderoso que, apenas uma gota pode matar uma pessoa?";
		next;
		mes "[Marjana]";
		mes "� verdade que veneno t�o poderoso assim existe, mas tal veneno mortal s� � usado por Algozes.";
		mes "Geralmente, Mercen�rios normais utilizam venenos que s�o muito menos potentes.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Certo.";
		mes "Voc� pode criar um veneno que deixe uma marca espec�fica no corpo?";
		next;
		mes "[Marjana]";
		mes "Claro.";
		mes "H� tantos tipos de venenos, que eu tenho certeza que voc� nem pode imaginar.";
		mes "Entretanto, os venenos que deixam marcas espec�ficas s�o dif�ceis de usar, e somente alguns poucos sabem us�-los.";
		next;
		mes "[Marjana]";
		mes "Os tipos de marcas que s�o deixadas dependem dos materiais usados para criar a po��o.";
		mes "J� que alguns materiais s�o exclusivos de determinadas regi�es...";
		next;
		mes "[Marjana]";
		mes "Bem, o tipo de marca";
		mes "que foi deixada poderia na verdade servir como algum tipo de pista.";
		mes "Qual era a marca no corpo da v�tima?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�s ainda n�o temos certeza se foi usado veneno, mas h� marcas que parecem com escamas de cobra deixadas nos corpos.";
		next;
		mes "[Marjana]";
		mes "Hmm...";
		mes "Sabe, se eu tivesse que supor, eu diria que isso foi causado por veneno, sim.";
		mes "Mas o veneno teria que ter sido criado fora do Reino de Rune-Midgard...";
		next;
		mes "[Marjana]";
		mes "Sim...";
		mes "Os materiais usados para fazer essas marcas de escama de cobra...";
		mes "Alguns deles n�o podem podem nem ao menos serem encontrados no continente de Rune-Midgard.";
		next;
		mes "[Marjana]";
		mes "Nosso tempo est� se esgotando.";
		mes "Escute, voc� pode confirmar se foi utilizado veneno ou n�o para matar algu�m misturando uma Gema Amarela com uma Po��o Verde.";
		mes "E salpicando a solu��o pelo corpo.";
		next;
		mes "[Marjana]";
		mes "Se foi utilizado algum veneno, a solu��o ir� reagir em contato com o corpo.";
		mes "Mas, esse m�todo n�o ir� funcionar se tiver passado muito tempo do assassinato.";
		mes "� melhor voc� experimentar isso logo...";
		prt_curse = 25;
		close;
	}
}

// ------------------------------------------------------------------
morocc,45,103,0	script	Vest�gios#prtcurse	HIDDEN_NPC,{
	if (prt_curse == 25) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hm....";
		mes "� melhor eu rever os fatos que descobri, para que possa me concentrar melhor na investiga��o.";
		mes "Vamos ver...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "H� muito tempo, a serpente gigante Jormungand amea�ava a ra�a humana.";
		mes "7 guerreiros derrotaram Jormungand, liderados por Tristram III da fam�lia Gaebolg.";
		mes "Mas Jormungand quado foi derrotado, jogou uma maldi��o na linhagem dos Gaebolg.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Desde ent�o, a maldi��o mata o pr�ncipe primog�nito da fam�lia Gaebolg, quando eles ainda s�o muito jovens.";
		mes "Entretanto, todos os pr�cipes dessa gera��o foram mortos.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "De acordo com o que eu aprendi com aquele mercen�rio.";
		mes "O primeiro pr�ncipe morreu da maldi��o, e os outros dois morreram por envenenamento.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� mais prov�vel que caso tenha sido usado veneno.";
		mes "Ent�o a pessoa que o usou, era um assassino de fora do Reino de Rune-Midgard.";
		mes "Sim, isso � quase tudo que sei.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora, aquela historiadora Rodafrian est� me esperando para lhe informar sobre a letra certa daquela can��o.";
		mes "Mas o Padre Bamph tamb�m est� esperando pelas informa��es que eu descobri com a Guilda dos Mercen�rios.";
		mes "O que devo fazer?";
		next;
		if (select("Ir encontrar com Rodafrian","Ir encontrar com o Padre Bamph") == 1) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Bem, � mais f�cil para mim visitar Rodafrian agora.";
			mes "Ela est� muito mais perto do que o Padre Bamph, ent�o eu acho que eu deveria ir falar com ela primeiro.";
			prt_curse = 30;
			changequest(18041,18042);
			close;
		}
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, � mais importante que eu v� ver o Padre Bamph e investigue os corpos dos pr�ncipes.";
		mes "� melhor eu ir para Prontera logo de uma vez.";
		prt_curse = 50;
		changequest(18041,18043);
		close;
	} else {
		end;
	}
}

// ------------------------------------------------------------------
prt_church,184,110,3	script	Padre Biscuss	1_M_PASTOR,{
	if (prt_curse == 54) {
		mes "[Padre Biscuss]";
		mes "Hmm, eu ainda suspeito de que algu�m da Guilda dos Mercen�rios pode ter assassinado os pr�ncipes.";
		mes "Neste caso, eu terei de enviar um espi�o.";
		mes "Mantenha esta informa��o em segredo.";
		next;
		mes "[Padre Biscuss]";
		mes "Ent�o est� bem.";
		mes "Voc� n�o deve aprender ou escutar algo de n�s, e voc� n�o sabe nada sobre a maldi��o da fam�lia real.";
		mes "De agora em diante, Padre Bamph e eu cuidaremos disso.";
		close;
	} else if (prt_curse == 35) {
		mes "[Padre Biscuss]";
		mes "Eu nunca vi o Padre Bamph assim antes, mas eu entendo como ele se sente.";
		mes "Como um dos l�deres desta catedral, ele sente grande responsabilidade pela morte dos pr�ncipes.";
		next;
		mes "[Padre Biscuss]";
		mes "Estou certo de que ele vai se sentir melhor dentro de alguns dias.";
		mes "Mas no momento, ele n�o esta em condi��es para usar a informa��o valiosa que voc� forneceu, ent�o eu utilizarei.";
		next;
		mes "[Padre Biscuss]";
		mes "Pessoalmente, eu sinto que o que aconteceu foi tr�gico, mas deve ser vingado.";
		mes "Talvez por isso eu tenho uma intoler�ncia com Imbullea a todo tempo, de qualquer forma...";
		next;
		mes "[Padre Biscuss]";
		mes "Embora n�o possamos reconhecer isto publicamente, em nome da Catedral Prontera, eu quero te agradecer por toda a ajuda.";
		prt_curse = 36;
		completequest(18048);
		getexp(1600000,0);
		close;
	} else if (prt_curse == 36) {
		mes "[Padre Biscuss]";
		mes "Ningu�m conhece a luz sem experimentar as trevas.";
		mes "Paz n�o tem sentido enquanto ela tem contrastes com caos.";
		next;
		mes "[Padre Biscuss]";
		mes "Religi�o torna-se ainda mais importante durante horas de caos, e horas de necessidade.";
		mes "Eu tenho que permanecer calmo, especialmente enquanto Padre Bamph se sente mal sobre este incidente...";
		close;
	} else {
		mes "[Padre Biscuss]";
		mes "Por favor, respeite o sil�ncio dentro da Sala do sacerdote.";
		mes "Obrigado por sua colabora��o.";
		close;
	}
}

// ------------------------------------------------------------------
prt_church,177,113,3	script	#gototomb	HIDDEN_NPC,{
	if (prt_curse > 17 && prt_curse < 23 || prt_curse > 31 && prt_curse < 35 || prt_curse == 41 || prt_curse == 42 || prt_curse == 44 || prt_curse == 51 || prt_curse == 52) {
		warp("prt_church",21,91);
	}
	end;
}

// ------------------------------------------------------------------
prt_church,23,89,3	script	Padre Biscuss#tomb	1_M_PASTOR,{
	mes "[Padre Biscuss]";
	mes "Hmm...?";
	mes "Voc� est� pronto para subir a escada?";
	next;
	if (select("Sim","N�o") == 1) {
		mes "[Padre Biscuss]";
		mes "Por favor me siga.";
		next;
		warp("prt_church",178,111);
		end;
	} else {
		mes "[Padre Biscuss]";
		mes "Por favor leve o tempo necess�rio e investigue tudo o que voc� puder.";
		close;
	}
}
