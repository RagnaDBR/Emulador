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
| - Desenvolvido por: Spell Master 14/03/2017                       |
| - Nota: Muni��es e carregadores para Justiceiros                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Muni��es ] -
// ------------------------------------------------------------------
que_ng,187,156,3	script	Negociador de Muni��es#ammo	4_M_04,{
	if (BaseJob != Job_Gunslinger) {
		mes "[Tony]";
		mes "Meu nome � Tony, estou a procura de justiceiros, para propor a eles uma negocia��o.";
		mes "Se conhecer algum, por favor fale com ele sobre mim.";
		close;
	}
	else {
		mes "[Tony]";
		mes "Meu nome � Tony e negocio diversas Muni��es, em troca de alguns materiais.";
		mes "Que tal fazer-mos neg�cio?";
		mes "Me diga no que est� intere�ad"+(Sex?"o":"a")+"?";
		next;
		switch(select("Esfera Venenosa","Esfera de Chamas","Esfera de Rel�mpagos","Esfera Cegante","Esfera Congelante","Cancelar")) {
			case 1: .@requirement = 937;  .@requireunit = 10; .@selectitem = 13205; break;
			case 2: .@requirement = 7097; .@requireunit = 2;  .@selectitem = 13203; break;
			case 3: .@requirement = 7053; .@requireunit = 3;  .@selectitem = 13204; break;
			case 4: .@requirement = 1024; .@requireunit = 5;  .@selectitem = 13206; break;
			case 5: .@requirement = 7054; .@requireunit = 2;  .@selectitem = 13207; break;
			case 6:
			mes "[Tony]";
			mes "Tudo bem estarei aqui caso precise de Esferas de Muni��es.";
			close;
		}
		mes "[Tony]";
		mes "Certo... Ent�o lhe darei 30 unidades de "+getitemname(.@selectitem)+".";
		mes "Em troca voc� me dar 1 Emveretarcon, 1 Fracon e "+.@requireunit+" "+getitemname(.@requirement)+", estamos combinados?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Tony]";
			mes "Ent�o me diga quantos pacotes deseja fazer a troca.";
			mes "Lembre-se que lhe darei um 30 unidades em cada pacote.";
			mes "E s� posso negociar at� 100 pacotes por vez.";
			next;
			mes "[Tony]";
			mes "Caso queira cancelar a nogocia��o digite '0'.";
			next;
			input .@amount;
			if (.@amount == 0) {
				mes "[Tony]";
				mes "Voc� digitou zero a negocia��o foi cancelada.";
				mes "Mas, tudo bem estarei aqui caso precise de Esferas de Muni��es.";
				close;
			}
			else if (.@amount > 100) {
				mes "[Tony]";
				mes "Eu disse a voc� que s� posso negociar at� 100 pacotes por vez.";
				close;
			}
			else {
				.@checkweight = getiteminfo(.@selectitem, 7) * 30;
				if (countitem(Phracon) >= .@amount && countitem(Emveretarcon) >= .@amount && countitem(.@requirement) >= (.@amount * .@requireunit)) {
					if ((MaxWeight - Weight) < (.@checkweight * .@amount)) {
						mes "[Tony]";
						mes "Me parece que voc� n�o vai poder carregar tudo.";
						mes "Por favor, verifique a quantidade em peso de itens que carrega antes.";
						close;
					}
					else {
						delitem Phracon,.@amount;
						delitem Emveretarcon,.@amount;
						delitem .@requirement,.@requireunit * .@amount;
						getitem .@selectitem,.@amount * 30;
						mes "[Tony]";
						mes "Est�o a� sua esferas de muni��es.";
						mes "Volte caso precise de mais.";
						close;
					}
				}
				else {
					mes "[Tony]";
					mes "� voc� n�o possui a quantidade de itens para fazer a troca nessa quantidade.";
					mes "Verifique direito os itens que tenha e tente novamente.";
					close;
				}
			}
		}
		mes "[Tony]";
		mes "Tudo bem estarei aqui caso precise de Esferas de Muni��es.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Carregadores ] -
// ------------------------------------------------------------------
que_ng,187,149,3	script	Caixas de Muni��o::mdk	4_M_01,{
	mes "[Kenny]";
	mes "Bem vind"+(Sex?"o":"a")+" a loja de carregadores de muni��es.";
	next;
	mes "[Kenny]";
	mes "Eu posso colocar suas muni��es em carregadores, para que possa levar muito mais proj�teis consigo.";
	mes "Ent�o me diz no que est� intere�ad"+(Sex?"o":"a")+"?";
	next;
	switch(select("Pacote de Esferas de Rel�mpago","Pacote de Esferas Cegantes","Pacote de Esferas Venenosas","Pacote de Esferas Congelantes","Pacote de Esferas de Chamas","Carregador","Carregador Sanguin�rio","Carregador de Prata","Cancelar")) {
		case 1: .@bulletItem = 13204; .@bulletCase = 12144; break;
		case 2: .@bulletItem = 13206; .@bulletCase = 12145; break;
		case 3: .@bulletItem = 13205; .@bulletCase = 12146; break;
		case 4: .@bulletItem = 13207; .@bulletCase = 12147; break;
		case 5: .@bulletItem = 13203; .@bulletCase = 12148; break;
		case 6: .@bulletItem = 13200; .@bulletCase = 12149; break;
		case 7: .@bulletItem = 13202; .@bulletCase = 12150; break;
		case 8: .@bulletItem = 13201; .@bulletCase = 12151; break;
		case 9:
		mes "[Kenny]";
		mes "Sem problemas, n�o deixe de me procurar quando quiser guardar, seus projet�is em carregadores.";
		close;
	}
	mes "[Kenny]";
	if (countitem(.@bulletItem) >= 500) {
		mes "Muito bem, eu posso colocar 500 "+getitemname(.@bulletItem)+" em um "+getitemname(.@bulletCase)+".";
		mes "Para isso irei precisar dos projet�is e mais 500 zenys por cada carregador, essa � minha taxa de servi�o.";
		next;
		switch(select("Me der um Carregador","Me der quantos puder")) {
			case 1:
			.@bullets = countitem(.@bulletItem);
			.@ammoutCase = .@bullets / 500;
			.@bulletUse = .@ammoutCase * 500;
			.@zenyRequire = .@ammoutCase * 500;
			mes "[Kenny]";
			mes "Deixe me ver...";
			mes "Voc� tem, "+.@bullets+" "+getitemname(.@bulletItem)+" certo?";
			mes "500 para cada ent�o s�o um total de "+.@ammoutCase+" carregadore(s)...";
			mes "Com isso minha comi��o, vai lhe custar "+.@zenyRequire+" Zenys.";
			mes ".......";
			mes "Deseja fazer a troca agora?";
			next;
			if (select("Sim","Melhor n�o") == 1) {
				mes "[Kenny]";
				if (.@zenyRequire > Zeny) {
					mes "Me parece que est� desprovid"+(Sex?"o":"a")+" de Zenys.";
					mes "Sinto muito mas n�o posso trabalhar de gra�a.";
					close;
				}
				else {
					Zeny -= .@zenyRequire;
					delitem .@bulletItem, .@bulletUse;
					getitem .@bulletCase, .@ammoutCase;
					mes "Que tal agora?!";
					mes "Se sente mais aliviado carregando menos peso?";
					close;
				}
			}
			mes "[Kenny]";
			mes "Sem problemas, n�o deixe de me procurar quando quiser guardar, seus projet�is em carregadores.";
			close;
			case 2:
			mes "[Kenny]";
			if (Zeny < 500) {
				mes "Me parece que est� desprovid"+(Sex?"o":"a")+" de Zenys.";
				mes "Sinto muito mas n�o posso trabalhar de gra�a.";
				close;
			}
			else {
				mes "Um "+getitemname(.@bulletCase)+" saindo rapidinho...";
				Zeny -= 500;
				delitem .@bulletItem, 500;
				getitem .@bulletCase, 1;
				next;
				mes "[Kenny]";
				mes "Fique a vontade em me procurar, sempre quando precisar guardar seus projet�is em carregadores.";
				close;
			}
		}
	}
	else {
		mes "Me desculpe mas voc� deve ter pelo menos 500 "+getitemname(.@bulletItem)+" em seu invent�rio.";
		close;
	}
}