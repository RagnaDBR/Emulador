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
| - Nota: Npcs comuns na cidade Payon                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
payon,246,154,0	script	Senhorita#pay	4_F_01,{
	mes "[Senhorita]";
	mes "H� muito tempo atr�s Payon, quando ainda estava em desenvolvimento, muitos dos alde�es viviam na pobreza.";
	next;
	mes "[Senhorita]";
	mes "Muitas fam�lias tiveram que lutar para sobreviver, e muitas vezes n�o conseguiam.";
	mes "Elas tiveram que lutar para sobreviver, e muitas vezes n�o conseguiam pagar corretamente o enterro dos seus mortos.";
	mes "Algumas pessoas jogavam seus mortos na caverna perto da aldeia.";
	next;
	mes "[Senhorita]";
	mes "Ent�o, naquela caverna, � dito que existem muitos zumbis andando.";
	mes "Eles s�o mortos que n�o podem descansar em paz e s�o incapazes de passar para o outro mundo.";
	next;
	mes "[Senhorita]";
	mes "Os Zumbis,ap�s detectarem o calor de um ser humano, come�am a atac�-los.";
	mes "Mas isso n�o significa que esses mortos-vivos guardam rancor contra os vivos";
	next;
	mes "[Senhorita]";
	mes "Seus corpos podres n�o puderam sair da caverna fria, escura e �mida.";
	mes "Por isso � instintivo para eles atacarem o calor que vai acelerar a decomposi��o de seus corpos.";
	next;
	mes "[Senhorita]";
	mes "Os zumbis na caverna de Payon podem ser assustadores,mas as suas hist�rias tamb�m s�o tr�gicas.";
	close;
}

// ------------------------------------------------------------------
payon,134,211,4	script	Homem Jovem#pay	1_M_ORIENT01,{
	mes "[Homem Jovem]";
	mes "Pelo seu rosto eu posso ver que voc� � um estranho aqui.";
	mes "Bem-vindo a Payon.";
	next;
	mes "[Homem Jovem]";
	mes "Voc� deve ser um lutador bem experiente.";
	mes "Caso contr�rio voc� nunca seria capaz de chegar aqui depois de passar por areas �ngremes.";
	mes "�reas montanhosas e criaturas perigosas ao redor desta cidade.";
	next;
	mes "[Homem Jovem]";
	mes "Eu n�o sou nenhum perito em combate.";
	mes "Mas algu�m me disse uma vez que a for�a bruta sozinha n�o ser� capaz de vencer algumas batalhas";
	next;
	mes "[Homem Jovem]";
	mes "�s vezes, voc� poder� encontrar criaturas protegidas por uma casca dura que n�o � danificada por ataques f�sicos.";
	mes "S� o poder ps�quico, como os dos M�gicos, podem facilmente derrotar essas criaturas.";
	next;
	mes "[Homem Jovem]";
	mes "Naturalmente, nem todos podem estudar magia.";
	mes "O ponto � que voc� deve manter diferentes tipos de amigos e camaradas perto de voc�.";
	mes "Porque voc� n�o pode lidar com cada situa��o por si mesmo.";
	close;
}

// ------------------------------------------------------------------
payon,173,82,0	script	Homem Jovem#pay2	4_M_ORIENT01,{
	mes "[Homem Jovem]";
	mes "Lembro-me da hist�ria do meu saudoso av� me contou.";
	next;
	mes "[Homem Jovem]";
	mes "� sobre este amuleto, que possui um poder maligno.";
	mes "Com ele, voc� pode despertar os mortos da sepultura.";
	next;
	mes "[Homem Jovem]";
	mes "Bem, eu n�o tenho certeza se � verdade ou n�o.";
	mes "Mas, eu pergunto, o que aconteceria se eu o usasse para chamar meu av� de outro reino ....";
	next;
	mes "[?]";
	mes "^3299CCnunca pense uma coisa dessas meu filho.^000000";
	next;
	mes "[Homem Jovem]";
	mes "EEEEEEK-!";
	mes "O que foi aquilo?";
	mes "A-av�...?";
	next;
	mes "...";
	next;
	mes "...";
	mes "......";
	mes "[Homem Jovem]";
	mes "...";
	mes "D-Deus...?";
	close;
}

// ------------------------------------------------------------------
payon,158,246,3	script	Guarda#pay	4_M_PAY_SOLDIER,3,3,{
	mes "[Guarda]";
	mes "Este � o Pal�cio Central de Payon.";
	mes "Este local � aberto ao p�blico, mas de acordo com nossas leis.";
	mes "Voc� deve se comportar de forma ordenada, uma vez dentro.";
	next;
	mes "[Guarda]";
	mes "No interesse de proteger a paz, vamos desarmar o equipamento uma vez que voc� entrar.";
	mes "Sua coopera��o � muito apreciada.";
	close;
}

// ------------------------------------------------------------------
payon,249,156,1	script	Mulher#pay	1_F_01,{
	mes "[Mulher]";
	mes "Voc� deve ter tido uma certa dificuldade em conseguir andar atrav�s da floresta de payon como foi a viagem?";
	next;
	mes "[Mulher]";
	mes "Temos recebido menos turistas por causa do aumento de monstros l� fora, por isso est� mais quieto hoje.";
	next;
	mes "[Mulher]";
	mes "Para ser honesto, as coisas est�o ficando dif�ceis, por causa de todos esses monstros.";
	mes "^666666*Sigh...*^000000";
	next;
	mes "[Mulher]";
	if (Sex == SEX_MALE) {
		mes "Eu notei que seus bra�os s�o bastante grossos.";
		mes "Voc� parece muito forte, cara.";
		mes "Quantos monstros voc� matou?";
	}
	else {
		mes "Eu n�o percebi antes, mas voc� olhar bem forte embaixo de todo esse charme feminino.";
	}
	next;
	mes "[Mulher]";
	mes "Ei, eu sei de um lugar bom para voc� ca�ar.";
	mes "Acontece que h� uma caverna no meio de Payon.";
	next;
	mes "[Mulher]";
	mes "Se voc� estiver interessado, v� para o Norte, passe pela floresta, e siga em dire��o ao noroeste.";
	mes "Voc� saber� que voc� chegou quando voc� estiver num lugar com o o mau cheiro de monstros.";
	next;
	switch(select("Parece perigoso!","Melhor eu me preparar ...!","� um belo vestido o seu.")) {
		case 1:
		mes "[Mulher]";
		mes "Oh venha, n�o seja coverde.";
		mes "� apenas uma simples caverna cheia de monstros normais.";
		mes "� bastante seguro.";
		mes "Temos ainda uma vila de arqueiros perto da caverna para evitar incidentes infelizes.";
		mes "Hohoohoho.";
		break;
		case 2:
		mes "[Mulher]";
		mes "Ah, n�o se preocupe com qualquer prepara��o.";
		mes "Existe uma loja de ferramenta perto da caverna.";
		mes "Assim voc� pode comprar qualquer coisa que voc� precise com o senhor husban, .";
		break;
		case 3:
		mes "[Mulher]";
		mes "Oh hohohoho!";
		mes "Voc� soube da mais nova not�cia?";
		mes "Eu ouvi que saiu umas novas tend�ncias de moda em Prontera esses dias.";
		next;
		mes "[Mulher]";
		mes "A maioria das mulheres nesta cidade ainda n�o sabem nada sobre moda! ";
		mes "Meu marido comprou esse presente pra mim.";
		mes "Ele faz muito dinheiro, voc� sabia? Hohohoho .";
		break;
	}
	close;
}

// ------------------------------------------------------------------
payon,246,158,5	script	Mulher#pay2	1_F_01,0,0,{
	mes "[M�e de Jim]";
	mes "Oh Garoto.";
	mes "L� vai ela de novo.";
	mes "Est� vendo aquela mulher?";
	mes "� a fofoqueira da cidade.";
	next;
	mes "[M�e de Jim]";
	mes "Por favor, n�o julgue o resto das pessoas que vivem em Payon por seu comportamento.";
	mes "Ela � a �nica pessoa que grita.";
	mes "Eu acho que ela est� muito animada pelo que a cartomante lhe disse.";
	next;
	mes "[M�e de Jim]";
	if (Sex == SEX_MALE) {
		mes "Ooh, garoto...";
		mes "voc� tem ombros largos voc� gostaria de sair comigo?";
		mes "Posso te convidar para um jantar.";
	}
	else {
		mes "Meu, voc� � uma bela garota!";
		mes "Tenho certeza que voc� anda ocupada batendo nos meninos com um peda�o de pau.";
	}
	next;
	if (select("Cartomante..?","Bem, eu vejo voc� mais tarde.") == 1) {
		mes "[M�e de Jim]";
		mes "Oh sim...";
		mes "Existe uma cartomante extraordin�ria no Pal�cio Central de Payon.";
		mes "Quanto mais voc� paga a ela, mais sorte voc� vai ganhar!";
		next;
		mes "[M�e de Jim]";
		mes "Ela me disse que";
		mes "Gostaria de conhecer um cara legal este m�s.";
		mes "Hohohoho. ";
		close;
	}
	mes "[M�e de Jim]";
	mes "Mmmm...?";
	mes "Voc� n�o tem um tempo, para ficar e bater um papo comigo?";
	close;
}

// ------------------------------------------------------------------
payon,210,110,1	script	B�bado#pay	2_M_PHARMACIST,{
	if (Class != Job_Archer) {
		mes "[B�bado]";
		mes "Ei...";
		mes "E-Ei...!";
		next;
		mes "[B�bado]";
		mes "Eu me pergunto porque esses estupidos arqueiros vem me incomodar com o mesmo objetivo sempre!";
		mes "Voc� � t�o fraco!";
		mes "Eu disse FRAAAAACO!";
		next;
		mes "[B�bado]";
		mes "Bwahahahaha!";
		mes "Ser� que voc� poderia comprar para mim uma bebida?";
	}
	else {
		mes "[B�bado]";
		mes "Opa, um arqueiro! Seja homem ou um garoto";
		mes "Voc�s s�o os melhores!";
		next;
		mes "[B�bado]";
		mes "Bwahahahaha!";
		mes "Ser� que voc� poderia comprar para mim uma bebida?";
	}
	next;
	switch(select("Certo, mas s� uma bebida.","N�o, obrigado amigo.","Oh meu Deus, nem pensar!!")) {
		case 1:
		if (Zeny > 100) { 
			Zeny -= 100;
			mes "[B�bado]";
			mes "Obrigado...";
			mes "...Irm�o!";
			next;
			mes "[B�bado]";
			mes "A maioria das pessoas nunca querem comprar bebidas para mim!";
			mes "Talvez porque eu era acostumado abrincar demais com as senhoras da minha �poca!";
			next;
			mes "[B�bado]";
			mes "Embora, as mulheres que eu costumava brincar est�o velhinhas agora!";
			mes "Hahahahaha!";
			mes "Um dia desses elas ainda se enfeitavam e colocavam maquiagem, voc� acredita nisso?";
			next;
		}
		mes "[B�bado]";
		mes "Eu sou assim mesmo, um pouco brincalh�o...";
		mes "Vamos l�...";
		mes "Alguns rostos eram minhas paix�es!";
		mes "Calma, hahaha eu fiz uma piada.";
		mes "Bwahahahahahah!";
		close;
		case 2:
		mes "[B�bado]";
		mes "Bah!";
		mes "As crian�as de hoje n�o respeitam os mais velhos.";
		mes "Por isso n�o te cobrarei respeito a mim";
		close;
		case 3:
		mes "[B�bado]";
		mes "Tudo bem...";
		mes "Por mim tudo bem, n�o preciso do seu respeito por mim!";
		close;
	}
}

// ------------------------------------------------------------------
payon,132,235,3	script	Estudante#pay	4W_M_02,{
	mes "[Estudante]";
	mes "� um prazer te conhecer!";
	mes "Eu sou chamado Vuicokk.";
	mes "Eu sou um estudioso da organiza��o de Pesquisa de monstros do reino de Rune Midgard.";
	mes "Voc� tem alguma d�vida sobre monstros?";
	next;
	switch(select("Quer saber alguma not�cia?","Sobre monstros?","Sobre Pesquisas de monstros")) {
		case 1:
		mes "[Estudante]";
		mes "Payon fica no fundo da floresta, onde ela pode ser facilmente atacada por monstros.";
		mes "Eles tamb�m v�m da caverna perigosa localizada perto da cidade.";
		next;
		mes "[Estudante]";
		mes "H� algum tempo os monstros da caverna de payon tem atra�do a aten��o da organiza��o de pesquisa de monstros.";
		mes "Meu trabalho principal � estudar as suas caracteristicas.";
		close;
		case 2:
		mes "[Estudante]";
		mes "O mais interessante sobre esses monstros � que eles um dia foram cidad�os de payon.";
		next;
		mes "[Estudante]";
		mes "No entanto, essas almas s�o incapazes de descansar em paz, por isso ainda vagam como mortos-vivos neste mundo.";
		next;
		mes "[Estudante]";
		mes "Estes monstros n�o podem ser classificados como monstros comuns.";
		mes "Porque eles foram gerados a partir de seres vivos.";
		mes "Ent�o o nosso governante s�bio e benevolente, o rei Tristam III, tomou um grande interesse pelos mortos vivos de Payon.";
		next;
		mes "[Estudante]";
		mes "Afinal, alguns desses mortos- vivos pertenceram ao Reino de Rune-Midgard";
		next;
		mes "[Estudante]";
		mes "E eram s�ditos do rei.";
		mes "Ent�o o rei Tristram III sente-se no dever de liberar as suas almas.";
		next;
		mes "[Estudante]";
		mes "Vossa Magestade tem vindo nos apoiar nossas buscas para descobrir como eliminar todos os zumbis no mundo.";
		mes "Vamos tentar alcan�ar este objetivo, logo que poss�vel.";
		next;
		mes "[Estudante]";
		mes "Para a seguran�a do nosso povo, para o bem das fam�lias enlutadas.";
		mes "Em concord�ncia com a ordem do rei Tristam III, teremos que ter sucesso!";
		close;
		case 3:
		mes "[Estudante]";
		mes "Como voc� bem sabe os monstros foram infinitamente desovados neste mundo, e a amea�a dos seus ataques est�o crescendo a cada dia.";
		next;
		mes "[Estudante]";
		mes "Em resposta disso a organiza��o de pesquisa de monstros foi formada.";
		next;
		mes "[Estudante]";
		mes "Algumas pessoas talentosas de todo o mundo se uniram em um unico prop�sito.";
		mes "Descobrir a origem dos monstros, e tamb�m uma maneira de elimin�-los de uma vez por todas.";
		next;
		mes "[Estudante]";
		mes "Claro que n�o � t�o f�cil como voc� pode imaginar, muitos j� sacrificaram suas vidas em busca desse conhecimento.";
		next;
		mes "[Estudante]";
		mes "Em nossas miss�es, os n�meros de vitimas atacadas por monstros foram incont�veis.";
		mes "Ainda sim, nada vai nos parar.Se o nosso sofrimento poder� salvar a humanidade, que assim seja!";
		next;
		mes "[Estudante]";
		mes "^666666*Ah*^000000";
		mes "Mil desculpas, eu fico muito animado, �s vezes.Mas se voc� encontrar outros estudiosos, como eu.";
		mes "Por favor trate-os bem. Nosso trabalho � memor�vel, por�m muito dificil.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
payon_in01,180,7,2	script	Gar�onete#pay	4_F_01,{
	mes "[Gar�onete]";
	mes "Este lugar sempre est� movimentado com pessoas.";
	mes "Novi�os sempre aparecem por aqui para virar arqueiros, ou para comprar flecha.";
	mes "Eles se divertem enquanto eu fico aqui nessa pequena loja.";
	next;
	mes "[Gar�onete]";
	mes "Eu j� estou ficando cansada e doente de tanto fazer sopa de macarr�o.";
	mes "Tenho que tomar diversos banhos ao dia, para me livrar desse cheiro.";
	mes "E acredite n�o � nada f�cil livrar-se dele.";
	next;
	mes "[Gar�onete]";
	mes "Eu me sinto t�o...";
	mes "Entediada e sozinha...";
	next;
	mes "[Gar�onete]";
	if (Sex == SEX_MALE) {
		mes "Onde posso encontrar a pessoa certa, algu�m am�vel e meiga, para me levar daqui?";
		mes "Hum, Hey! voc� est� me ouvindo?";
	}
	else {
		mes "Onde eu posso encontrar a pessoa certa.";
		mes "Mas que seja um pouco dificil de conquistar, para poder me levar daqui?";
		mes "Hum, heeeeei voc� est� me ouvindo?";
	}
	next;
	mes "[Gar�onete]";
	mes "A cartomante velha, me disse que eu teria muita sorte em um futuro pr�ximo.";
	mes "Mas o que h� de errado comigo?";
	mes "Eu estou vivendo dia ap�s dia e nada...";
	mes "Talvez eu seja um burro e azarado mesmo...";
	next;
	mes "[Gar�onete]";
	mes "Sinto muito.";
	mes "Eu falo demais.";
	mes "Agora vou apenas ouvir...";
	mes "Lamento por voc� ter ouvido tantas asneiras.";
	next;
	mes "[Gar�onete]";
	mes "Ent�o...";
	mes "Como posso te ajudar?";
	next;
	switch(select("Voc� ja ouviu falar de zumbis?","Banc�rio...?","Eu preciso de uma bebida.")) {
		case 1:
		mes "[Gar�onete]";
		mes "� claro que quero ouvir sobre zumbis!";
		mes "Esta � Payon agora.";
		mes "Voc� pode encontrar zumbis caminhando, eles s�o mortos-vivos, e voc� pode facilmente encontr�-los aqui.";
		next;
		mes "[Gar�onete]";
		mes "Eu ouvi dizer que eles temem a santidade, por isso eles tem medo de arqueiros,";
		mes "Eles preferem usar setas feitas de prata, um metal sagrado, que � infal�vel contra eles.";
		next;
		mes "[Gar�onete]";
		mes "A lenda diz que o chefe desta cidade, usava flechas de prata contra os zumbis.";
		mes "Que costumavam ser seus irm�os, afim de liberar suas almas para que pudessem descansar em paz.";
		next;
		mes "[Gar�onete]";
		mes "N�s acreditamos que se exorcizarmos os zumbis, poderemos lev�los pacificamente a uma vida ap�s a morte.";
		mes "E que suas almas n�o precisaram viver angustiadas nunca mais.";
		next;
		mes "[Gar�onete]";
		mes "Voc� pode n�o acreditar nas nossas cren�as,mas meu av� foi um dos mortos-vivos.";
		mes "Acredito que meu chefe era capaz de libert�-lo do mundo dos vivos.";
		close;
		case 2:
		mes "[Gar�onete]";
		mes "Temos uma cartomante, ela � uma pessoa extraordin�ria.";
		mes "Por�m ela n�o fica mais por aqui, como ela fazia antigamente.";
		next;
		mes "[Gar�onete]";
		mes "Ela costumava ficar aqui, para nos contar sobre a sorte da nossa vida, s� que ela foi reconhecida por ter este talento.";
		mes "Foi levada pelo nosso chefe.";
		mes "Agora ela fica no pal�cio central, ent�o se quiser v�-la ter� que ir at� la.";
		close;
		case 3:
		mes "[Gar�onete]";
		mes "Voc�... precisa de alguma bebida?";
		mes "N�o temos nada ao seu gosto?";
		next;
		mes "[Gar�onete]";
		mes "Eu sinto muito, n�o vendemos para fora.";
		mes "N�o podemos nos dar ao luxo de preparar o alc�ol, poos h� criaturas hostis l� fora.";
		mes "Mas por favor, volte mais tarde.";
		mes "Desculpe-nos pelos transtornos. ";
		close;
	}
	next;
	mes "[Gar�onete]";
	mes "Tenha um bom dia querido";
	next;
	mes "[Gar�onete]";
	mes "^666666*Choro*^000000";
	mes "Um dia vou ser recompensada pelo meu bom comportamento.";
	mes "Ser� que ainda encontrarei um homem para mim?";
	close;
}

// ------------------------------------------------------------------
payon_in03,96,116,3	script	Guarda Chefe#pay	4_M_PAY_SOLDIER,3,3,{
	end;
	OnTouch:
	mes "[Guarda Chefe]";
	mes "O que tr�s voc� aqui?";
	next;
	mes "[Guarda Chefe]";
	mes "Eu posso ver que voc� n�o � morador de payon.";
	mes "Eu gostaria apenas de lembr�-lo, que estou aqui para conduzi-lo de forma correta.";
	mes "Lembre-se: voc� � nosso convidado.";
	next;
	mes "[Guarda Chefe]";
	mes "No interesse de proteger a paz p�blica, eu vou desarmar o seu equipamento.";
	mes "Obrigado pela sua coopera��o.";
	close;
}

// ------------------------------------------------------------------
payon_in01,66,64,5	script	Arqueiro Zakk#pay	4_M_ORIENT01,{
	mes "[Arqueiro Zakk]";
	mes "Estou ocupado com um dos meus amigos.";
	next;
	mes "[Arqueiro Zakk]";
	mes "Mesmo que ele seja um perito em tiro com arco, ningu�m gosta de pessoas aque falam demais e n�o tem limites.";
	mes "At� mesmo nosso chefe est� ficando farto dele!";
	next;
	switch(select("Seu amigo?","Payon tem um chefe?","Boca... motorizada?")) {
		case 1:
		mes "[Arqueiro Zakk]";
		mes "Sim vou te explicar melhor.";
		mes "Este meu amigo � o arqueiro n�mero um de payon.";
		mes "Ele ensina arqueiros novatos, ao arredores da vila dos arqueiros.";
		mes "Pode ser uma boa ideia falar com ele,n�o custa nada tentar.";
		close;
		case 2:
		mes "[Arqueiro Zakk]";
		mes "Nossas vidas dependem do chefe fo p�lacio central.";
		mes "Ele � o guia espiritual de payon.";
		next;
		mes "[Arqueiro Zakk]";
		mes "ele usou seu arco gakkung contra os monstros da floresta de payon.";
		mes "Me lembro de v�-lo lutar quando eu era apenas uma crian�a.";
		next;
		mes "[Arqueiro Zakk]";
		mes "Mas agora, ele parece velho e fraco.";
		mes "Ainda assim, seus olhos s�o tao vivos quanto costumava ser durante seus dias de batalha.";
		mes "Onde ele nunca perdeu um alvo.";
		next;
		mes "[Arqueiro Zakk]";
		mes "Eu admiro o nosso chefe do fundo do meu cora��o.";
		close;
		case 3:
		mes "[Arqueiro Zakk]";
		mes "Voc� n�o sabe o que � um boca de motor?";
		next;
		mes "[Arqueiro Zakk]";
		mes "Boca de motor � um substantivo que usamos para alguns tolos que falam demais.";
		mes "Coisas que n�o interessam e n�o tem limites para parar de falar.";
		next;
		mes "[Arqueiro Zakk]";
		mes "Mas assim, meu amigo n�o � apenas uma lenda no arco e flecha.";
		mes "Ele tamb�m ficou conhecido, pela sua sua fama de inconveniente.";
		next;
		mes "[Arqueiro Zakk]";
		mes "Enfim meu amigo Wolt n�o tem uma casa pr�pria, ele fica na pousada.";
		mes "Por que voc� n�o vai l� encontr�-lo?";
		mes "Ele � realmente um cara legal, se voc� gostar de pessoas que falam muito.";
		close;
	}
}

// ------------------------------------------------------------------
payon_in01,47,59,2	script	Arqueiro Wolt#pay	4_M_ORIENT01,{
	mes "[Arqueiro Wolt]";
	mes "Arqueiros devem ter pr�tica tanto quanto j� possuem.";
	mes "Caso contr�rio, eles nunca chegar�o a ser especialistas na arte de atirar.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Ah, voc� ai!";
	mes "Eu sou o Arqueiro Wolt, mas voc� pode me chamar apenas de Wolt.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Eu sei que farewi uma pergunta um tanto inconveniente mas voc� quer gastar seu tempo comigo?";
	next;
	if (select("Oh, que inferno! n�o quero","Sim. eu acho que...")) {
		mes "[Arqueiro Wolt]";
		mes "Oh isso � bom, na verdade, isso � �timo!";
		mes "Se todos n�s arqueiros tivess�mos essa atitude.";
		mes "Se voc� tem tempo para sentar e ouvir, voc� ter� tempo para sair e praticar.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Sim...";
		mes "Como arqueiros n�o vemos com bons olhos quem n�o se esfor�a nos treinamentos.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Se voc� n�o trabalhar duro, ent�o voc� vai acabar sendo um Arqueiro horr�vel.";
		mes "Ningu�m vai poder ser ajudado por voc�";
		mes "Eu digo, NINGU�M!";
		next;
		mes "[Arqueiro Wolt]";
		mes "Voc� perguntou como nos preparamos n�o � mesmo?";
		mes "Bem, os arqueiros de payon n�o possuem muito tempo para brincar com os arcos.";
		mes "N�s saimos atr�s de combates reais.";
		next;
		mes "[Arqueiro Wolt]";
		mes "N�s nos aventuramos e passamos o dia todo � procura de monstros.";
		mes "Depois de encontrar alguns, n�s os matamos,� claro.";
		next;
		if (select("Eu acho que voc� precisa de um bom arco.","Voc� chama isso de 'pr�tica?'") == 1) {
			mes "[Arqueiro Wolt]";
			mes "Isso mesmo!";
			mes "Um arqueiro depende principalmenre da for�a do seu arco.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Os arcos constru�dos em payon s�o os maiores do continente!";
			mes "Eles s�o leves e robustos, feitos de troncos de �rvores de alta qualidade, retirados da floresta de payon.";
			next;
			mes "[Arqueiro Wolt]";
			mes "A qualidade da madeira, muitas vezes determina a qualidade do arco, e na for�a que ele possue.";
			next;
			mes "[Arche Wolt]";
			mes "Oh,oh! Eu tenho um arco muito elegante.";
			mes "Ele tem uma cor de �bano sofisticada.";
			mes "Acredite ele parece muito legal e her�ico quando estou me aventurando matando monstros.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Falando das arvores de payon, elas s�o famosas pela qualidade das suas madeiras.";
			mes "Mas ent�o, voc� deve estar se perguntando:Por que elas viraram monstros?";
			next;
			mes "[Arqueiro Wolt]";
			mes "De fato � uma pena porque essas �rvores monstros costumavam ser �rvores belas e majestosas.";
			mes "Mas, relaxe est� tudo bem, se mat�-las, voc� poder� fazer arcos com sua madeira.";
			next;
			mes "[Arqueiro Wolt]";
			mes "E o ciclo da nossa vida segue assim, n�s usamos nossos arcos para matar essas �vores.";
			mes "Para conseguir mais madeira, Mwahahahaha!";
			mes "� um ciclo sem fim !";
			next;
			select("^666666Esses monstros parecem intermin�veis...^000000");
			mes "[Arqueiro Wolt]";
			mes "Sim...";
			mes "Voc� est� certo.";
			mes "Os monstros est�o por toda a parte.";
			mes "Voc� acredita nisso?";
			next;
			mes "[Arqueiro Wolt]";
			mes "Voc� entende por que a vila dos arqueiros foi constru�da no lugar que est�?";
			next;
			mes "[Arqueiro Wolt]";
			mes "No ocidente, da vila voc� ver� a caverna de payon.";
			mes "Dentro dela, existe uma enorme quantidade de monstros.";
			mes "Que possuem um constante renascimento, sem mostrar nenhum sen�o de escassez do nascimento deles.";
			next;
			mes "[Arqueiro Wolt]";
			mes "N�s arqueiros, estamos aqui para proteger o nosso territ�rio contra eles, como � ordenado pelo nosso chefe!";
			next;
			if (select("Voc� disse caverna?","Chefe ...?","Cara, eu odeio essa cidade!") == 1) {
				mes "[Arqueiro Wolt]";
				mes "Se voc� for para o norte da cidade, voc� irpa encontrar a caverna de payon.";
				next;
				mes "[Arqueiro Wolt]";
				mes "Uma vez dentro, voc� encontrar� todos os tipos de monstros, como morcegos desagrad�veis e os zumbis...";
				next;
				mes "[Arqueiro Wolt]";
				mes "Se deixarmos eles fugirem de l�, ir�o infestar toda Payon!";
				mes "Ent�o, n�s temos que chegar l� e limpar todo aquele lugar.";
				next;
				mes "[Arqueiro Wolt]";
				mes "Mas, o frustante � que esses monstros ficam nascendo constantemente.";
				mes "�s vezes eu sinto que estamos perdendo nosso tempo e energia em v�o.";
				next;
				mes "[Arqueiro Wolt]";
				mes "Whoa...";
				mes "Tudo bem, eu vou me controlar sen�o";
				mes "come�o a falar feito algu�m correndo uma maratona de novo.";
				mes "� melhor eu deixar voc� ir.";
				mes "Existem treinamentos para voc� fazer, e o melhor muitos monstros para matar!";
				close;
			}
			mes "[Arqueiro Wolt]";
			mes "Ah atens que eu me esque�a, voc� perguntou sobre nosso chefe correto?";
			mes "Ele � um cara s�rio.";
			mes "E sempre me repreende por falar demais.";
			next;
			mes "[Arqueiro Wolt]";
			mes "ele sempre est� trabalhando para garantir";
			mes "que payon � segura e que est� protegida de danos.";
			mes "Ultimamente tenho ficado preocupado porque ele n�o tem sa�do mais do pal�cio.";
			mes "Isso pode ser um mal sinal.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Sim um mal sinal, mas eu n�o tenho muita certeza...";
			mes "N�o podemos ter problema em payon, e ultimamnte tem havido mudan�as por aqui.";
			mes "At� seguran�as no quarto dele, colocaram.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Hehehe.";
			mes "Eu ficarei em apuros se ele souber que disse assuntos pessoais dele a um estranho.";
			mes "Bem j� � muito tarde.";
			mes "E como eu j� disse n�o se pode lamentar pelo tempo perdido.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Mas...";
			mes "N�o � tarde demais para mim, preciso apenas calar a boca.";
			mes "Manter-me quieto.";
			mes "Estou me auto-desligando agora...";
			mes "Irei ficar quietinho como um rato, tenha uma boa tarde .!";
			close;
		}
		mes "[Arqueiro Wolt]";
		mes "Hmm...?";
		mes "Qual � a sua opni�o?";
		mes "O que � melhor do que ser realista, honesto e fazer as coisas para o bem?";
		next;
		mes "[Arqueiro Wolt]";
		mes "Embora voc� tenha suas opni�es pr�prias...";
		mes "Quero te dizer que voc� tem que ser capaz de praticar tudo na vida sem sofrer consequ�ncias graves.";
		mes "Como a morte.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Mas n�s temos que fazer valer o que temos de melhor!";
		mes "A vida de um Arqueiro, possui uma forma��o infind�vel!";
		mes "Sempre acumulando experi�ncias na pr�tica!";
		next;
		mes "[Arqueiro Wolt]";
		mes "Hm...?";
		mes "Voc� est� cansado de me ouvir repetir a mesma conversa outra vez?";
		mes "Ah, tenha paci�ncia comigo.Pense nisso como praticar a sua paci�ncia";
		close;
	}
	mes "[Arqueiro Wolt]";
	mes "Eh...";
	mes "Eu acho que � importante reservar um tempo para descansar.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Mas tamb�m � uma �tima ideia reservar um tempo, para pr�tica e treinamento.";
	next;
	mes "[Arqueiro Wolt]";
	mes "E acredite voc� deve estar alerta, voc� deveria fazer outra coisa, ao inv�s de pensar em descansar.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Isso me faz lembrar do tempo...";
	mes "Que atearam fogo na minha casa durante as f�rias.";
	mes "Foi um acidente, claro,mas o menino matou meus pais de raiva.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Hahahaha.";
	mes "Tudo come�ou, quando decidi tomar um banho em payon.";
	mes "N�s usamos a moda antiga nos banhos, precisamos fazer uma fogueira para esquentar a �gua.";
	mes "Banhos frios s�o desconfort�veis.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Pois bem, banhos quentes s�o confort�veis e aquele banho foi o melhor banho que tive em minha vida!";
	mes "Foi t�o bom que adormeci.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Mas enquanto eu dormia,";
	mes "Eu n�o percebi que o fogo come�ou a ir para as paredes e o teto!";
	mes "Felizmente eu estava em uma banheira cheia de �gua.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Eu teria conseguido ajudar, se minhas roupas n�o tivessem sido queimadas, enquanto eu dormia.";
	mes "E eu n�o sairia nu correndo pela cidade.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Ent�o...";
	mes "Eu apenas sentei-me na �gua por cerca de uma hora, completamente nu e pedindo ajuda, at� que algu�m pudesse me ouvir.";
	next;
	mes "[Arqueiro Wolt]";
	mes "Por�m, eu descobri que ningu�m me ouvia.";
	mes "O nosso teto desabou demolindo as paredes ao meu redor.";
	mes "Dessa forma puderam ouvir meus gritos e foi assim que sobrevivi.";
	next;
	switch(select("Hum, qual � dessa hist�ria?","Acho melhor n�o ficar com pregui�a.","Blah blah blah.")) {
		case 1:
		mes "[Arqueiro Wolt]";
		mes "Oh...";
		mes "Umm...";
		mes "Voc� quer saber qual a moral da hist�ria?";
		next;
		mes "[Arqueiro Wolt]";
		mes "Repousar aqui � algo que voc� pode fazer.";
		mes "Por�m nem sempre � hora de descansar.";
		mes "Esse tipo de comportamento pregui�oso deixa o povo da nossa cidade bastante raivoso.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Nosso chefe � o que mais se irrita com esses tipos de atitude.";
		mes "Eu acho que por aqui s� b�bados aprovam esses comportamentos insanos.";
		next;
		switch(select("Chefe?","b�bado da cidade?","Cara, voc� fala demais!")) {
			case 1:
			mes "[Arqueiro Wolt]";
			mes "Nosso chefe?";
			mes "Ah, ele � um cara meio chato.";
			mes "Ele sempre me repreende por eu falar demais.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Ele sempre est� trabalhando para garantir";
			mes "Que payon ficar� segura e sem danos.";
			mes "Ultimamente tenho ficado preocupado, pois ele n�o tem sa�do do pal�cio recentemente.";
			mes "Isso pode ser um mal sinal...";
			next;
			mes "[Arqueiro Wolt]";
			mes "Eu n�o tenho certeza,mas pode ser um mal sinal.";
			mes "Tudo est� muito estranho, at� guardas est�o de prontid�o no seu quarto por algum motivo.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Hehehe.";
			mes "Eu vou ficar em apuros se ele souber que falei dos assuntos dele a um estranho!";
			mes "Se bem que j� � meio tarde para eu dizer isso,N�o adianta nem lamentar por isso, eu j� disse mesmo!";
			next;
			mes "[Arqueiro Wolt]";
			mes "Mas";
			mes "N�o � tarde demais, s� preciso calar minha boca.Ficar em sil�ncio, quieto na minha, antes que seja tarde.";
			close;
			case 2:
			mes "[Arqueiro Wolt]";
			mes "Voc� sabia...";
			mes "Que o cara do bar sim aquele chamado Loud � detest�vel?";
			mes "E acredite ele � irritante por demais.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Hum..";
			mes "o que voc� tanto procura?";
			mes "Relaxe, eu devo ter algum dinheiro sobrando, ai eu tento lhe comprar uma bebida.";
			next;
			mes "[Arqueiro Wolt]";
			mes "Se bem que...";
			mes "N�o � uma boa ideia beber muito n�o faz muito bem para a sa�de.";
			close;
			case 3:
			mes "[Arqueiro Wolt]";
			mes "...!";
			next;
			mes "[Arqueiro Wolt]";
			mes "...";
			mes "Eu...";
			mes "...!";
			close;
		}
		case 2:
		mes "[Arqueiro Wolt]";
		mes "Ah, que bom.!";
		mes "Eu acho que chegamos a o ponto final da minha historia";
		next;
		mes "[Arqueiro Wolt]";
		mes "N�s arqueiros, temos que por muita import�ncia na nossa forma��o.";
		mes "Pprincipalmente na pr�tica do que aprendemos nosso olhar deve ser minucioso e devemos ser diligentes em tudo que fazemos.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Mas eu...";
		mes "Tenho que admitir do fundo do meu cora��o que eu sou uma cara muito pregui�oso.";
		mes "As vezes me pergunto como algu�m como eu pode ser chamado de arqueiro.";
		next;
		mes "[Arqueiro Wolt]";
		mes "Mas apesar de tudo o que voc� for fazer na vida, tem que fazer com paix�o!";
		close;
		case 3:
		close;
	}
}

// ------------------------------------------------------------------
payon_in03,99,190,4	script	Guarda#pay2	1_M_PAY_ELDER,2,2,{
	end;
	OnTouch:
	if (BaseLevel < 30) {
		mes "[Guarda]";
		mes "Ei...";
		mes "Ei...!";
		mes "Mostre o seu respeito ao nosso chefe!";
		close;
	}
	mes "[Guarda]";
	mes "Ei...";
	mes "Ei...!";
	mes "Mostre respeito ao nosso chefe!";
	next;
	mes "[Guarda]";
	mes "Eeeeei!";
	mes "Eu disse...";
	next;
	mes "[Chefe]";
	mes "Tudo bem, tudo bem...";
	mes "J� se passou muito tempo desde que falei com pessoas jovens.";
	next;
	switch(select("Por favor, me fale sobre Payon.","Onde est�o os guardas daqui?","Conte-me sobre a caverna.","O que faz um arqueiro faz?","O que um ca�ador faz?")) {
		case 1:
		mes "[Chefe]";
		mes "Payon � uma cidade rodeada de montanhas.";
		mes "Nossa cidade at� hoje foi auto-suficiente.";
		next;
		mes "[Chefe]";
		mes "Embora nossos antepassados n�o usufruiam dos beneficios de interc�mbio cultural com o reino de Rune-Midgard.";
		mes "Como fazemos hoje, eles sabiam sobreviver sem pedir qualquer ajuda.";
		next;
		mes "[Chefe]";
		mes "Payon desenvolveu suas pr�prias culturas e formas de vida.";
		mes "N�s inventamos nossos pr�prios meios de nos proteger contra elementos do mal.";
		mes "E treinamos arqueiros e ca�adores sejam eles homens ou mulheres.";
		next;
		mes "[Chefe]";
		mes "J� ouvi falar de fracos, covardes que temem os campos e masmorras cheios de monstros.";
		mes "Mas, para n�s a batalha � um meio de vida.";
		next;
		mes "[Chefe]";
		mes "� por isso que sua Majestade o Rei Tristam III desa nos formar como jovens corajosos para aniquilar criaturas do mal.";
		close;
		case 2:
		mes "[Chefe]";
		mes "Quando eu era jovem prontera enviou alguns servos para payon.";
		next;
		mes "[Chefe]";
		mes "Tropas da realeza, Kafras e etc...";
		mes "No in�cio houve um conflito de costumes e culturas.";
		next;
		mes "[Chefe]";
		mes "No entanto, com o tempo conseguimos resolver essas diferen�as mesquinhas.";
		mes "Al�m do que n�o posso negar que, eles nos ajudaram a desenvolver o com�rcio com as na��es estrangeiras.";
		next;
		mes "[Chefe]";
		mes "Agora as pessoas que costumavam esnobar payon, hoje possuem um imenso prazer em visitar a nossa cidade.";
		mes "Quando eu era jovem eu nunca imaginei que isso aconteceria um dia. Hahaha.!";
		next;
		mes "[Chefe]";
		mes "Acredite, hoje eu me agrado em conhecer esses povos.";
		mes "Apesar de terem vindo de outros lugares, eles possuem um amor por payon que � t�o sincero quanto o meu.";
		close;
		case 3:
		mes "[Chefe]";
		mes "Ah...";
		mes "As vezes eu costumava ir para a caverna ao norte.";
		mes "Mas agora � mais dif�cil que antigamente.";
		next;
		mes "[Chefe]";
		mes "Criaturas do mal nascem em qualquer lugar na caverna de Payon, sendo que s�o monstros diferentes dos quais n�s estamos habituados a lutar";
		next;
		mes "[Chefe]";
		mes "Voc� chegou a ver os";
		mes "Zombis...? Alguns zumbis s�o guerreiros que sairam para proteger essa cidade e nunca mais voltaram.";
		next;
		mes "[Chefe]";
		mes "Apesar desses mortos vivos serem uma amea�a para essa cidade, alguns s�o v�timas da pr�pria caverna.";
		mes "Estou velho de mais para suportar esse tipo de dor...";
		next;
		mes "[Chefe]";
		mes "Eu preciso fazer algo para libertar as almas dos mortos vivos de sua ang�stia eterna.";
		close;
		case 4:
		mes "[Chefe]";
		mes "Ah, aqui existe uma ambud�ncia de arqueiros especialistas em Payon.";
		mes "Por causa floresta, possuimos grande suprimento de madeira para criar flechas.";
		next;
		mes "[Chefe]";
		mes "A floresta � um bom lugar para os arqueiros treinarem e aprenderem a usar o ambiente para impedir o avan�o de for�as inimigas.";
		mes "Podendo atacar a uma dist�ncia segura.";
		next;
		mes "[Chefe]";
		mes "A floresta pode ser conveniente para surpresas inexperadas.";
		mes "Quando eu era jovem, eu corre com as flechas para lutar contra os monstros da floresta.";
		mes "Mas eu acabei deixando as flechas cairem e outro monstro salvou minha vida! Mwahaha!";
		close;
		case 5:
		mes "[Chefe]";
		mes "Como muitas culturas foram introduzidas em Payon, mudan�as tem influ�nciado nosso estilo de batalha.";
		next;
		mes "[Chefe]";
		mes "Tecnologia, especialmente com explosivos, habilitando novos m�todos de batalha.";
		mes "N�s n�o ficaremos limitados somente ao uso de arco e flecha.";
		next;
		mes "[Chefe]";
		mes "Habilidade com armadilhas, fazem ca�ar monstros com maior facilidade, foram desenvolvidas aqui em Payon.";
		mes "Os especialistas com essa nova habilidade s�o chamados de 'Ca�adores' por nosso Chefe anterior.";
		next;
		mes "[Chefe]";
		mes "Embora altamente efetiva, essa habilidade realmente � um perigo para quem n�o sabe usar.";
		mes "Por isso n�s n�o aprovamos pessoas experientes para se tornar um Ca�ador.";
		next;
		mes "[Chefe]";
		mes "Por�m, n�s damos boas vindas as pessoas que provam ser capazes de se tornar um Ca�ador.";
		close;
	}
}

// ------------------------------------------------------------------
payon_in03,102,185,5	script	Guarda#pay3	4_M_PAY_SOLDIER,{
	mes "[Guarda]";
	mes "Eu lamento mas voc� n�o pode ficar aqui.";
	mes "Por favor, saia.";
	close;
}