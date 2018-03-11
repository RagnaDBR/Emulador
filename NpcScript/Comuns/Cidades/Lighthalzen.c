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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Lighthalzen                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
lighthalzen,182,102,3	script	Lucius#lhz	4_M_LGTGRAND,{
	if (Zeny < 90000) {
		mes "[Lucius]";
		mes "Ol� jovem.";
		mes "Gostaria de fazer uma doa��o para ajudar os famintos?";
		next;
		if (select("Claro", "N�o, obrigado.") == 1) {
			mes "[Lucius]";
			mes "Voc� pode doar de 1 a 30 000 zenys.";
			mes "Que ser�o usados para auxiliar os pobres e alimentar crian�as famintas.";
			mes "Se voc� quer cancelar, digite '0'.";
			next;
			input(.@input);
			if (.@input > 30000) {
				mes "[Lucius]";
				mes "Por favor, insira um valor de 1 a 30000 para fazer uma doa��o aos necessitados, jovem.";
				close;
			} else if (.@input == 0) {
				mes "[Lucius]";
				mes "Que decepcionante.";
				mes "Mas voc� deve ter suas raz�es.";
				mes "Bem, quando voc� puder fazer uma doa��o aos necessitados, volte aqui.";
				close;
			}
			mes "[Lucius]";
			mes "Muito obrigado por sua doa��o de " + .@input + " zenys.";
			mes "Garanto que seu dinheiro ser� usado apenas para o benef�cio de quem necessita dele.";
			next;
			if (Zeny < .@input) {
				mes "[Lucius]";
				mes "Ainda assim, estou um pouco desapontado.";
				mes "Um aventureiro como voc� deveria doar o m�ximo poss�vel...";
				close;
			}
			Zeny -= .@input;
			$donatedzeny += .@input;
			mes "[Lucius]";
			mes "At� agora, eu recebi um total de " + $donatedzeny + " zennys em doa��es.";
			mes "Estou muito feliz de ver que ainda existem pessoas boas e generosas no mundo.";
			if ($donatedzeny > 260000) {
				next;
				mes "[Lucius]";
				mes "Isso deve ser o bastante para mandar para a Organiza��o de Ajuda aos Pobres.";
				mes "Por favor, aceite esse pequeno presente como um s�mbolo da minha gratid�o.";
				mes "Que Deus o aben�oe, aventureiro.";
				$donatedzeny = 0;
				.@weight1 = getiteminfo(.@Old_Blue_Box, ITEM_WEIGHT);
				.@weight2 = getiteminfo(.@Speed_Up_Potion, ITEM_WEIGHT);
				.@weightmax = .@weight1 + .@weight2;
				if ((MaxWeight - Weight) < .@weightmax) {
					next;
					mes "[Lucius]";
					mes "Oh...";
					mes "Infelismente voc� est� carregando muito peso.";
					mes "Lhe daria algo mas, voc� n�o vai conseguir carregar.";
					mes "Sinto muito, quem sabe uma pr�xima vez...";
					close;
				} else {
					getitem(Old_Blue_Box, 1);
					getitem(Speed_Up_Potion, 1);
				}
			}
			close;
		}
		mes "[Lucius]";
		mes "Entendo.";
		mes "Mas lembre-se que quando voc� doa com o cora��o, ser� recompensado dez vezes.";
		mes "Apesar de, admito, nem sempre os benef�cios serem imediatos.";
		close;
	}
	mes "[Lucius]";
	mes "Ol�, jovem.";
	mes "Voc� parece ser bastante rico.";
	mes "� bom ter dinheiro, mas tome cuidado para n�o ficar obcecado com isso.";
	next;
	mes "[Lucius]";
	mes "Quando tiver a chance, mostre sua generosidade com aqueles que podem n�o ter sorte como voc�.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,198,285,5	script	Jiwon#lhz	4_F_LGTGIRL,{
	mes "[Jiwon]";
	mes "Acho que temos muita sorte por poder viver em uma cidade t�o bonita e pac�fica como essa.";
	next;
	mes "[Jiwon]";
	mes "� t�o bom viver em um clima t�o agrad�vel.";
	mes "Com jardins t�o lindos e poder conhecer todas essas pessoas boas.";
	mes "Lighthalzen � como Asgard em Midgard, � um para�so na terra.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,220,244,3	script	Samnang#lhz	4_F_LGTGRAND,{
	mes "[Samnang]";
	mes "^333333*Suspiro...*^000000";
	mes "Fica cada vez mais d�ficil me locomover enquanto envelhe�o.";
	mes "Mas acho que isso � compreens�vel, n�o?";
	next;
	mes "[Samnang]";
	mes "Mas alguns dias atr�s, uns caras de terno preto gritaram comigo para eu sair da frente deles.";
	mes "Mas claro que n�o pude me mover muito r�pido.";
	mes "Ent�o sabe o que eles fizeram?";
	next;
	mes "[Samnang]";
	mes "Me deram um soco.";
	mes "Bem na barriga!";
	mes "N�o � que eu esteja gr�vida, mas isso n�o importa.";
	mes "Homens nunca podem bater em mulheres, especialmente idosas!";
	close;
}

// ------------------------------------------------------------------
lighthalzen,261,112,3	script	Ruth#lhz	4_F_LGTGIRL,{
	mes "[Ruth]";
	mes "Amor, n�o � bom estarmos juntos aqui?";
	mes "� o lugar perfeito para o nosso encontro.";
	next;
	mes "[Ruth]";
	mes "Estou t�o feliz por estar com voc�.";
	mes "Sinto que estou derretendo de felicidade!";
	mes "Ah, eu te amo tanto, Oyoung.";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "Epa...";
	mes "Esse casal est� indo para a Nuvem 9, n�o est�?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,259,108,7	script	Oyoung#lhz	4_M_LGTMAN,{
	mes "[Oyoung]";
	mes "Garota, parece que voc� foi picada pela mosquinha do amor.";
	mes "Mas h� um rem�dio para esse mal! Ahhh sim, eu garanto que h�!";
	next;
	mes "[Oyoung]";
	mes "Voc� precisa de uma dose di�ria da Vitamina do Oyoung!";
	mes "E pelo que vejo seus l�bios t�m defici�ncia dessa vitamina!";
	mes "Vou tomar conta disso!";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "Minha nossa!";
	mes "N�o sei o que � mais assustador...";
	mes "Ele ter usado aquela cantada ou o fato de ela ter funcionado...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,121,3	script	Kariya#lhz	1_F_MARIA,{
	mes "[Kariya]";
	mes "Acho que \"Lighthalzen\" significa algo como \"Pico de Luz\".";
	mes "Apesar de ter ouvido que essa cidade foi nomeada para homenagear algu�m.";
	mes "Mas quem pode saber?";
	next;
	mes "[Kariya]";
	mes "Ainda assim, � um bom nome para a cidade mais luxuosa e abastada de toda a Rep�blica de Schwaltzvalt.";
	mes "O que voc� acha daqui?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,82,5	script	Sung#lhz	4_M_KID2,{
	mes "[Sung]";
	mes "Quando eu crescer, quero me tornar uma pessoa t�o grande que at� ir�o fazer uma est�tua de mim.";
	mes "Assim como outras est�tuas que foram feitas.";
	next;
	mes "[Sung]";
	mes "Ei voc�.";
	mes "Aquela est�tua.";
	mes "Esse cara deve ter sido importante!";
	mes "S� de pensar que isso me faz sentir t�o bem!";
	next;
	mes "[Sung]";
	mes "� isso a�.";
	mes "Eu vou ser reconhecido assim tamb�m algum dia.";
	mes "Nossa, e � melhor que eu cres�a em tamanho e fique bonito.";
	mes "Para quando fizerem minha est�tua ela parecer ainda mais incr�vel.";
	mes "Sim.";
	mes "Sim, boa id�ia, Sung...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,89,73,3	script	Sameer#lhz	4_M_EINMAN2,{
	mes "[Sameer]";
	mes "Existem muitos casais apaixonados nessa cidade.";
	mes "Abra�os e beijos e amassos.";
	mes "�...";
	mes "� um horror.";
	next;
	mes "[Sameer]";
	mes "N�o acredito na indec�ncia que vejo todo dia t�o perto da minha casa.";
	mes "Eles n�o percebem que n�o podem ser t�o entusiasmados em lugares p�blicos?!";
	next;
	mes "[Sameer]";
	mes "Felizmente para o mundo, sou um po�o de moralidade.";
	mes "Na verdade, nem preciso de mulheres.";
	mes "Tudo que preciso s�o meus navios de brinquedo e domin�.";
	next;
	mes "[Sameer]";
	mes "Sou um indiv�duo totalmente bem ajustado.";
	mes "� por isso que as autoridades deviam me ouvir quando digo para prenderem casais por atentado ao pudor!";
	mes "Andar de m�os dadas!";
	mes "Eles n�o t�m vergonha?!";
	close;
}

// ------------------------------------------------------------------
lighthalzen,45,59,7	script	Janice#lhz	4_F_LGTGRAND,{
	mes "[Janice]";
	mes "Ah n�o, acho que me perdi de novo.";
	mes "As ruas daqui s�o muito confusas.";
	mes "Moro aqui faz tempo, e ainda assim n�o consigo me achar...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,66,94,3	script	Elmer Keays#lhz	4_M_LGTGRAND,{
	mes "[Elmer Keays]";
	mes "Andar ao seu lado assim me lembra dos velhos tempos.";
	mes "Quando todos morriam de inveja por eu ter uma mulher t�o linda ao meu lado. Heh heh.";
	next;
	mes "[Elmer Keays]";
	mes "Voc� ainda � a mais bela vis�o para os meus velhos olhos, querida.";
	mes "Eu tenho muita sorte por estar com voc�.";
	emotion(e_kis, 0, "Margie Keays#lhz");
	emotion(e_kis2);
	close;
}

// ------------------------------------------------------------------
lighthalzen,65,94,5	script	Margie Keays#lhz	4_F_LGTGRAND,{
	mes "[Margie Keays]";
	mes "Ah querido, o tempo est� t�o bom e agrad�vel hoje.";
	mes "Estou muito feliz que n�s resolvemos dar um passeio juntos.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,78,120,3	script	Maivi#lhz	4_F_LGTGIRL,{
	mes "[Maivi]";
	mes "...";
	next;
	mes "[Maivi]";
	mes "......";
	next;
	mes "[Maivi]";
	mes "Ah...";
	mes "Acabei de tirar um cochilo �timo.";
	mes "Esse clima agrad�vel me deixa relaxar muito.";
	mes "O ar aqui � muito limpo, diferente do de Einbroch.";
	next;
	mes "[Maivi]";
	mes "Esse ambiente limpo e divino existe gra�as � Corpora��o Rekenber.";
	mes "� incr�vel o que eles fazem com a tecnologia atualmente!";
	mes "Ahhhh, � t�o tranquilo.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,230,182,4	script	Klaubis#lhz	4_M_LGTGRAND,{
	mes "[Klaubis]";
	mes "Com licen�a, mas voc� � um turista?";
	mes "Seja bem-vind"+ (Sex == SEX_MALE ? "o" : "a") +" a Lighthalzen!";
	mes "Essa cidade tem tudo que precisamos, mas as vezes pode ser muito quieta, parada demais.";
	next;
	switch(select("Faz tempo que voc� mora aqui?", "Concordo.", "Sabe sobre o serial killer?")) {
		case 1:
		mes "[Klaubis]";
		mes "Sim, minha fam�lia mora nessa cidade faz tempo, come�ando com o meu bisav�.";
		mes "Vejamos, minha fam�lia mora aqui h� mais ou menos duzentos anos.";
		next;
		mes "[Klaubis]";
		mes "Voc� ficaria surpreso ao saber quantas pessoas permanecem na sua terra natal.";
		mes "� dif�cil sair, mesmo sabendo que pode voltar.";
		mes "N�o seria sua^FFFFFFterra natal se voc� n�o pudesse, n�o � ^000000 ?";
		close;
		case 2:
		mes "[Klaubis]";
		mes "Sim, de vez em quando a cidade fica meio desinteressante.";
		mes "Mas ainda assim, existem muitas coisas bonitas aqui, ent�o olhe em volta.";
		close;
		case 3:
		mes "[Klaubis]";
		mes "Voc� quer dizer o Assassino do Machado?";
		mes "Achei que fosse apenas uma velha hist�ria de fantasmas.";
		mes "Hum. Bem, acho que a mo�a da Loja de Armas sabe mais sobre isso...";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,232,156,3	script	Sigmund#lhz	4_M_LGTMAN,{
	mes "[Sigmund Ting]";
	mes "Sabe o que percebi?";
	mes "Os guardas na porta da favela muitas vezes ficam distra�dos.";
	mes "J� me aproveitei de um desses momentos de pouca aten��o e literalmente pulei o muro!";
	next;
	mes "[Sigmund Ting]";
	mes "Mas quando cheguei do outro lado, me decepcionei.";
	mes "N�o tem nada de mais.";
	mes "E isso me faz perguntar...";
	mes "Por que colocar guardas l�?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,190,134,5	script	Joyce#lhz	4_F_LGTGIRL,{
	mes "[Joyce]";
	mes "Posso sentir voc� olhando dentro do meu cora��o e fazendo-o bater cada vez mais r�pido.";
	mes "Com uma paix�o arrebatadora.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,191,134,3	script	Dan Song#zen2	4_M_LGTMAN,{
	mes "[Dan Song]";
	mes "Esses seus olhos...";
	mes "T�o puros e profundos, como piscinas de luz cintilante.";
	mes "T�o bonitos...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,115,159,3	script	Collins#lhz	4_M_LGTGRAND,{
	mes "[Collins]";
	mes "Realmente espero que o meu filho v� trabalhar na Corpora��o Rekenber.";
	mes "Eles certamente oferecem os melhores empregos de Lighthalzen.";
	next;
	mes "[Collins]";
	mes "Embora eles sejam uma empresa grande e pr�spera.";
	mes "� quase imposs�vel ser contratado por eles.";
	mes "Como as pessoas conseguem entrar l�?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,157,5	script	Villagomez#lhz	4_M_LGTGRAND,{
	mes "[Villagomez]";
	mes "S� dei uma saidinha para cortar o cabelo e me perdi.";
	mes "Ahh meu Deus, espero n�o deixar minha fam�lia preocupada.";
	mes "^333333*Suspiro...*^000000";
	close;
}

// ------------------------------------------------------------------
lighthalzen,125,68,5	script	Kemp#lhz	4W_M_01,{
	mes "[Kemp]";
	mes "Voc� j� viu as pessoas que trabalham na grande empresa aqui perto?";
	mes "Acho que os empregados de l� est�o meio esquisitos por algum motivo.";
	next;
	mes "[Kemp]";
	mes "Eu n�o cheguei a ir at� l�, mas alguma coisa estranha est� acontecendo com todos que trabalham l�.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,138,50,7	script	Mauro#lhz	4_M_EINOLD,{
	mes "[Mauro]";
	mes "Os jovens dessa cidade n�o tem respeito pelos mais velhos.";
	mes "Eu trabalhei duro por anos para ajudar a construir essa cidade, e � isso que recebo?";
	next;
	mes "[Mauro]";
	mes "Bah! Se n�o fosse por n�s, Lighthalzen n�o seria pr�spera como � hoje!";
	mes "Essas crian�as n�o percebem todo o luxo que t�m � devido ao nosso trabalho...";
	close;
	close;
}

// ------------------------------------------------------------------
lighthalzen,132,103,5	script	Sefith#lhz	4_M_JOB_KNIGHT2,{
	mes "[Sefith]";
	mes "Bonito. Inteligente.";
	mes "Educado. Forte.";
	mes "Olhar arrebatador.";
	mes "N�veis de paix�o e carisma perfeitamente balanceados.";
	mes "Tudo o que as garotas querem.";
	next;
	mes "[Sefith]";
	mes "Mas chega de falar de mim.";
	mes "Vamos falar sobre a pena que sinto de todos os outros homens de Lighthalzen.";
	mes "Nenhum deles tem a m�nima chance comigo por perto.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,239,64,5	script	Jade#lhz	4_F_LGTGIRL,{
	mes "[Jade]";
	mes "Ouvi dizer que tem um reinado estranho que � basicamente regido por magia e espadas.";
	mes "Onde aventureiros se juntam para o bem maior.";
	next;
	mes "[Jade]";
	mes "Ah, voc� � de Rune-Midgard?";
	mes "O que voc� acha da nossa cidade, com nossa avan�ada tecnologia? Hum...";
	next;
	mes "[Jade]";
	mes "Algum dia eu gostaria de ir visitar a sua terra natal.";
	mes "Parece t�o fant�stica e rom�ntica...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,205,208,4	script	Homem Ganancioso#lhz	4_M_YURI,{
	mes "[Homem Ganancioso]";
	mes "Comprar uma propriedade aqui custa muito dinheiro.";
	mes "Mas essa terra � perfeita para a constru��o do meu pal�cio!";
	mes "Ainda n�o tenho dinheiro, mas o grande dia chegar�.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,202,94,5	script	Wallace#lhz	4_M_EINOLD,{
	mes "[Wallace]";
	mes "......";
	mes "Aquela menina, que trabalha para a corpora��o Kafra, que acho que chama Mafra.";
	mes "Ela � muito charmosa.";
	next;
	mes "[Wallace]";
	mes "Agora, se eu fosse trinta anos mais jovem...";
	mes "Espere!";
	mes "Sou um homem rico e poderoso.";
	mes "Eu poderia cham�-la para sair.";
	mes "Hum? Por que est� me olhando assim?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,147,105,3	script	Laqumet#lhz	4_M_LGTMAN,{
	mes "[Laqumet]";
	mes "Claro que a masculinidade � muito atraente para as mulheres.";
	mes "Mas acho que elas tamb�m apreciam algu�m que seja simp�tico e converse com elas.";
	mes "N�o acha?";
	next;
	mes "[Laqumet]";
	mes "Posso n�o ser como Sefith, mas acho que tenho um sorriso bonitinho, boa personalidade.";
	mes "Espero que a minha honestidade e a minha lealdade me ajudem a encontrar algu�m especial!";
	close;
}

// ------------------------------------------------------------------
lighthalzen,123,212,4	script	Merpi#lhz	8_F_GIRL,{
	mes "[Merpi]";
	mes "O tempo n�o est� �timo hoje?";
	mes "Esse sol vai secar as roupas r�pido e deix�-las com um cheiro fresco.";
	next;
	mes "[Merpi]";
	mes "Oh, voc� � um aventureiro de Rune-Midgards?";
	mes "O que acha da nossa cidade?";
	mes "Se tiver alguma pergunta, venha falar comigo.";
	next;
	switch(select("N�o tenho nada para perguntar...", "Alguma novidade ou rumor?", "Eu tamb�m gosto de lavar roupas.")) {
		case 1:
		mes "[Merpi]";
		mes "S�rio?";
		mes "Bem, se voc� j� viajou por todo o mundo.";
		mes "Talvez tenha encontrado um lugar como Lighthalzen.";
		mes "Onde voc� se sinta confort�vel.";
		close;
		case 2:
		mes "[Merpi]";
		mes "Bem, as coisas est�o muito tranquilas nos �ltimos tempos.";
		mes "O �nico rumor � sobre um assassino estranho que tem um martelo...";
		close;
		case 3:
		mes "[Merpi]";
		mes "Ah, que maravilha!";
		mes "Eu adoro lavar roupas, embora n�o saiba muito bem porque. Ah, bem.";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,296,239,3	script	Berru#lhz	4_M_KID1,{
	switch(rand(1,3)) {
		case 1:
		mes "[Berru]";
		mes "Papai...! Aaaaaah.!";
		mes "Eu quero meu papai!";
		emotion(e_sob);
		next;
		mes "[Pilia]";
		mes "Berru, acho que o papai n�o vai voltar para casa hoje.";
		mes "Vamos, voc� tem que ir dormir.";
		next;
		mes "[Berru]";
		mes "N�o, n�o vou dormir at� o papai voltar!";
		mes "Ele disse que iria trazer doces hoje a noite!";
		mes "V� dormir voc�, Pilia!";
		emotion(e_ag);
		next;
		mes "[Pilia]";
		mes "^333333*Suspiro...*^000000";
		mes "Cad� nosso pai?";
		mes "Ele disse que arrumou um emprego bom, mas n�o apareceu nunca mais...";
		emotion(e_dots, 0, "Pilia#lhz");
		close;
		case 2:
		mes "[Pilia]";
		mes "Por que ele est� demorando tanto?";
		mes "Espero que o papai volte logo.";
		mes "Vamos Berru, pare de chorar.";
		emotion(e_dots, 0, "Pilia#lhz");
		next;
		mes "[Berru]";
		mes "^333333*Choro...*^000000";
		mes "Mas estou com fome e com saudade do papai!";
		next;
		mes "[Pilia]";
		mes "O tio Togii que mora ao lado tamb�m n�o voltou...";
		close;
		case 3:
		mes "[Pilia]";
		mes "Humm?";
		mes "Ah, sinto muito, mas meu irm�ozinho n�o para de corar.";
		mes "Desculpe se est� muito alto.";
		emotion(e_what, 0, "Pilia#lhz");
		next;
		mes "[Pilia]";
		mes "Nosso pai vai trabalhar em algum lugar longe.";
		mes "Ele finalmente arrumou emprego, mas as vezes fica dias sem aparecer.";
		mes "Estamos muito preocupados com ele.";
		next;
		mes "[Pilia]";
		mes "Meu irm�o Berru sente muita falta dele.";
		mes "N�o sei o que fazer para que ele pare de chorar. O que fa�o?";
		emotion(e_swt2, 0, "Pilia#lhz");
		close;
	}
}
lighthalzen,297,239,3	duplicate(Berru#lhz)	Pilia#lhz	4_F_CHNWOMAN

// ------------------------------------------------------------------
lighthalzen,312,233,3	script	Beggar#lhz	4_M_TWOLDMAN,,{
	mes "[Beggar]";
	mes "Por favor...";
	mes "Minhas crian�as est�o famintas...";
	mes "Pode me dar algum dinheiro?";
	next;
	if (select("Dar dinheiro para ele", "Ignorar") == 1) {
		if (Zeny < 50) {
			mes "[Beggar]";
			mes "Agrade�o sua bondade, mas parece que voc� tamb�m precisa de alguns zenys.";
			mes "Gostaria de se juntar a mim?";
			emotion(e_heh);
			close;
		}
		mes "[" + strcharinfo(PC_NAME) + "]";
		mes "Aqui, pegue.";
		Zeny -= 50;
		next;
		mes "[Beggar]";
		mes "Muito obrigado.";
		mes "N�o posso oferecer nada em troca.";
		mes "Mas posso te contar uma hist�ria e transmitir um pouco da sabedoria que adquiri com o passar dos anos.";
		emotion(e_thx);
		next;
		switch(rand(1, 3)) {
			case 1:
			mes "[Beggar]";
			mes "Todos j� estiveram em uma situa��o em que voc� sente que precisa fazer uma escolha.";
			mes "Entre fazer a coisa certa ou fazer o que voc� quer, n�o �?";
			next;
			mes "[Beggar]";
			mes "Voc� se sente acuado.";
			mes "Bem, vou te contar, quando existe um problema, as solu��es dispon�veis nem sempre s�o �bvias.";
			mes "Ent�o se acalme e pense.";
			next;
			mes "[Beggar]";
			mes "O que voc� pode ver e entender talvez n�o seja a realidade.";
			mes "Como estrelas, que est�o no c�u de dia, mas invis�veis.";
			mes "Devemos ter esperan�a, mesmo se n�o tivermos motivo aparente.";
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "............";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[Beggar]";
			mes "Hmm...?";
			mes "Voc� parece surpreso.";
			emotion(e_what);
			close;
			case 2:
			mes "[Beggar]";
			mes "Eu acredito e n�o acredito em destino.";
			mes "Deixe-me explicar assim.";
			mes "Eu vivo cada dia, cada um completando seu ciclo com milagres de um lado e trag�dias do outro.";
			next;
			mes "[Beggar]";
			mes "Ent�o cada dia pode ter experi�ncias boas, m�s ou ambas.";
			mes "Acredito que cada pessoa pode ter um papel ativo em seu pr�prio destino, dia ap�s dia.";
			next;
			mes "[Beggar]";
			mes "Podem ter algumas coisas que voc� n�o controla.";
			mes "Mas at� o pior pessimista pode concordar que esse mundo n�o tem apenas trag�dias.";
			next;
			mes "[Beggar]";
			mes "Levante-se quando cair e viva com paix�o.";
			mes "A capacidade de ocorrerem milagres sempre estar� l� e saiba que voc� pode ser um milagre para algu�m.";
			mes "Isso n�o � lindo?";
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[Beggar]";
			mes "N�o acredita?";
			mes "Voc� ver� por si mesmo, jovem.";
			mes "Existem muitas coisas boas em voc�.";
			emotion(e_what);
			close;
			case 3:
			mes "[Beggar]";
			mes "Raiva.";
			mes "As pessoas lidam com ela de formas diferentes.";
			mes "Alguns abafam.";
			mes "Outros liberam.";
			mes "Alguns t�m medo.";
			mes "Para simplificar, digamos que existem dois tipos de raiva.";
			next;
			mes "[Beggar]";
			mes "O primeiro � o tipo que n�o � muito produtivo.";
			mes "Como uma frustra��o que voc� pode mandar embora.";
			mes "Algu�m foi grosso com voc� ou seu amigo esqueceu seu anivers�rio?";
			mes "Sem estresse.";
			next;
			mes "[Beggar]";
			mes "N�o se deixe dominar por esse tipo de raiva, ou vai parecer um fracassado.";
			mes "Pense no quando completo, e se continuar chateado, reaja apropriadamente.";
			mes "Seja honesto sem machucar ningu�m.";
			next;
			mes "[Beggar]";
			mes "O segundo tipo de raiva � justificado.";
			mes "Sacanearam voc� e voc� quer retribuir.";
			mes "Apenas se lembre de n�o direcion�-la erroneamente, e responda de maneira apropriada.";
			next;
			mes "[Beggar]";
			mes "Entrar numa briga por raiva justificada, digamos para proteger algu�m, far� de voc� um her�i.";
			mes "Brigar por raiva passageira ou frustra��o far� de voc� um idiota.";
			mes "Saiba a diferen�a.";
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "............";
			mes "............";
			mes "............";
			emotion(e_dots, 1);
			next;
			mes "[Beggar]";
			mes "Qual o problema?";
			mes "Pode ser muita coisa para absorver, sabe.";
			emotion(e_what);
			close;
		}
	}
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "............";
	close;
}

// ------------------------------------------------------------------
lighthalzen,311,194,3	script	Reuben#lhz	4_M_LGTPOOR,{
	mes "[Reuben]";
	mes "Algum dia...";
	mes "Algum dia eu virarei um condutor de trem e darei o fora daqui!";
	mes "Eu odeio esse lugar!";
	emotion(e_ag);
	next;
	mes "[Reuben]";
	mes "O-ops...!";
	mes "Voc� me ouviu falando sozinho?";
	mes "Preciso ser mais silencioso!";
	emotion(e_an);
	close;
}

// ------------------------------------------------------------------
lighthalzen,306,324,3	script	Shengwen#lhz	4_M_LGTPOOR,{
	mes "[Shengwen]";
	mes "Estou ficando paran�ico?";
	mes "Eu realmente acho que algumas pessoas que eu conhe�o est�o desaparecendo sem nenhum motivo!";
	next;
	mes "[Shengwen]";
	mes "Digo, os meus amigos mais pr�ximos est�o bem.";
	mes "Mas estou parando de ver alguns conhecidos e rostos familiares.";
	mes "Talvez eu esteja pensando demais nisso...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,330,276,3	script	Angela#lhz	1_F_PRIEST,{
	mes "[Angela]";
	mes "Sauda��es, aventureiro.";
	mes "Sou Angela, uma assistente social da Organiza��o de Ajuda aos Pobres.";
	next;
	mes "[Angela]";
	mes "Percebi que os habitantes daqui t�m uma sa�de muito ruim, e n�o apenas por causa da sua condi��o.";
	next;
	mes "[Angela]";
	mes "Mandei um relat�rio para os meus superiores.";
	mes "Mas por alguma raz�o eles ainda n�o me enviaram uma resposta.";
	mes "Estou come�ando a me preocupar com isso...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,337,296,3	script	Funcion�rio#lhz	4_M_LGTGUARD2,{
	mes "[Funcion�rio Rekenber]";
	mes "Sauda��es.";
	mes "Como parte de nossos esfor�os para auxiliar os pobres.";
	mes "A Corpora��o Rekenber est� oferecendo postos de trabalho para os moradores das �reas carentes.";
	next;
	mes "[Funcion�rio Rekenber]";
	mes "Eles podem escolher entre trabalhar em casa ou fazer um treinamento que permitir� melhores op��es profissionais.";
	mes "Essa � uma �tima chance de fazer diferen�a...";
	mes "E tamb�m algum dinheiro.";
	emotion(e_no1);
	close;
}

// ------------------------------------------------------------------
lighthalzen,326,249,5	script	Grinnel#lhz	4_M_LGTPOOR,{
	mes "[Grinnel]";
	mes "V� aqueles homens de terno preto?";
	mes "Cara, me deram um susto!";
	mes "Vieram at� mim para fazer v�rias perguntas estranhas!";
	next;
	mes "[Grinnel]";
	mes "Queriam saber se eu conhecia algu�m da Corpora��o Rekenber.";
	mes "Se j� tinha ido em uma parte da cidade, esse tipo de coisa.";
	mes "Me assustaram muito.";
	next;
	mes "[Grinnel]";
	mes "Viver nas favelas � uma droga.";
	mes "A vida � dura e as pessoas acham que podem te tratar como quiserem.";
	mes "Eu odeio Lighthalzen...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,159,222,1	script	Funcion�rio Rekenber#lhz	4_M_MANAGER,{
	mes "[Benatuth]";
	mes "O mec�nico est� acabando a manuten��o do avi�o particular do nosso gerente.";
	mes "Voc� pode imaginar ter um desses s� para voc� poder voar para onde quiser?";
	next;
	mes "[Benatuth]";
	mes "�, o gerente da Corpora��o Rekenber...";
	mes "� um homem muito poderoso.";
	mes "� at� assustador tudo o que ele pode fazer com o dinheiro dele, sabe?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,162,304,7	script	Guarda Rekenber#lhz	4_M_LGTGUARD,{
	mes "[Guarda Drew]";
	mes "Cara, olha isso.";
	mes "Fotos oficiais das meninas da Corpora��o Kafra. Olha...";
	mes "E elas est�o at� usando cintos!";
	emotion(e_ho);
	next;
	mes "[Guarda Tan]";
	mes "Ent�o todas elas est�o usando cintos nessas fotos?";
	mes "Isso quer dizer que tem tamb�m a foto da menina que usa �culos?";
	mes "Essa � a melhor not�cia do dia!";
	emotion(e_omg, 0, "Guarda Rekenber#lhz2");
	next;
	mes "[Guarda Drew]";
	mes "Ok cara, voc� sabe que essas fotos s�o edi��o limitada especial de colecionador.";
	mes "Ent�o cada uma custa 300 000 zenys.";
	mes "Eu tenho um lote extra, mas n�o sei se voc� quer comprar todas...";
	next;
	mes "[Guarda Tan]";
	mes "Vou ficar com todas.";
	mes "Espere, todas menos essa da garotinha.";
	mes "S� a id�ia de ter a foto dela por perto j� me deixa...";
	mes "� melhor n�o ter.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,163,306,3	script	Guarda Rekenber#lhz2	4_M_LGTGUARD2,{
	mes "[Guarda Tan]";
	mes "Uau. Isso aqui...";
	mes "Isso aqui � arte. A luz, o �ngulo, o... o...";
	mes "Nossa.";
	emotion(e_swt2);
	next;
	mes "[Guarda Drew]";
	mes "Cara, essas fotos s�o oficiais e licenciadas...";
	mes "Valem cada zeny que pagamos.";
	mes "Diga adeus ao calend�rio das garotas de biqu�ni e ol� para a Kafra Leilah!";
	next;
	mes "[Guarda Tan]";
	mes "Leilah?";
	mes "Voc� quer dizer a que usa �culos?";
	mes "Cara, ela � a minha preferida tamb�m!";
	close;
}

// ------------------------------------------------------------------
lighthalzen,70,227,4	script	Delna#lhz	8_F,{
	mes "[Delna]";
	mes "As vezes os prazeres mais simples podem te dar a maior felicidade.";
	mes "Para mim, a melhor coisa � sair e ficar no sol.";
	next;
	mes "[Delna]";
	mes "Sim, tomar sol em um lugar calmo e relaxante pode ser muito revigorante.";
	mes "E se voc� tomar cuidado para n�o sofrer queimaduras, tomar sol pode ser uma coisa muito positiva.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,107,107,3	script	Kosit#lhz	4_M_LGTMAN,{
	mes "[Kosit]";
	mes "Essa cidade pode ter mais guardas e regras do que as outras.";
	mes "Mas ainda n�o sei se � seguro morar aqui.";
	next;
	mes "[Kosit]";
	mes "Digo, a raz�o de termos tantas regras � a presen�a de gangsters que as vezes entram na cidade.";
	mes "Normalmente � at� tranquilo e tudo.";
	mes "Mas essas regras...";
	next;
	mes "[Kosit]";
	mes "� bom estar seguro, mas n�o sei se � uma boa id�ia sacrificar nossa liberdade e nosso jeito de viver, sabe?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,176,65,5	script	Kimmy#lhz	4_F_LGTGIRL,{
	mes "[Kimmy]";
	mes "Diferente dos outros lugares, Lighthalzen tem muitas lojas de roupas e acess�rios.";
	mes "Isso � como o c�u para algu�m como eu.!";
	next;
	mes "[Kimmy]";
	mes "N�o sei se voc�s aventureiros se interessam por moda.";
	mes "Mas voc� pode renovar seu guarda roupa em lojas �timas e modernas aqui em Lighthalzen.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,364,282,3	script	Bodger#lhz	4_M_LGTPOOR,{
	mes "[Bodger]";
	mes "Outro dia faminto...";
	mes "N�o tenho dinheiro, e mesmo se tivesse n�o tem nenhum lugar que venda comida que eu comeria.";
	mes "Nossa, estou quase morrendo...";
	next;
	mes "[Bodger]";
	mes "Ouvi dizer que as pessoas da cidade comem refei��es deliciosas oito vezes por dia!";
	mes "Espero que seja s� um exagero.";
	mes "Porque eu ficaria louco se n�o fosse...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,192,63,4	script	Sergei#lhz	4_F_03,{
	mes "[Sergei]";
	mes "Sabe, tem uma hist�ria interessante sobre aquele martelo que est� pendurado ali.";
	mes "Voc� gostaria de escut�-la?";
	next;
	if (select("Claro", "N�o, obrigado.") == 1) {
		mes "[Sergei]";
		mes "O dono anterior da Loja de Armas era um assassino em s�rie.";
		mes "Toda noite, ele pegava aquele martelo e assassinava cruelmente mo�as bonitas como eu.";
		next;
		mes "[Sergei]";
		mes "Quando ele finalmente foi pego, decapitaram-no com seu pr�prio martelo.";
		mes "Desde ent�o, dizem que seu fantasma ainda afia e mexe nesse martelo a noite.";
		next;
		mes "[Sergei]";
		mes "S� pensar nisso me d� arrepios!";
		mes "E eu ainda tenho que trabalhar aqui!";
		mes "� assustador!";
		close;
	}
	mes "[Sergei]";
	mes "Ah, que decepcionante.";
	mes "� a hist�ria perfeita para essa temporada.";
	mes "Bem, pensando nisso, � uma hist�ria meio arrepiante...";
	close;
}

// ------------------------------------------------------------------
lighthalzen,258,223,3	script	Srinivas#lhz	4_M_LGTGRAND,{
	mes "[Srinivas]";
	mes "Esses pr�dios decadentes na favela s�o uma vis�o que ofende todo o resto da cidade!";
	mes "Gostaria que fossem demolidos.";
	mes "N�o me interesso pelos pobres e necessitados.";
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,203,3	script	Victor Perfecto#lhz	4_M_LGTMAN,{
	mes "[Victor Perfecto]";
	mes "J� ouvi falar que a Corpora��o Rekenber realmente criou o ambiente de Lighthalzen por meios artificiais.";
	next;
	mes "[Victor Perfecto]";
	mes "Parece que precisaria de muito investimento.";
	mes "Mas criar um ambiente artificialmente n�o � imposs�vel para a Corpora��o Rekenber.";
	mes "Com todos seus recursos dispon�veis.";
	next;
	mes "[Victor Perfecto]";
	mes "^333333*Suspiro...*^000000";
	mes "Ainda assim, � deprimente pensar que a beleza da natureza pode ser feita e igualada a zenys, voc� n�o acha?";
	close;
}

// ------------------------------------------------------------------
lighthalzen,40,107,4	script	Vergil#lhz	4_M_LGTMAN,{
	mes "[Vergil]";
	mes "O tempo est� t�o bom hoje, como sempre.";
	mes "Queria sair do trabalho e ir fazer exerc�cios f�sicos.";
	next;
	switch(select("Onde voc� quer ir?", "Mas voc� n�o devia ir trabalhar?", "Ouviu falar sobre o serial killer?")) {
		case 1:
		mes "[Vergil]";
		mes "Bem, esses caras de terno preto, sem mencionar os rufi�es que de vez em quando conseguem entra na cidade.";
		mes "Fazem com que seja meio inseguro sair daqui sozinho.";
		next;
		mes "[Vergil]";
		mes "Mas eu e um amigo meu estamos planejando ir para Al De Baran um dia desses.";
		mes "Nossa, da �ltima vez que n�s fomos, gastamos muitos zenys.";
		next;
		mes "[Vergil]";
		mes "Ele at� ganhou um pr�mio, um tipo de po��o, e deu para eu experimentar.";
		mes "Eu bebi, e ela fez com que eu me movesse muito devagar.";
		mes "Que tipo de pr�mio � esse?!";
		next;
		mes "[Vergil]";
		mes "Acho que meu amigo foi enganado.";
		mes "Ou isso, ou eu fui um idiota por beber a po��o.";
		mes "Como elestiveram uma id�ia t�o ruim para um pr�mio!";
		close;
		case 2:
		mes "[Vergil]";
		mes "O qu...?!";
		mes "Eu n�o disse que ia faltar no trabalho, s� disse que queria!";
		mes "Mas s� para voc� saber, talvez, apenas talvez, eu n�o v� hoje!";
		next;
		mes "[Vergil]";
		mes "Mas acho que acabarei n�o fazendo isso...";
		mes "Droga...";
		mes "Certamente o fim de semana n�o chega r�pido o suficiente!";
		close;
		case 3:
		mes "[Vergil]";
		mes "O que, voc� quer dizer aquele assassino do martelo de anos atr�s?";
		mes "Bem, eu ouvi um rumor de que n�o foi bem assim.";
		mes "Deixa eu ver, como era mesmo?";
		next;
		mes "[Vergil]";
		mes "Ouvi dizer que um chapeleiro, o que faz Chap�u de Fumacento.";
		mes "Acidentalmente fez um chap�u de pessoas, inv�s de um feito com monstros.";
		mes "N�o me pergunte como.";
		next;
		mes "[Vergil]";
		mes "�, acho que foram parentes do capit�o do avi�o...";
		mes "Eles foram transformados em chap�u por acidente. Parece que era algo como um Reindeer.";
		mes "Nossa, mas isso � estranho demais.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
lhz_in01,134,45,3	script	Cenku Dekdam#lhz	4_M_LGTMAN,{
	mes "[Cenku Dekdam]";
	mes "Cara, se voc� fosse pegar essa cidade inteira e coloc�-la a venda.";
	mes "Quanto voc� acha que seria o pre�o de Lighthalzen, hein?";
	next;
	mes "[Cenku Dekdam]";
	mes "Digo, essa cidade � feita de dinheiro.";
	mes "� isso que torna essa cidade um lugar t�o bom e agrad�vel para morar.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,134,38,3	script	Bankri Kun#lhz	4_M_NFMAN,{
	mes "[Bankri Kun]";
	mes "Preciso trabalhar...";
	mes "Preciso me concentrar...";
	mes "Resistir ao sono...";
	mes "Por que eu continuo vindo aqui?";
	mes "� horr�vel...";
	next;
	mes "[Bankri Kun]";
	mes "Ol�, jovem.";
	mes "Quer um conselho para suas aventuras? Ok.";
	mes "Hum. Sempre. Escove.";
	mes "Seus dentes.";
	mes "Escove-os todo dia.";
	mes "Ah, e n�o esque�a de ter uma boa escova de dentes.";
	next;
	mes "[Bankri Kun]";
	mes "Agora preciso voltar ao trabalho.";
	mes "Te vejo mais tarde, crian�a.";
	mes "Desculpe se o meu conselho foi p�ssimo...";
	mes "N�o consegui pensar em mais nada para dizer.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,139,40,7	script	Enoz#lhz	1_M_INNKEEPER,{
	mes "[Enoz]";
	mes "Ent�o o livro que eu encomendei do Reino de Rune-Midgards acabou de chegar.";
	mes "� muito bom, � do cara que escreveu 'A Aventura do Sapo de Roda' anos atr�s.";
	mes "Lembra-se?";
	next;
	mes "[Enoz]";
	mes "Enfim, esse novo livro, 'Onde Crescem Plantas Vermelhas' est� concorrendo ao Pr�mio Yggdrasil.";
	mes "E... eu n�o sei por que estou contando isso para voc�... Realmente n�o sei...";
	close;
}

// ------------------------------------------------------------------
lhz_in01,124,28,3	script	Ellette#lhz	1_F_01,{
	mes "[Ellette]";
	mes "...";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "Com licen�a.";
	next;
	mes "[Ellette]";
	mes ".........";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "Ol�?";
	next;
	mes "[Ellette]";
	mes "...Ah! Galera!";
	mes "Acabei de completar mais um! Eba!";
	next;
	mes "[Outros funcion�rios]";
	mes "O qu-qu�?!";
	mes "N�o, de novo n�o!";
	next;
	mes "[Leekal]";
	mes "Voc� � humana?!";
	mes "Deve ter algum segredo para manter toda essa produtividade.";
	mes "� estranho...";
	next;
	mes "[Ellette]";
	mes "Ah, que bobagem.";
	mes "Posso ser boa nisso, mas eu nunca ganharia do Cenku.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,40,3	script	Dowbow Ryuei#lhz	4_M_THAIONGBAK,{
	mes "[Dowbow Ryuei]";
	mes "S� de, bem, curiosidade, qual palavra voc� prefere?";
	mes "Sonho ou Realidade?";
	mes "Escolha uma.";
	next;
	if (select("Sonho", "Realidade") == 1) {
		mes "[Dowbow Ryuei]";
		mes "� mesmo? Eu tamb�m!";
		mes "�, n�s temos a mesma vis�o de mundo.";
		mes "Se voc� n�o se importar, eu gostaria de apertar sua m�o.";
		emotion(e_no1);
		close;
	}
	mes "[Dowbow Ryuei]";
	mes "Realidade ent�o?";
	mes "Concordo que ser realista tem suas vantagens, mas eu sou um sonhador.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,46,3	script	Leekal#lhz	4_M_DIEMAN,{
	mes "[Leekal]";
	mes "Ent�o... Estou falido.";
	mes "Por que gastei tanto dinheiro com vinho, mulheres e m�sica?";
	mes "Eu me arrependo, de todo o prazer que tive esse m�s.";
	mes "�, foi prazer demais.";
	next;
	mes "[Ninjose]";
	mes "� isso que acontece quando voc� � irrespons�vel com seu dinheiro.";
	mes "Voc� deveria ler \"Qualquer Um Pode Ser Rico\", um livro muito bom.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,53,7	script	Ninjose#lhz	4_M_THAIAYO,{
	mes "[Ninjose]";
	mes "Depois de muito tempo, finalmente comprei minha casa.";
	mes "Voc� tamb�m deveria guardar dinheiro para o futuro.";
	mes "E leia \"Qualquer Um Pode Ser Rico\", � �timo!";
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,39,7	script	Kejulle Rekenber#lhz	4_M_CHNMAN,{
	mes "[Kejulle Rekenber]";
	mes "Hum? �, meu sobrenome � Rekenber, assim como o do nosso gerente, mas � s� uma coincid�ncia.";
	mes "Sou um funcion�rio normal.";
	mes "Sem tratamento especial...";
	close;
}

// ------------------------------------------------------------------
lhz_in01,110,40,3	script	Jorjerro#lhz	4_M_ORIENT02,{
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "^3355FFEsse homem est� im�vel, e para todos os prop�sitos, parece adormecido.^000000";
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,45,7	script	Joshua#lhz	4_M_BIBI,{
	mes "[Joshua]";
	mes "O que estou fazendo aqui?";
	mes "Estou esperando meu sonho, que mulheres caiam no meu colo, o que mais parece?";
	next;
	mes "[Joshua]";
	mes "Altas, loiras, bonitas, de pele macia.";
	mes "Isso a�.";
	mes "Venham a Joshua, garotas.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,180,28,4	script	Guarda#lhz	4_M_LGTGUARD,{
	mes "[Guarda]";
	mes "Essa � uma �rea restrita.";
	mes "Por favor saia se n�o tiver autoriza��o especial.";
	mes "Agradecemos por sua coopera��o.";
	close;
}
lhz_in01,173,28,4	duplicate(Guarda#lhz)	Guarda#lhz2	4_M_LGTGUARD

// ------------------------------------------------------------------
lhz_in01,14,28,3	script	Atendente#lhz	4_M_MANAGER,{
	mes "[Atendente]";
	mes "Esse muro de Banquetes � utilizado para realizar eventos como festas para parceiros.";
	mes "Clientes e outros associados.";
	mes "Al�m de confer�ncias de imprensa.";
	mes "Claro, n�o h� nada aqui agora.";
	next;
	mes "[Atendente]";
	mes "As vezes paz e quietude s�o boas para mudar os ares, mas agora eu estou meio entediado.";
	mes "Acho que preferia estar ocupado do que aqui roendo as unhas, na verdade.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,43,52,3	script	Luccet#lhz	4_F_KID2,{
	mes "[Luccet]";
	mes "Shhhh! Ei, meu irm�o tem \"aquilo\", ent�o preciso de um lugar para me esconder!";
	mes "Espere, voc� pode ficar parado?";
	mes "Posso me esconder atr�s de voc�?";
	mes "Ah, droga!";
	close;
}

// ------------------------------------------------------------------
lhz_in01,21,50,7	script	Annette#lhz	4_F_02,{
	mes "[Annette]";
	mes "Ouvi dizer que o Hall de Banquetes Rekenber tamb�m � usado para casamentos.";
	mes "Deve ser t�o maravilhoso.";
	next;
	mes "[Annette]";
	mes "Mesmo se for bem mais caro, eu gostaria de me casar aqui.";
	mes "O casamento s� ocorre uma vez na vida, de prefer�ncia, ent�o eu gostaria que o meu fosse uma experi�ncia memor�vel.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,53,3	script	#horri	HIDDEN_NPC,{
	mes "^3355FFIsso � apenas uma pilha de arquivos, um amontoado de livros e um retrato de fam�lia.^000000";
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,47,3	script	#never	HIDDEN_NPC,{
	mes "^3355FFEssa mesa est� muito limpa e organizada em compara��o com as outras mesas que voc� j� viu.";
	mes "Voc� p�ra por um momento para olhar maravilhado para a limpeza da mesa.^000000";
	close;
}

// ------------------------------------------------------------------
lhz_in01,166,55,3	script	#crazy4u	HIDDEN_NPC,{
	mes "^3355FFEssa mesa tem uma prateleira lotada de v�rios tipos de livros.";
	mes "Por curiosidade, voc� decide pegar um.^000000";
	next;
	mes "^3355FFEntretanto, o livro que voc� pegou cont�m grande quantidade de magia negra, o que faz voc� larg�-lo.^000000";
	specialeffect(EF_CURSEATTACK);
	close;
}

// ------------------------------------------------------------------
lhz_in01,148,45,3	script	Noama#lhz	4W_M_01,{
	mes "[Noama]";
	mes "Hee hee.!";
	mes "Quer ouvir uma coisa engra�ada?";
	mes "Soube que tem um bar em Prontera onde um cara manda solteiros para Jawa...";
	next;
	mes "[Mazwon]";
	mes "Noama...!";
	mes "Essas m�quinas est�o falhando de novo!";
	mes "Venha c� agora!";
	next;
	mes "[Noama]";
	mes "O qu�?!";
	mes "Pare de me amolar, eu n�o fiz nada!";
	close;
}

// ------------------------------------------------------------------
lhz_in01,157,47,1	script	Mareth#lhz	4_M_NFLOSTMAN,{
	mes "[Mareth]";
	mes "Yoo hoo hoo.";
	mes "Ah, como eu amo amo amo chocolate!";
	emotion(e_lv);
	next;
	mes "[Mareth]";
	mes "Com�-lo...";
	mes "Ou derret�-lo...";
	mes "Espalh�-lo em mim.";
	mes "Cara. Novo objetivo na vida.";
	close;
}

// ------------------------------------------------------------------
lhz_in01,144,53,3	script	Jorje#lhz	4W_M_02,{
	switch(rand(1,3)) {
		case 1:
		mes "[Jorje]";
		mes "Aaarre, eu n�o tenho tempo para conversar!";
		mes "Estou no meio de uma tarefa importante!";
		mes "Espere a�!";
		close;
		case 2:
		mes "[Jorje]";
		mes "N-n�o chegue mais perto!";
		mes "Qualquer um que chegar perto pode me machucar!";
		mes "Saia daqui!";
		close;
		case 3:
		mes "[Jorje]";
		mes "Ah cara...";
		mes "Eu tenho trabalhado t�o duro e nem fiz uma pausa ainda.";
		mes "Acho que vou me recompensar e comprar algo como...";
		next;
		mes "[Jorje]";
		mes "N�o! N�o, n�o vou comprar nada!";
		mes "Tenho que pensar na minha futura esposa!";
		mes "Preciso...";
		mes "Juntar... Mais... Dinheiro!";
		close;
	}
	end;
}

// ------------------------------------------------------------------
lhz_in01,139,48,7	script	Leimi#lhz	1_F_MERCHANT_01,{
	mes "[Leimi]";
	mes ".........";
	next;
	mes "[Leimi]";
	mes "Oh...!";
	mes "Meu Deus!";
	mes "Posso ajud�-lo?";
	emotion(e_omg);
	if (BaseJob == Job_Assassin) {
		next;
		mes "[Leimi]";
		mes "Um Assassino...?";
		mes "Ah, voc� por acaso conhece algum menino Assassino que esteja solteiro?";
		mes "Ai-meu-Deus, eles s�o t�o maravilhosos.";
	}
	close;
}

// ------------------------------------------------------------------
lhz_in01,138,47,0	script	#mimir_camera	FAKE_NPC,2,2,{
	OnTouch:
	mes "^3355FF*Click*^000000";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "O qu�...?";
	mes "Esse som. Algu�m...";
	mes "Algu�m tirou uma foto minha?";
	close2;
	end;
}

// ------------------------------------------------------------------
lhz_in01,221,131,7	script	Cientista#lhz	4_LGTSCIENCE,{
	mes "[Cientista]";
	mes "O que aconteceu?";
	mes "Todas as m�quinas est�o em ru�nas e o relat�rio de pesquisa sumiu?!";
	mes "A hist�ria de Regenschirm foi roubada!";
	close;
}

// ------------------------------------------------------------------
lhz_in02,242,172,1	script	Funcion�rio do Hotel#lhz	4_M_LGTGUARD,{
	mes "[Funcion�rio do Hotel]";
	mes "Se voc� sofrer algum inconveniente, n�o hesite e fale conosco assim que poss�vel.";
	next;
	mes "[Funcion�rio do Hotel]";
	mes "Por favor use as escadas no norte do pr�dio para descer e ir para a mesa central.";
	mes "Obrigado e aprecie sua estadia aqui.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,210,189,3	script	Christopher Michael#lhz	4_M_DIEMAN,{
	mes "[Christopher Michael]";
	mes "OoooOoh.";
	mes "T���o confort�vel.";
	mes "N�o quero acordar.";
	mes "N�o quero levantar.";
	mes "Nunca mais.";
	mes "OoOoooh...";
	close;
}

// ------------------------------------------------------------------
lhz_in02,251,212,3	script	Funcion�rio do Hotel#lhz2	4_M_LGTGUARD,{
	mes "[Funcion�rio do Hotel]";
	mes "Essa � a Su�te de Casal.";
	mes "Voc� tamb�m pode alug�-la sozinho, mas nosso hotel prioriza casais que se candidatam a esse quarto.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,209,277,5	script	Ben Allen#lhz	4_M_02,{
	mes "[Ben Allen]";
	mes "Aaahhh Oooooh.";
	mes "Est� t�o confort�vel.";
	mes "O ar � t�o fresco e o sof� � t�o macio...";
	mes "Por que minha casa n�o � assim?";
	next;
	mes "[Ben Allen]";
	mes "J� estive em outros hot�is, mas vou te contar, esse daqui � o melhor de todos.";
	mes "Depois de uma noite de sono aqui, eu me sinto um novo homem!";
	close;
}

// ------------------------------------------------------------------
lhz_in02,238,275,5	script	Funcion�rio do Hotel#lhz3	4_M_LGTMAN,{
	mes "[Funcion�rio do Hotel]";
	mes "Hospitalidade com um sorriso e comprometimento total com seu conforto.";
	mes "Esse � nosso lema, no hotel Drag�o Real.";
	mes "V� at� a mesa central se quiser se hospedar aqui.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,271,281,2	script	Cidad�o#lhz	1_M_01,{
	mes "[Hachi]";
	mes "Ah sim!";
	mes "Eu amo-amo-amo bares.";
	mes "N�o venho pelos drinques, venho pelas lindas garotas daqui.";
	next;
	mes "[Hachi]";
	mes "Estranho.";
	mes "� a primeira vez que eu tomo o rum daqui, mas parece que ele � sensualidade l�quida!";
	mes "Voltemos para a festa com todas as garotas.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,277,285,4	script	Gar�om#lhz	1_M_PUBMASTER,{
	mes "[Duff]";
	mes "Ei, voc� � de Rune-Midgards, n�o?";
	mes "Por favor, sinta-se em casa enquanto est� em Lighthalzen e tenha uma boa estadia aqui.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,281,280,6	script	Cliente#lhz	4_F_CHNDRESS2,{
	mes "[Rona]";
	mes "Eu odeio quando os caras simplesmente pulam os Passos Um e Dois.";
	mes "Antes que voc� fique perdido, o Passo Tr�s � 'Pe�a o n�mero do meu telefone.'";
	next;
	mes "[Rona]";
	mes "Eu realmente gostaria que um cara legal viesse ter uma conversa de verdade comigo.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,282,4	script	Cliente#lhz2	4_M_YURI,{
	mes "[Greenfield]";
	mes "N�o acredito...";
	mes "Essa mar� de azar n�o vai acabar nunca, vai?";
	mes "Perdi todas as minhas ma��s nos dados hoje.";
	mes "De novo. Ah meu...";
	next;
	mes "[Greenfield]";
	mes "Ok. Ok.";
	mes "Se eu continuar jogando, alguma hora eu vou ganhar.";
	mes "Digo, � assim que as coisas funcionam!";
	mes "Mesmo se est�o contra mim...";
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,273,3	script	Cliente#lhz3	1_M_04,{
	mes "[Terry]";
	mes "N�o costumo beber muito, mas a atmosfera desse lugar � muito boa.";
	mes "� relaxante, assim como a m�sica que colocam para tocar...";
	next;
	mes "[Terry]";
	mes "�, esse hotel � muito bom. Recomendo-o a todos os meus amigos turistas, na verdade.";
	mes "Agora por que voc� n�o senta aqui comigo?";
	close;
}

// ------------------------------------------------------------------
lhz_in02,265,273,6	script	Equipe do Laborat�rio#lhz	4_LGTSCIENCE,{
	mes "[Assam]";
	mes "Esse lugar � muito bom e tamb�m muito tranquilo.";
	mes "Eu gosto de vir aqui ap�s o trabalho, tomar uma bebida e simplesmente conversar com o barman.";
	next;
	mes "[Assam]";
	mes "A bebida aqui � incr�vel e pode ser considerada uma das melhores do mundo.";
	mes "Eu n�o sei, mas por alguma raz�o o gosto dela me lembra trabalho em equipe.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,28,39,3	script	Helen#lhz	4_F_KID2,{
	mes "[Helen]";
	mes "Sabe, quando eu crescer, talvez eu trabalhe em um banco.";
	mes "Parece um emprego muito legal, voc� n�o acha?";
	close;
}

// ------------------------------------------------------------------
lhz_in02,31,33,3	script	Gracie#lhz	4_F_LGTGRAND,{
	mes "[Gracie]";
	mes "Ah, est� t�o confort�vel aqui.";
	mes "Mas por que estamos dentro do banco quando os servi�os banc�rios nem est�o funcionando?";
	mes "Estamos esperando, mas esperando confortavelmente.";
	next;
	mes "[Gracie]";
	mes "Na verdade, � t�o confort�vel aqui, que acho que me recusarei a sair.";
	mes "Apesar de estar disposta a mudar de id�ia se voc� achar outro lugar que seja ainda mais confort�vel.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,21,38,7	script	Funcion�rio do Banco#lhz	4_M_04,{
	mes "[Funcion�rio do Banco]";
	mes "Devido a alguns erros cr�ticos do sistema, os servi�os banc�rios est�o temporariamente suspensos.";
	mes "Pedimos desculpas pela inconveni�ncia e agradecemos a compreens�o.";
	close;
}
lhz_in02,21,25,7	duplicate(Funcion�rio do Banco#lhz)	Funcion�rio do Banco#lhz2	4_M_04
lhz_in02,34,22,1	duplicate(Funcion�rio do Banco#lhz)	Funcion�rio do Banco#lhz3	4_M_SAGE_C

// ------------------------------------------------------------------
lhz_in02,145,177,0	script	Togii#lhz	4_M_DIEMAN,{
	mes "[Togii]";
	mes "Aah sim...";
	mes "J� me sinto diferente.";
	mes "O u�sque de Morroc � o melhor!";
	mes "^333333*Solu�o*^000000";
	mes "Nossa, essa coisa funciona muito r�pido!";
	mes "Heh heh.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,157,201,6	script	Hinkley#lhz	4_M_LGTPOOR,{
	mes "[Hinkley]";
	mes "Meh heh heh...";
	mes "^333333*Solu�o*^000000";
	mes "Acredite ou n�o, eu estou...";
	mes "Andando... no Ar...";
	mes "Nunca achei que pudesse s-ser t�o livree-ee-ee.";
	next;
	mes "^3355FFEsse cara est� totalmente fora de si!^000000";
	close;
}

// ------------------------------------------------------------------
lhz_in02,289,277,3	script	Lutador Marcial#lhz	4_M_MONK,{
	mes "[Lutador de Artes Marciais]";
	mes "Droga...";
	mes "Vim ao lugar errado para procurar um desafio.";
	mes "Ningu�m aqui � competitivo o bastante, nem bom o suficiente!";
	next;
	mes "[Lutador de Artes Marciais]";
	mes "A cidade inteira acha que pode comprar poder e seguran�a com dinheiro.";
	mes "Eles n�o sabem o valor de uma luta boa e amig�vel.";
	mes "Quem sabe eu encontre um rival por aqui...";
	close;
}

// ------------------------------------------------------------------
lhz_in02,267,25,4	script	Diana#lhz	4_F_ROGUE,{
	mes "[Diana]";
	mes "Nossa, aquela arma � fant�stica!";
	mes "Mas com certeza tamb�m � cara. Hum...";
	next;
	mes "[Assistente da Loja]";
	mes "Madame, voc� est� falando desse Stiletto?";
	mes "Voc� tem um �timo olho para armas de qualidade.";
	mes "Posso perguntar da onde voc� �?";
	next;
	mes "[Diana]";
	mes "Ah, eu nasci e fui criada em Morroc.";
	next;
	mes "[Assistente da Loja]";
	mes "Ah sim, eu ouvi muitas coisas boas sobre essa cidade.";
	mes "Voc� certamente provou que as pessoas de Morroc t�m um bom gosto.";
	mes "Agora, esse Stiletto custa 39 800 zenys...";
	next;
	emotion(e_omg);
	mes "[Diana]";
	mes "Hein...?!";
	mes "Isso � rid�culo!";
	mes "Deixa pra l�, me mostre aquele Gladius que est� no canto.";
	next;
	mes "[Assistente da Loja]";
	mes "O Gladius?";
	mes "Ah, ele custa 39.800 zenys, madame.";
	next;
	mes "[Diana]";
	mes "Ah, esse � um pre�o muito bom.";
	mes "Vou levar!";
	next;
	mes "[Assistente da Loja]";
	mes "�, essa r�plica realmente parece com um Gladius de verdade n�o �?";
	mes "Apesar de n�o ser uma arma de verdade, � bem capaz de abrir qualquer envelope!";
	next;
	mes "[Diana]";
	mes ".........";
	mes "Pegue de volta.";
	mes "Essa loja � p�ssima.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,36,274,4	script	Escrit�rio de eventos#lhz	4_F_ZONDAGIRL,{
	mes "[Saera]";
	mes "Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " ao escrit�rio tempor�rio do Grupo de Eventos Incr�veis.";
	mes "Posso ajud�-l" + (Sex == SEX_MALE ? "o" : "a") + "?";
	next;
	if (select("Escrit�rio tempor�rio?", "N�o, obrigado.") == 1) {
		mes "[Saera]";
		mes "Nosso pr�dio original est� em constru��o, portanto estamos baseando nossas opera��es aqui at� ele ficar pronto.";
		close;
	}
	mes "[Saera]";
	mes "Obrigado.";
	mes "Tenha um dia muito agrad�vel.";
	close;
}

// ------------------------------------------------------------------
lhz_in02,40,280,6	script	Planejador de Evento#lhz	4_M_ZONDAOYAJI,{
	mes "[Jellarin]";
	mes "N�o gosto disso.";
	mes "Mas n�o gosto da outra ideia tamb�m.";
	mes "Que evento novo eu devia fazer?";
	next;
	mes "[Jellarin]";
	mes "Preciso de algo grande, algo que realmente abalaria o mundo, algo �pico, mas o que?";
	mes "Ei, voc� tem alguma ideia?";
	close;
}

// ------------------------------------------------------------------
lhz_in03,26,167,5	script	Shayna#lhz	4_F_EINWOMAN,{
	mes "[Shayna]";
	mes "^333333*Suspiro...*^000000";
	mes "Ah, minha pobre e querida menina...";
	close;
}

// ------------------------------------------------------------------
lhz_in03,193,25,2	script	Gar�om#lhz2	1_M_PUBMASTER,{
	mes "[Tony]";
	mes "Ei eu sei que esse lugar � ruim, praticamente um gueto, mas nos orgulhamos de ter o melhor rum de toda Rune-Midgard.";
	next;
	mes "[Tony]";
	mes "Apenas um gole dessa linda bebida e voc� vai ao topo do mundo!";
	mes "Mas � melhor ainda para ajudar a relaxar e a esquecer os problemas.";
	next;
	mes "[Tony]";
	mes "N�o sou muito um poeta, mas sei de uma coisa.";
	mes "Nosso rum tem o doce sabor da solid�o.";
	mes "Voc� realmente devia experimentar quando puder.";
	close;
}

// ------------------------------------------------------------------
lhz_in03,192,93,3	script	Cidad�#lhz	4_F_LGTGIRL,{
	mes "[Lanko]";
	mes "Ah, estou sozinha aqui, trabalhando como gar�onete para ajudar o meu pai.";
	mes "Esse trabalho � cansativo, mas � bom ver as pessoas relaxadas e se divertindo.";
	next;
	mes "[Lanko]";
	mes "Quando tiver um tempo de folga, vou explorar Lighthalzen e ver tudo que h� para ver.";
	mes "Mas at� agora n�o parece que temos poucos b�bados para eu poder sair...";
	close;
}

// ------------------------------------------------------------------
lhz_in03,189,87,5	script	Homem B�bado#lhz	4_M_LGTMAN,{
	mes "[Enku]";
	mes "*Suspiro*";
	mes "Acabei de levar um fora.";
	mes "�, achei que �amos nos casar, mas parece que eu estava errado!";
	mes "Sheryline, eu amava voc�!";
	next;
	mes "[Enku]";
	mes "Eu normalmente n�o bebo, especialmente bebidas como gim e rum.";
	mes "Mas hoje essas coisas t�m o sabor da minha tristeza, e s�o todo o conforto que eu preciso, entendeu?!";
	close;
}

// ------------------------------------------------------------------
lhz_in03,180,83,6	script	Cidad�o#lhz2	4_M_04,{
	mes "[Mitchell]";
	mes "Sabe, somos todos diferentes, mas acho que n�s humanos somos parecidos o suficiente para podermos nos comunicar de algum jeito.";
	next;
	mes "[Mitchell]";
	mes "Claro, uma pessoa rica tem problemas diferentes dos de uma pessoa pobre, mas o que quero dizer �, os dois t�m problemas!";
	mes "Dor, prazer, tristeza e felicidade nos unem.";
	next;
	mes "[Mitchell]";
	mes "Ent�o n�o seja chato para escolher seus amigos.";
	mes "N�s todos precisamos de algu�m, n�o �?";
	close;
}

// ------------------------------------------------------------------
lhz_in03,184,38,3	script	Loudmouth#lhz	1_M_JOBTESTER,{
	mes "[Loudmouth]";
	mes "Sabe quem eu sou?!";
	mes "Olhe para a minha perna.";
	mes "Eu estive na guerra de Comodo!";
	mes "Perdi a minha perna para garantir a sua liberdade!";
	next;
	mes "[Loudmouth]";
	mes "E-ei! Por que est� me olhando assim?!";
	mes "Voc� n�o acredita?!";
	close;
}

// ------------------------------------------------------------------
lhz_in03,130,41,5	script	Jay#lhz	4_M_KID1,{
	mes "[Jay]";
	mes "Minha m�e e meu pai sempre chegam tarde.";
	mes "Ent�o eu janto sozinho.";
	mes "Totalmente.";
	mes "Todo dia.";
	next;
	mes "[Jay]";
	mes "A comida n�o fica t�o boa quando voc� n�o tem companhia.";
	mes "Talvez eu seja um solit�rio.";
	close;
}

// ------------------------------------------------------------------
lhz_in03,124,117,1	script	Faxineira Brenda#lhz	1_F_MERCHANT_02,{
	mes "[Brenda]";
	mes "� melhor eu tomar muito cuidado com esse vaso.";
	mes "Vale dez milh�es de zenys e se eu fosse-- N�o. N�o!";
	mes "Nem vou pensar nisso!";
	close;
}

// ------------------------------------------------------------------
lhz_in03,25,105,5	script	Gopal#lhz	4_M_LGTMAN,{
	mes "[Gopal]";
	mes "O vov� pode ficar feliz sentado e aproveitando a vida, mas eu n�o!";
	mes "Sou jovem demais para me deitar e ver os dias passarem!";
	next;
	mes "[Gopal]";
	mes "Quero fazer algo de mim mesmo.";
	mes "Talvez algum dia eu monte uma companhia como a Corpora��o Rekenber!";
	close;
}
