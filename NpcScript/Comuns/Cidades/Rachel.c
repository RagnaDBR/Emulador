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
| - Version: Spell Master                                           |
| - Info: Npcs comuns na cidade Rachel                              |
\*-----------------------------------------------------------------*/

rachel,124,132,1	script	Cidad�o#rac 	4_M_CHILD1,{
	mes "[Cidad�o]";
	mes "Freya te aben�oe e te d� muita sa�de, riqueza, alegria e felicidade!";
	next;
	mes "[Cidad�o]";
	mes "Freya � a Deusa do amor e da beleza.";
	mes "Voc� acha que se eu rezar bastante, ela vai me ajudar a encontrar uma namorada bem bonita?";
	close;
}

// ------------------------------------------------------------------
rachel,74,150,7	script	Garota#rac	4_F_CHILD,{
	mes "[Garota]";
	mes "Eu nunca vi nossa papisa antes, eu ouvi que ela tem cabelo louro prateado e pele muito branca.";
	mes "Papai diz que apenas uma garota � como aquela em toda gera��o.";
	next;
	mes "[Garota]";
	mes "Meu papai diz que a papisa � muito especial para n�s porque ela � Freya.";
	mes "Eu quero dizer, Freya � uma deusa.";
	mes "Mas ela tamb�m se tranforma em gente como n�s para conversar conosco.";
	mes "Bem, s� com os sacerdotes...";
	next;
	mes "[Garota]";
	mes "Eu n�o sei de tudo, mas parece que ela � uma princesa secreta.";
	mes "Isso n�o parece t�o legal?";
	mes "Mas quando eu digo isso pro meu pai, ele fica bravo comigo!";
	mes "Ah, bom.";
	close;
}

// ------------------------------------------------------------------
rachel,144,243,5	script	Guarda#rac::ChesGuard	4_M_RASWORD,{
	mes "[Guarda de Cheshrumnir]";
	mes "Voc� est� no Cheshrumnir, os terrenos santificador ocupados por nossa papisa.";
	mes "A incarna��o mortal de Freya.";
	mes "Em a respeito pela excel�ncia, eu espero que voc� entre com um cora��o devoto.";
	close;
}
rachel,155,243,3	duplicate(ChesGuard)	Guarda#rac2	4_M_RASWORD

// ------------------------------------------------------------------
rachel,268,120,1	script	Guarda#rac3::RaGuard	4_M_RASWORD,{
	mes "[Guarda de Rachel]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" � Rachel a capital de Arunafeltz.";
	mes "Por favor pe�a ao nosso guia no centro da cidade informa��es e servi�os para visitantes.";
	close;
}
rachel,125,33,5	duplicate(RaGuard)	Guarda#rac4	4_M_RASWORD
rachel,31,130,3	duplicate(RaGuard)	Guarda#rac5	4_M_RASWORD

// ------------------------------------------------------------------
rachel,209,198,3	script	Crian�a#rac	4_M_CHILD1,{
	mes "[Crian�a]";
	mes "Se voc� abrir esta porta, voc� pode entrar nesta casa, e morar em um dos quartos!";
	mes "Ent�o, voc� pode colocar seus sof�s e uma cama e todas as suas coisas!";
	next;
	mes "[Crian�a]";
	mes "Tudo que voc� tem que fazer �...";
	mes "Ugh!";
	mes "Virar esta ma�aneta e... Grrrrah!";
	mes "Abrir esta porta...";
	mes "Mas � quase imposs�vel...";
	close;
}

// ------------------------------------------------------------------
rachel,127,117,4	script	Crian�a#rac2	4_F_CHILD,{
	mes "[Crian�a]";
	mes "Apesar de que n�s rezamos para a deusa Freya e pe�amos para ela todo tipo de coisas.";
	mes "N�o podemos esperar que ela fa�a tudo para n�s.";
	next;
	mes "[Crian�a]";
	mes "Como humanos, � nossa responsabilidade fazer tudo que estiver a nosso alcance para conceber nossa pr�pria felicidade.";
	mes "N�s acreditamos que se � a vontade de Freya, ent�o ser� realizada.";
	next;
	emotion(e_what);
	mes "[Crian�a]";
	mes "Eu sei que pode parecer um pouco confuso para um forasteiro.";
	mes "A ideia de ser confiante em nossa Deusa em vez de ser em n�s mesmos.";
	close;
}

// ------------------------------------------------------------------
rachel,260,175,3	script	Anku#rac	4_F_CHILD,{
	mes "[Anku]";
	mes "Faz tanto tempo j�!";
	mes "Eu n�o consigo encontrar Himuhimu!";
	mes "Esconde-esconde n�o deveria levar tanto tempo...";
	next;
	mes "[Anku]";
	mes "Ah, j� estou co fome...";
	mes "Himuhimu, saia da� para que a gente possa ir pra casa e comer!";
	mes "Himuhimu! Eu desisto!";
	mes "H-Himuhimu...?";
	close;
}

// ------------------------------------------------------------------
rachel,272,141,3	script	Himuhimu#rac	4_M_CHILD1,{
	mes "[Himuhimu]";
	mes "Zzzz...Z...";
	mes "Anku, voc� nunca vai me encontr...";
	mes "Nunca encontrar eu aqui... Zzzzz...";
	mes "... Que fome...";
	close;
}

// ------------------------------------------------------------------
rachel,76,77,3	script	Sacerdote#rac	4_M_MASK,{
	mes "[Sacerdote de Rachel]";
	mes "Bwahahaha!";
	mes "De alguma forma, a bebida tem um gosto muito melhor na hora do servi�o!";
	close;
}

// ------------------------------------------------------------------
rachel,206,30,3	script	Sacerdote#rac2	4_F_TRAINEE,{
	mes "[Sacerdote de Freya]";
	mes "Isto...";
	mes "Me aborrece...";
	next;
	mes "[Sacerdote de Freya]";
	mes "Voc�!";
	mes "Entretenha-me!";
	emotion e_ag;
	next;
	if (select("O qu�? Voc� n�o pode me dizer o que fazer!","Voc� sabe disto.") == 1) {
		mes "[Sacerdote de Freya]";
		mes "Ah. Isto tudo �";
		mes "verdade, eu suponho.";
		close;
	}
	mes "[Sacerdote de Freya]";
	mes "Bem, ent�o, o que voc� vai fazer para me entreter?";
	next;
	if (select("Aqui est� uma hist�ria engra�ada...","Eu vou fazer o que voc� quer que eu fa�a.") == 1) {
		mes "^3355FFVoc� contou a ela a primeira hist�ria engra�ada que voc� p�de lembrar.^000000";
		specialeffect(EF_TALK_FROSTJOKE, AREA, playerattached());
		next;
		mes "[Sacerdote de Freya]";
		mes "Isto � supostamente engra�ado?";
		mes "Eu suponho que n�o entendo humor popular.";
		close;
	}
	mes "[Sacerdote de Freya]";
	mes "Bom, bom.";
	mes "Oh? Oh!";
	mes "Isto � maravilhoso!";
	close;
}

// ------------------------------------------------------------------
rachel,201,174,3	script	Disc�pulo#rac	4_M_MASK1,{
	mes "[Disc�pulo de Freya]";
	mes "Todos n�s de Arunafeltz acreditamos na Deusa Freya.";
	mes "Mas h� alguns de n�s que est�o mais seriamente envolvidos em adora��o e venera��o.";
	next;
	mes "[Disc�pulo de Freya]";
	mes "Primeiro, h� 'Disc�pulos de Freya,' homens e mulheres como eu que se vestem com m�scaras sagradas e mantos.";
	mes "Eu percebo que nossa roupa pode parecer um pouco peculiar pra voc�, mas este � o nosso jeito.";
	next;
	mes "[Disc�pulo de Freya]";
	mes "Ent�o, tem os Sacerdotes que se vestem em mantos flutuantes limpos e brancos.";
	mes "Eles trabalham no templo e servem a comunidade como l�deres religiosos.";
	next;
	mes "[Disc�pulo de Freya]";
	mes "Entre estes sacerdotes est�o os Sumo Sacerdotes que diretamente assistem nossa papisa.";
	mes "Eles usam roupas mais coloridas em sinal de seu n�vel social elevado em Rachel.";
	next;
	mes "[Disc�pulo de Freya]";
	mes "Todos n�s trabalhamos incessantemente para trazer prosperidade para Arunafeltz, e efetuar os ensinamentos de nossa amada deusa Freya.";
	close;
}

// ------------------------------------------------------------------
rachel,197,137,3	script	Bardo#rac	1_M_BARD,{
	mes "[Bardo]";
	mes "Eu vaguei por esta terra, cantando minha can��o.";
	mes "Procurando por algu�m para acalmar meu cora��o.";
	next;
	mes "[Bardo]";
	mes "Posso eu satisfazer esta esperan�a?";
	mes "Encontrando a garota com pele branca em um tom de l�rios na Torre de Pizza.";
	mes "Sim, Estou falando da papisa...";
	mes "Papisa, Papisa....";
	next;
	mes "["+strcharinfo(CHAR_NAME)+"]";
	mes "Voc� deve estar fora de si cantando este tipo de m�sica aqui em Arunafeltz!";
	next;
	mes ".........";
	mes ".........";
	mes ".........";
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
rachel,142,167,5	script	Seguidor de Arunafeltz#rac	4_F_MASK1,{
	mes "[Seguidor de Arunafeltz]";
	mes "Que Freya aben�oe voc� em suas jornadas...";
	close;
}

// ------------------------------------------------------------------
rachel,196,77,3	script	Crian�a#3rac	4_M_CHILD1,{
	mes "[Crian�a]";
	mes "Hey, Voc� viu por ai Bruspetti?";
	mes "Ela � realmente legal e sempre compra de mim muitos e muitos biscoitos!";
	next;
	mes "[Crian�a]";
	mes "Hmm, eu n�o a vi a um tempo.";
	mes "Eu ouvi que ela viajou para algum lugar.";
	mes "Quanto tempo voc� pensa q ela ira voltar, huh?";
	close;
}

// ------------------------------------------------------------------
rachel,151,155,3	script	Crian�a#4rac	4_M_CHILD1,{
	mes "[Crian�a]";
	mes "Oh! Eu quero ser um aventureiro como voc� quando crescer!";
	mes "Ir a todos os tipos de lugares, visitar diferentes cidades.";
	mes "Isso soa t�o divertido!";
	next;
	mes "[Crian�a]";
	mes "Talvez se eu achar um lugar agrad�vel, talvez eu v� somente por estadia e, em seguida, passar por a�.";
	mes "Tem algum lugar aqui que tem isso, e vem de Lighthalzen at� aqui";
	next;
	mes "[Crian�a]";
	mes "Isso, t�o breve quando tiver a chance, eu irei abandonar essa cidade e ver o m�ximo desse mundo que eu poder!";
	mes "Eu preciso crescer r�pido para isso!";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ra_in01,301,50,3	script	Homem olhando#rac	4_M_MASK,{
	mes "[Homem]";
	mes "Nham-nham!";
	mes "Adoro a comida deste restaurante!";
	mes "N�o servem uma comida t�o boa em nenhum outro lugar!";
	close;
}

// ------------------------------------------------------------------
ra_in01,301,52,3	script	Homem Comum#rac	4_M_MASK,{
	mes "[Homem]";
	mes "A comida aqui n�o � ruim, mas meus restaurantes favoritos est�o em Hugel.";
	mes "A comida de l� com certeza � melhor.";
	close;
}

// ------------------------------------------------------------------
ra_in01,297,50,7	script	Homem Suspeito#rac	4_M_MASK1,{
	mes "[Suspeito]";
	mes "Cada prato tem seu gosto �nico, que voc� deve aprender a apreciar.";
	mes "� claro, aqueles lanches gordurosos n�o contam...";
	close;
}

// ------------------------------------------------------------------
