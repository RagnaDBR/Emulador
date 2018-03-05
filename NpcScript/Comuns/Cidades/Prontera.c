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
| - Nota: Npcs comuns na cidade prontera                            |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Ruas]
//-------------------------------------------------------------------

prontera,160,330,4	script	Guarda#pront::prtguard	8W_SOLDIER,{
	mes("[Guarda de Prontera]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") +" a prontera.");
	close;
}
prontera,223,99,1	duplicate(prtguard)	Guarda#2pront	8W_SOLDIER
prontera,229,104,5	duplicate(prtguard)	Guarda#3pront	8W_SOLDIER
prontera,47,339,5	duplicate(prtguard)	Guarda#4pront	8W_SOLDIER

//-------------------------------------------------------------------
prontera,101,288,3	script	Shuger#pront	4W_M_02,{
	mes("[Shuger]\n Fora dos port�es da cidade, h� um bixinho rosa chamado ^000077Poring^000000.");
	next;
	mes("[Shuger]\n Apesar de ser bonito na apar�ncia e n�o atacar as pessoas, Porings s�o conhecidos por devorar itens caidos no ch�o para dentro deles.");
	next;
	mes("[Shuger]\n Portanto, se h� algo no ch�o que voc� queira pegar, tenha cuidado para que n�o seja consumido por um Poring.\n Apesar de que...\n Porings s�o muito fracos...");
	next;
	mes("[Shuger]\n O de cor verde se chama ^000077Poporing^000000 ele � mais resistente que o Poring.\n Novatos geralmente cometem o erro de atac�-lo sem saberem que ele � muito forte...\n Por isso tenha cuidado!");
	close;
}

//-------------------------------------------------------------------
prontera,106,116,6	script	Merideth#pront	4_F_02,{
	mes("[Merideth]\n O tempo estava bom no meu dia de folga ent�o minha fam�lia e eu fomos a um piquenique.\n N�s escolhemos ir para uma �rea um pouco isolada onde n�s vimos algo realmente interessante...");
	next;
	mes("[Merideth]\n Foi um grande grupo de zang�es gigantes!\n O mais estranho de tudo era que eles eram todos controlados por uma tao de Abelha Rainha, seguindo cada comando seu.");
	next;
	mes("[Merideth]\n Eles podem ser apenas insetos, mas acho que eles estavam certos.\n Homens realmente deveria receber comandos a partir de n�s mulheres...\n N�s fazemos as coisas direito!");
	close;
}

//-------------------------------------------------------------------
prontera,149,202,2	script	YuNa#pront	8_F_GIRL,{
	mes("[YuNa]\n Odin � o mais poderoso dos Deuses, o todo-poderoso, o lorde dos Aesir.\n Ele � um Deus guerreiro e muito S�bio.\n Para conseguir sua sabedoria sem-limites, Odin bebeu da �gua do po�o de Imir, e para isso teve de perder um de seus olhos.\n Isso mostra sua incr�vel coragem e determina��o!\n Aquela est�tua no centro da fonte � Odin.");
	next;
	mes("[YuNA]\n Olhe!\n Ele n�o est� usando seu capacete de �guia, n�o tem barba, e nem est� montado em Sleipnir, seu poderoso cavalo de oito patas!\n Isso � um ultraje!\n Eu n�o sei como o Rei aprovou essa est�tua como o principal monumento de nossa cidade!");
	close;
}


//-------------------------------------------------------------------
// - [Casas]
//-------------------------------------------------------------------
prt_in,175,50,0	script	Bibliotec�ria#pront	1_F_LIBRARYGIRL,{
	mes("[Bibliotec�ria Ellen]\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") +"!\n Os dados nesta biblioteca est�o separados pelos nomes dos monstros.\n Voc� pode ler livros e escritas de seu interesse aqui.\n Aqui tamb�m existem livros sobre as classes dos Ferreiros e Mercadores.");
	next;
	mes("[Bibliotec�ria Ellen]\n Ah!\n A pr�xima biblioteca tamb�m � muito interessante.\n Visite-a se puder.");
	close;
}

//-------------------------------------------------------------------
prt_in,180,20,2	script	Gar�om#pront	1_M_PUBMASTER,{
	mes("[Gar�om]\n Ol�, seja bem-vind" + (Sex == SEX_MALE ? "o" : "a") +"!\n Hehehe!\n A freguesia anda aumentando por aqui!\n Este j� foi um neg�cio bem dif�cil, sabe?\n Pelo menos os lucros sempre foram bons...\n Hehe, mas agora est�o melhores...\n A dificuldade?\n Ora, conseguir os ingredientes para a cozinha!");
	next;
	mes("[Gar�om]\n Como voc� deve saber, o aumento das hordas de monstros agressivos em torno das cidade do reino criou uma escassez na obeten��o de certas mat�rias-primas e produtos...\n Por isso, tentamos adaptar o menu do restaurante quando h� falta de alimentos.\n Fazemos especiais ou inventamos pratos mais simples pra n�o perder a clientela.");
	next;
	mes("[Gar�om]\n Ent�o, eu tenho contratado ca�adores para me trazerem ingredientes frescos e especiais.\n Mas a demanda excedeu a oferta nestes �ltimos dias.");
	next;
	mes("[Gar�om]\n Eu n�o posso manter o meu neg�cio ocupado sem meu menu especial 'Carapa�as de formiga ao molho' e 'Perna de Gafanhoto frita'...*Suspiro*");
	next;
	.@drink = 1;
	while(.@drink) {
		switch(select("'Carapa�a de formiga ao molho'?", "'Perna de Gafanhoto frita'?", "Eu... acho que vou indo.")) {
			case 1:
			mes("[Gar�om]\n � uma deleciosa iguaria e um cl�ssico local!\n � feito � partir das cascas das formigas do deserto sograt, ao sul daqui.\n Essas formiga s�o bem grandes e ferozes, e o melhor lugar para ca��-las � no Formigueiro Infernal...\n O problema � que l� �s vezes h� formigas demais... Por isso, a maioria das pessoas tem medo de enfrent�-las...");
			next;
			mes("[Gar�om]\n Mesmo assim, a maioria das pessoas tamb�m gostam de um belo prato de formiga ao molho...\n E adoram reclamar se acaba meu estoque.");
			next;
			break;
			case 2:
			mes("[Gar�om]\n Sim, as pernas de gafanhoto ficam especialmente boas fritas com azeite de olive...\n Uma del�cia.\n S� � pena que hoje os gafanhotos estejam t�o agressivos...\n Mas ainda assim, n�o s�o t�o dif�ceis de ca�ar.\n O problema � que eu sou meio covarde na hora de matar monstros, sen�o ia l� e ensinava uma li��o a eles!");
			next;
			mes("[Gar�om]\n �, mas do jeito que v�o as coisas logo, logo, vou ter que voltar a feazer pratos comuns de novo...");
			next;
			break;
			case 3:
			mes("[Gar�om]\n Bem, tenha cuidado l� fora, e coma uma pouco da pr�xima vez!");
			close2;
			.@drink = 0;
			break;
		}
	}
	end;
}
