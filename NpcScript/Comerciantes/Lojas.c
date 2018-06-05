/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Dev Team                                    |
| - Info: Lojas e vendas de itens em geral                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Alberta ] - 
// ------------------------------------------------------------------
alberta_in,180,15,0	trader	Loja de Armaduras#albShop	4W_F_01,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Glasses);
	sellitem(Sunglasses);
	sellitem(Divers_Goggles);
	sellitem(Cap);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Wooden_Mail);
	sellitem(Silver_Robe);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
alberta_in,188,21,0	trader	Loja de Armas#albShop2	1_M_03,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Sword);
	sellitem(Falchion);
	sellitem(Blade);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Rod);
	sellitem(Bow);
	sellitem(Axe);
	sellitem(Battle_Axe);
	sellitem(Hammer);
	sellitem(Buster);
	sellitem(Two_Handed_Axe);
}

// ------------------------------------------------------------------
alberta_in,175,97,4	trader	Loja de Armas#albshop3	4_KID01,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
alberta_in,165,96,0	trader	Colecionador#albShop4	1_F_MERCHANT_02,{
	OnInit:
	sellitem(Scell);
	sellitem(Monsters_Feed);
}

// ------------------------------------------------------------------
// - [ Aldebaran ] - 
// ------------------------------------------------------------------
aldeba_in,20,60,0	trader	Loja de Armaduras#aldeShop	4W_F_01,{
	OnInit:
	sellitem(Helm);
	sellitem(Buckler);
	sellitem(Shield);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Plate_Armor);
	sellitem(Manteau);
	sellitem(Boots);
	sellitem(Novice_Armlet);
	sellitem(Belt);
}

// ------------------------------------------------------------------
aldeba_in,28,54,0	trader	Loja de Armas#aldeShop2	1_M_03,{
	OnInit:
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Gladius);
	sellitem(Damascus);
}

// ------------------------------------------------------------------
aldeba_in,22,47,4	trader	Loja de Armas#aldeShop3	4_M_06,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
aldeba_in,94,56,5	trader	Loja de Utilidades#aldeShop4	4_M_01,{
	OnInit:
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
aldebaran,165,107,2	trader	Chefe de Cozinha#aldeShop5	4W_M_01,{
	OnInit:
	sellitem(Red_Spice);
	sellitem(Yellow_Spice);
	sellitem(Bread);
}

// ------------------------------------------------------------------
// - [ Amatsu ] -
// ------------------------------------------------------------------
ama_in01,89,28,5	trader	Loja de Armaduras#amaShop	4_F_JPN2,{
	OnInit:
	sellitem(Bandana);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
	sellitem(Wooden_Mail);
	sellitem(Belt);
}

// ------------------------------------------------------------------
ama_in01,102,28,3	trader	Loja de Armas#amaShop2	4_M_JPNOJI,{
	OnInit:
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
}

// ------------------------------------------------------------------
ama_in01,24,30,5	trader	Loja de Utilidades#amaShop3	4_M_JPN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Iron_Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
amatsu,206,150,3	trader	Chefe de Cozinha#amaShop4	4_M_01,{
	OnInit:
	sellitem(Sweet_Sauce);
	sellitem(Delicious_Fish);
}

// ------------------------------------------------------------------
// - [ Ayothaya ] -
// ------------------------------------------------------------------
ayo_in01,18,182,1	trader	Loja de Utilidades#ayoShop	4_F_THAISHAMAN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Iron_Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
ayo_in01,90,192,3	trader	Loja de Armas#ayoShop2	4_M_THAIONGBAK,{
	OnInit:
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
}

// ------------------------------------------------------------------
ayo_in01,90,160,1	trader	Loja de Armaduras#ayoShop3	4_M_THAIOLD,{
	OnInit:
	sellitem(Bandana);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
	sellitem(Wooden_Mail);
	sellitem(Belt);
}

// ------------------------------------------------------------------
ayothaya,203,178,3	trader	Chefe de Cozinha#ayoShop4	4_M_01,{
	OnInit:
	sellitem(Hot_Sauce);
	sellitem(Grain);
}

// ------------------------------------------------------------------
// - [ Brasilis ] -
// ------------------------------------------------------------------
brasilis,252,257,3	trader	Loja de Utilidades#braShop	4_F_BRZ_WOMAN,{
	OnInit:
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Booby_Trap);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
brasilis,244,243,3	trader	Loja de Armas#braShop2	4_M_BRZ_MAN2,{
	OnInit:
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
	sellitem(Coward);
}

// ------------------------------------------------------------------
brasilis,201,309,3	trader	Adestrador#braShop3	4_M_BRZ_MAN1,{
	OnInit:
	sellitem(Pet_Food);
	sellitem(Pet_Incubator);
}

// ------------------------------------------------------------------
brasilis,221,128,3	trader	Feirante#braShop4	4_M_BRZ_MAN2,{
	OnInit:
	sellitem(Coconut);
	sellitem(Banana);
	sellitem(Asai_Fruit);
}

// ------------------------------------------------------------------
// - [ Comodo ] -
// ------------------------------------------------------------------
comodo,296,125,4	trader	Loja de Souvenir#cmdShop	4W_F_01,{
	OnInit:
	sellitem(Clam_Shell);
	sellitem(Crap_Shell);
}

// ------------------------------------------------------------------
cmd_in01,117,165,4	trader	Loja de Armaduras#cmdShop2	4W_F_01,{
	OnInit:
	sellitem(Cap);
	sellitem(Helm);
	sellitem(Buckler);
	sellitem(Shield);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Plate_Armor);
}

// ------------------------------------------------------------------
cmd_in01,128,165,2	trader	Loja de Armas#cmdShop3	1_M_03,{
	OnInit:
	sellitem(Violin);
	sellitem(Mandolin);
	sellitem(Lute);
	sellitem(Harp);
	sellitem(Guh_Moon_Goh);
	sellitem(Guitar);
	sellitem(Rope);
	sellitem(Line);
	sellitem(Wire);
	sellitem(Tail);
	sellitem(Whip);
	sellitem(Rante);
}

// ------------------------------------------------------------------
cmd_in01,79,182,5	trader	Loja de Utilidades#cmdShop4	4_M_01,{
	OnInit:
	sellitem(Iron_Arrow);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Berserk_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
cmd_fild07,257,126,5	trader	Loja de Utilidades#cmdShop5	4_M_01,{
	OnInit:
	sellitem(Iron_Arrow);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
cmd_fild07,250,98,2	trader	Loja de Armas#cmdShop6	1_M_03,{
	OnInit:
	sellitem(Javelin);
	sellitem(Spear);
	sellitem(Pike);
	sellitem(Guisarme);
	sellitem(Glaive);
	sellitem(Partizan);
	sellitem(Trident);
	sellitem(Halberd);
	sellitem(Lance);
}

// ------------------------------------------------------------------
cmd_fild07,277,85,4	trader	Loja de Armaduras#cmdShop7	4W_F_01,{
	OnInit:
	sellitem(Cap);
	sellitem(Helm);
	sellitem(Buckler);
	sellitem(Shield);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Plate_Armor);
}

// ------------------------------------------------------------------
comodo,225,164,3	trader	Chefe de Cozinha#cmdShop8	4_M_01,{
	OnInit:
	sellitem(Hot_Sauce);
	sellitem(Sweet_Sauce);
	sellitem(Plain_Sauce);
	sellitem(Delicious_Fish);
}

// ------------------------------------------------------------------
// - [ Einbroch ] -
// ------------------------------------------------------------------
einbroch,138,66,4	trader	Loja de M�scaras#einShop	4_F_EINWOMAN,{
	OnInit:
	sellitem(Fedora);
	sellitem(Flu_Mask);
}

// ------------------------------------------------------------------
einbroch,82,199,4	trader	Remador Profissional#einShop2	4_M_EINMAN,{
	OnInit:
	sellitem(Apple);
	sellitem(Center_Potion);
	sellitem(Arrow);
	sellitem(Red_Potion);
}

ein_in01,106,27,4	trader	Armas de Uma M�o#einShop3	4_F_EINWOMAN,{
	OnInit:
	sellitem(Sword);
	sellitem(Falchion);
	sellitem(Blade);
	sellitem(Lapier);
	sellitem(Scimiter);
	sellitem(Tsurugi);
	sellitem(Ring_Pommel_Saber);
	sellitem(Haedonggum);
	sellitem(Saber);
	sellitem(Flamberge);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Gladius);
	sellitem(Damascus);
	sellitem(Axe);
	sellitem(Javelin);
	sellitem(Spear);
	sellitem(Pike);
	sellitem(Club);
	sellitem(Mace);
	sellitem(Smasher);
	sellitem(Flail);
	sellitem(Morning_Star);
	sellitem(Sword_Mace);
	sellitem(Chain);
	sellitem(Stunner);
	sellitem(Waghnakh);
	sellitem(Knuckle_Duster);
	sellitem(Hora);
	sellitem(Fist);
	sellitem(Claw);
	sellitem(Finger);
}

// ------------------------------------------------------------------
ein_in01,109,27,4	trader	Armas de Duas M�os#einShop4	4_F_EINWOMAN,{
	OnInit:
	sellitem(Katana);
	sellitem(Slayer);
	sellitem(Bastard_Sword);
	sellitem(Two_Hand_Sword);
	sellitem(Broad_Sword);
	sellitem(Battle_Axe);
	sellitem(Hammer);
	sellitem(Buster);
	sellitem(Two_Handed_Axe);
	sellitem(Lance);
	sellitem(Guisarme);
	sellitem(Glaive);
	sellitem(Partizan);
	sellitem(Trident);
	sellitem(Halberd);
	sellitem(Jur);
	sellitem(Katar);
	sellitem(Jamadhar);
}

// ------------------------------------------------------------------
ein_in01,119,26,4	trader	Loja de Armas#einShop5	4_M_EINMAN,{
	OnInit:
	sellitem(Kindling_Dagger);
	sellitem(Obsidian_Dagger);
	sellitem(Fishermans_Dagger);
	sellitem(Jujube_Dagger);
}

// ------------------------------------------------------------------
ein_in01,189,15,1	trader	Loja de Utilidades#einShop6	4_F_EINWOMAN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Fire_Arrow);
	sellitem(Silver_Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
einbroch,224,207,5	trader	Chefe de Cozinha#einShop7	4_M_01,{
	OnInit:
	sellitem(Cooking_Oil);
}

// ------------------------------------------------------------------
// - [ Geffen ] -
// ------------------------------------------------------------------
geffen_in,26,178,4	trader	Loja de Armaduras#gefShop	1_F_01,{
	OnInit:
	sellitem(Novice_Armlet);
	sellitem(Guard);
	sellitem(Mirror_Shield);
	sellitem(Sandals);
	sellitem(Hood);
	sellitem(Gemmed_Sallet);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
}

// ------------------------------------------------------------------
geffen_in,30,178,4	trader	Loja de Armas#gefShop2	1_M_01,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Sword);
	sellitem(Bow);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Arc_Wand);
}

// ------------------------------------------------------------------
geffen_in,22,171,7	trader	Loja de Armas#gefShop3	4_M_02,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
geffen_in,74,144,0	trader	Loja de Artigos#gefShop4	1_F_01,{
	OnInit:
	sellitem(Scell);
	sellitem(Garlet);
	sellitem(Zargon);
}

// ------------------------------------------------------------------
geffen_in,77,173,0	trader	Itens M�gicos#gefShop5	1_M_WIZARD,{
	OnInit:
	sellitem(Blue_Gemstone);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Arc_Wand);
	sellitem(Circlet);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
}

// ------------------------------------------------------------------
// - [ Kunlun ] -
// ------------------------------------------------------------------
gonryun,147,84,5	trader	Loja de Utilidades#gonShop	4_M_TWOLDMAN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Iron_Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
gonryun,174,101,3	trader	Loja de Armas#gonShop2	4_M_TWBOY,{
	OnInit:
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
}

// ------------------------------------------------------------------
gonryun,173,84,3	trader	Loja de Armaduras#gonShop3	4_F_TWGIRL,{
	OnInit:
	sellitem(Bandana);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
	sellitem(Wooden_Mail);
	sellitem(Belt);
}

// ------------------------------------------------------------------
gonryun,147,101,5	trader	Chefe de Cozinha#gonShop4	4_M_01,{
	OnInit:
	sellitem(Yellow_Spice);
	sellitem(Bread);
}

// ------------------------------------------------------------------
// - [ Hugel ] -
// ------------------------------------------------------------------
hugel,77,167,3	trader	Feirante#huShop	4_F_HUGRANMA,{
	OnInit:
	sellitem(Fruit_Of_Mastela);
	sellitem(Apple);
	sellitem(Banana);
	sellitem(Carrot);
	sellitem(Sweet_Potato);
	sellitem(Pumpkin);
}

// ------------------------------------------------------------------
hu_in01,241,368,2	trader	Loja de Utilidades#huShop2	1_M_INNKEEPER,{
	OnInit:
	sellitem(Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
hu_in01,252,368,3	trader	Loja de Utilidades#huShop3	4_F_01,{
	OnInit:
	sellitem(Blue_Gemstone);
	sellitem(Sunglasses);
	sellitem(Garlet);
	sellitem(Monsters_Feed);
}

// ------------------------------------------------------------------
hu_in01,100,390,3	trader	Loja de Armas#huShop4	4_M_04,{
	OnInit:
	sellitem(Bow);
	sellitem(Great_Bow);
	sellitem(Hunter_Bow);
	sellitem(Kakkung);
}

// ------------------------------------------------------------------
hu_in01,94,313,3	trader	Loja de Armaduras#huShop5	4_M_04,{
	OnInit:
	sellitem(Goggle);
	sellitem(Circlet);
	sellitem(Cap);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Sandals);
	sellitem(Hood);
	sellitem(Mantle);
	sellitem(Shield);
}

// ------------------------------------------------------------------
hu_in01,23,311,4	script	Vendedor de Fogos#huShop6	4_M_HUMAN_01,{
	OnInit:
	sellitem(Fire_Cracker);
}

// ------------------------------------------------------------------
// - [ Izlude ] -
// ------------------------------------------------------------------
izlude_in,60,127,4	trader	Loja de Armas#izShop	1_F_MARIA,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Bow);
	sellitem(Rod);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Sword);
	sellitem(Falchion);
	sellitem(Blade);
	sellitem(Katana);
	sellitem(Slayer);
	sellitem(Bastard_Sword);
	sellitem(Two_Hand_Sword);
	sellitem(Broad_Sword);
	sellitem(Axe);
}

// ------------------------------------------------------------------
izlude_in,70,127,4	trader	Loja de Armaduras#izShop2	1_M_SIZ,{
	OnInit:
	sellitem(Buckler);
	sellitem(Shield);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Cap);
	sellitem(Helm);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Wooden_Mail);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Plate_Armor);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
// - [ Juno ] -
// ------------------------------------------------------------------
yuno,218,97,5	trader	Loja de Utilidades#yunoShop	4_M_02,{
	OnInit:
	sellitem(Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
}

// ------------------------------------------------------------------
yuno,226,107,5	trader	Loja de Utilidades#yunoShop2	4_M_01,{
	OnInit:
	sellitem(Scell);
	sellitem(Garlet);
	sellitem(Zargon);
}

// ------------------------------------------------------------------
yuno,197,114,4	trader	Adestradora#yunoShop3	4_F_TELEPORTER,{
	OnInit:
	sellitem(Pet_Food);
	sellitem(Pet_Incubator);
	sellitem(Backpack);
	sellitem(Rocker_Glasses);
	/*
	sellitem(Bun_);
	sellitem(Mojji);
	sellitem(Flame_Gemstone);
	sellitem(Vital_Flower_);
	sellitem(Vital_Flower);
	sellitem(Bun_);
	sellitem(Damp_Darkness);
	sellitem(Small_Snow_Flower);
	sellitem(Fresh_Plant);
	sellitem(Big_Cell);
	sellitem(Apple_Pudding);
	sellitem(Mystic_Stone);
	sellitem(Flavored_Alcohol);
	sellitem(Grilled_Rice_Cake);
	sellitem(Fish_With_Blue_Back);
	sellitem(Pumpkin_Pie_);
	*/
}

// ------------------------------------------------------------------
yuno,205,103,4	trader	Loja de Armas#yunoShop4	4_M_TELEPORTER,{
	OnInit:
	sellitem(Novice_Breast);
	sellitem(Full_Plate_Armor);
	sellitem(Grave);
	sellitem(Turban);
	sellitem(Gemmed_Sallet);
	sellitem(Repeting_CrossBow);
}

// ------------------------------------------------------------------
yuno,163,187,5	trader	Itens M�gicos#yunoShop5	4_F_01,{
	OnInit:
	sellitem(Blue_Gemstone);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Arc_Wand);
	sellitem(Circlet);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
}

// ------------------------------------------------------------------
yuno_in01,25,34,5	trader	Loja de Utilidades#yunoShop6	4_M_01,{
	OnInit:
	sellitem(Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
}

// ------------------------------------------------------------------
yuno_in01,103,35,2	trader	Loja de Armas#yunoShop7	1_M_03,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Sword);
	sellitem(Bow);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Arc_Wand);
}

// ------------------------------------------------------------------
yuno_in01,112,26,4	trader	Loja de Armaduras#yunoShop8	4W_F_01,{
	OnInit:
	sellitem(Novice_Armlet);
	sellitem(Guard);
	sellitem(Mirror_Shield);
	sellitem(Sandals);
	sellitem(Hood);
	sellitem(Gemmed_Sallet);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
}

// ------------------------------------------------------------------
yuno_in03,176,22,3	trader	Loja de Pergaminhos#yunoShop9	4_M_ORIENT02,{
	OnInit:
	sellitem(Scroll);
}

// ------------------------------------------------------------------
yuno,130,173,3	trader	Chefe de Cozinha#yunoShop10	4_M_01,{
	OnInit:
	sellitem(Cooking_Oil);
	sellitem(Pot);
}

// ------------------------------------------------------------------
// - [ Lighthalzen ] -
// ------------------------------------------------------------------
lighthalzen,69,75,5	trader	Feirante#lhzShop	8_F,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
}

// ------------------------------------------------------------------
lighthalzen,112,44,0	trader	Florista#lhzShop2	4_F_01,{
	OnInit:
	sellitem(Flower);
	sellitem(Bunch_Of_Flowers);
	sellitem(Witherless_Rose);
}

// ------------------------------------------------------------------
lighthalzen,124,129,0	trader	Feirante#lhzShop3	4_F_02,{
	OnInit:
	sellitem(Carrot);
	sellitem(Sweet_Potato);
	sellitem(Pumpkin);
}

// ------------------------------------------------------------------
lighthalzen,222,191,4	trader	Adestrador#lhzShop4	4_M_TELEPORTER,{
	OnInit:
	sellitem(Pet_Food);
	sellitem(Pet_Incubator);
	sellitem(Backpack);
	sellitem(Rocker_Glasses);
	/*
	sellitem(Mojji);
	sellitem(Vital_Flower_);
	sellitem(Flame_Gemstone);
	sellitem(Bun_);
	*/
}

// ------------------------------------------------------------------
lhz_in02,286,95,4	trader	Loja do Aprendiz#lhzShop5	1_M_SIZ,{
	OnInit:
	sellitem(Super_Novice_Hat);
	sellitem(Novice_Shoes);
	sellitem(Novice_Shield);
	sellitem(Novice_Manteau);
}

// ------------------------------------------------------------------
lhz_in02,271,99,5	trader	Loja de Armaduras#lhzShop6	4_M_REPAIR,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Silk_Robe);
	sellitem(Chain_Mail);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
lhz_in02,276,99,4	trader	Loja de Armas#lhzShop7	4_M_REPAIR,{
	OnInit:
	sellitem(Knife);
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
	sellitem(Coward);
}

// ------------------------------------------------------------------
lhz_in02,273,35,4	trader	Loja de Cajados#lhzShop8	4_M_EINMAN2,{
	OnInit:
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Survival_Rod);
	sellitem(Survival_Rod2);
}

// ------------------------------------------------------------------
lhz_in02,105,21,3	trader	Joalheria#lhzShop9	4_F_02,{
	OnInit:
	sellitem(Azure_Jewel);
	sellitem(Cardinal_Jewel);
	sellitem(Blue_Jewel);
	sellitem(Golden_Jewel);
	sellitem(Bluish_Green_Jewel);
	sellitem(Crystal_Jewel);
	sellitem(Diamond_Ring);
}

// ------------------------------------------------------------------
lhz_in02,17,220,5	trader	Feirante#lhzShop10	4_F_02,{
	OnInit:
	sellitem(Carrot);
	sellitem(Sweet_Potato);
	sellitem(Pumpkin);
}

// ------------------------------------------------------------------
lhz_in02,21,220,5	trader	Feirante#lhzShop11	8_F,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
}

// ------------------------------------------------------------------
lhz_in02,32,219,5	trader	A�ougue#lhzShop12	1_M_JOBGUIDER,{
	OnInit:
	sellitem(Meat);
}

// ------------------------------------------------------------------
lhz_in02,38,145,5	trader	Loja de Presentes#lhzShop13	4_F_02,{
	OnInit:
	sellitem(Red_Frame);
	sellitem(Blue_Porcelain);
	sellitem(White_Platter);
	sellitem(Black_Ladle);
	sellitem(Glass_Bead);
}

// ------------------------------------------------------------------
lhz_in02,47,148,3	trader	Artigos de Casamento#lhzShop14	1_F_LIBRARYGIRL,{
	OnInit:
	sellitem(Bunch_Of_Flowers);
	sellitem(Wedding_Bouquet);
	sellitem(Wedding_Dress);
	sellitem(Wedding_Veil);
	sellitem(Tuxedo);
}

// ------------------------------------------------------------------
lhz_in02,31,145,4	trader	Loja de Utilidades#lhzShop15	4_F_01,{
	OnInit:
	sellitem(Spectacles);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Berserk_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
	sellitem(Leaf_Of_Yggdrasil);
	sellitem(Iron_Arrow);
}

// ------------------------------------------------------------------
lhz_in02,85,216,5	trader	Loja de Bonecos#lhzSho16	4_F_LGTGIRL,{
	OnInit:
	sellitem(Stuffed_Doll);
	sellitem(Poring_Doll);
	sellitem(Chonchon_Doll);
}

// ------------------------------------------------------------------
lhz_in02,87,208,3	trader	Loja de �culos#lhzShop17	4_M_PIERROT,{
	OnInit:
	sellitem(Spinning_Eyes);
	sellitem(Eye_Bandage);
	sellitem(Luxury_Sunglasses);
	sellitem(Granpa_Beard);
}

// ------------------------------------------------------------------
lhz_in03,239,106,5	trader	Loja de Utilidades#lhzShop18	4_F_EINWOMAN,{
	OnInit:
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
	sellitem(Spectacles);
}

// ------------------------------------------------------------------
lhz_in03,258,101,3	trader	Loja de Flechas#lhzShop19	4_M_EINMAN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Iron_Arrow);
	sellitem(Fire_Arrow);
	sellitem(Silver_Arrow);
}

// ------------------------------------------------------------------
lhz_in03,249,24,4	trader	Colecionador#lhzShop20	4_M_EINMAN,{
	OnInit:
	sellitem(Scell);
	sellitem(Garlet);
	sellitem(Zargon);
	sellitem(Monsters_Feed);
}

// ------------------------------------------------------------------
lighthalzen,126,126,3	trader	Chefe de Cozinha#lhzShop21	4_M_01,{
	OnInit:
	sellitem(Red_Spice);
	sellitem(Yellow_Spice);
}

// ------------------------------------------------------------------
// - [ Louyang ] -
// ------------------------------------------------------------------
lou_in02,121,182,5	trader	Loja de Armaduras#louShop	4_F_CHNWOMAN,{
	OnInit:
	sellitem(Bandana);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
	sellitem(Wooden_Mail);
	sellitem(Belt);
}

// ------------------------------------------------------------------
lou_in02,130,182,5	trader	Loja de Armas#louShop2	4_M_CHNMAN,{
	OnInit:
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
}

// ------------------------------------------------------------------
lou_in02,239,176,5	trader	Loja de Utilidades#louShop3	4_F_CHNWOMAN,{
	OnInit:
	sellitem(Arrow);
	sellitem(Iron_Arrow);
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
}

// ------------------------------------------------------------------
louyang,256,123,5	trader	Chefe de Cozinha#louShop4	4_M_CHNCOOK,{
	OnInit:
	sellitem(Plain_Sauce);
	sellitem(Grain);
}

// ------------------------------------------------------------------
// - [ Lutie ] -
// ------------------------------------------------------------------
xmas_in,40,38,5	trader	Loja de Utilidades#xmasShop	4_M_01,{
	OnInit:
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
xmas_in,168,104,4	trader	Loja de Armaduras#xmasShop2	4W_F_01,{
	OnInit:
	sellitem(Helm);
	sellitem(Buckler);
	sellitem(Shield);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Plate_Armor);
	sellitem(Manteau);
	sellitem(Boots);
}

// ------------------------------------------------------------------
xmas_in,169,34,2	trader	Loja de Brinquedos#xmasShop3	4_F_GON,{
	OnInit:
	sellitem(Flower_Ring);
	sellitem(Bunch_Of_Flowers);
	sellitem(Witherless_Rose);
	sellitem(White_Platter);
	sellitem(Glass_Bead);
	sellitem(Stuffed_Doll);
	sellitem(Diamond_Ring);
}

// ------------------------------------------------------------------
xmas_in,174,98,2	trader	Loja de Armas#xmasShop4	1_M_03,{
	OnInit:
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Gladius);
	sellitem(Damascus);
}

// ------------------------------------------------------------------
xmas,152,137,5	trader	Chefe de Cozinha#xmasShop5	4_M_01,{
	OnInit:
	sellitem(Cooking_Oil);
	sellitem(Grain);
}

// ------------------------------------------------------------------
// - [ Morroc ] -
// ------------------------------------------------------------------
morocc_in,141,67,0	trader	Loja de Armas#mocShop	1_M_MERCHANT,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Bow);
	sellitem(Rod);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Dirk);
	sellitem(Dagger);
	sellitem(Stiletto);
	sellitem(Gladius);
	sellitem(Damascus);
	sellitem(Jur);
	sellitem(Katar);
	sellitem(Jamadhar);
}

// ------------------------------------------------------------------
morocc_in,141,60,0	trader	Loja de Armaduras#mocShop2	1_M_MERCHANT,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Flu_Mask);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Wooden_Mail);
	sellitem(Silver_Robe);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
morocc_in,132,57,0	trader	Loja de Armas#mocShop3	4W_M_03,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
moc_ruins,93,53,2	trader	Colecionador#mocShop4	4_M_03,{
	OnInit:
	sellitem(Scell);
	sellitem(Monsters_Feed);
	sellitem(Animals_Skin);
	sellitem(Bill_Of_Birds);
}

// ------------------------------------------------------------------
moc_ruins,81,113,0	trader	Colecionador#mocShop5	4_M_03,{
	OnInit:
	sellitem(Scell);
	sellitem(Monsters_Feed);
	sellitem(Animals_Skin);
	sellitem(Bill_Of_Birds);
}

// ------------------------------------------------------------------
moc_ruins,110,105,2	trader	Joalheria#mocShop6	8_F,{
	OnInit:
	sellitem(Azure_Jewel);
	sellitem(Cardinal_Jewel);
	sellitem(Blue_Jewel);
	sellitem(Golden_Jewel);
	sellitem(Bluish_Green_Jewel);
}

// ------------------------------------------------------------------
moc_ruins,52,85,6	trader	Joalheria#mocShop7	4W_M_03,{
	OnInit:
	sellitem(Crystal_Jewel);
	sellitem(Diamond_Ring);
}

// ------------------------------------------------------------------
moc_ruins,113,126,4	trader	Loja de Artigos#mocShop8	4W_M_03,{
	OnInit:
	sellitem(Crystal_Mirror);
}

// ------------------------------------------------------------------
moc_ruins,131,138,0	trader	Loja de Artigos#mocShop9	4_F_04,{
	OnInit:
	sellitem(Witherless_Rose);
}

// ------------------------------------------------------------------
moc_ruins,71,139,5	trader	Loja de Artigos#mocShop10	4_F_04,{
	OnInit:
	sellitem(Flower_Ring);
}

// ------------------------------------------------------------------
moc_ruins,125,135,6	trader	Loja de Artigos#mocShop11	4_M_ORIENT02,{
	OnInit:
	sellitem(Skul_Ring);
	sellitem(Sword_Mace);
	sellitem(Stunner);
}

// ------------------------------------------------------------------
moc_ruins,87,109,0	trader	A�ougue#mocShop12	1_M_MERCHANT,{
	OnInit:
	sellitem(Meat);
}

// ------------------------------------------------------------------
moc_ruins,90,149,6	trader	Feirante#mocShop13	4W_M_03,{
	OnInit:
	sellitem(Banana);
}

// ------------------------------------------------------------------
// - [ Moscovia ] -
// ------------------------------------------------------------------
mosk_in,21,254,5	trader	Loja de Utilidades#moskShop	4_M_RUSMAN2,{
	OnInit:
	sellitem(Spectacles);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Booby_Trap);
	sellitem(Arrow);
}

// ------------------------------------------------------------------
mosk_in,31,180,3	trader	Loja de Armas#moskShop2	4_M_RUSMAN2,{
	OnInit:
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
}

// ------------------------------------------------------------------
mosk_in,79,178,1	trader	Loja de Armaduras#moskShop3	4_F_RUSWOMAN3,{
	OnInit:
	sellitem(Bandana);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
	sellitem(Wooden_Mail);
	sellitem(Belt);
}

// ------------------------------------------------------------------
moscovia,152,71,4	trader	Feirante#moskShop4	4_M_RUSMAN2,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
	sellitem(Carrot);
	sellitem(Sweet_Potato);
}

// ------------------------------------------------------------------
// - [ Niflheim ] -
// ------------------------------------------------------------------
nif_in,37,93,1	trader	Loja de Machados#nifShop	4_NFCOFFIN,{
	OnInit:
	sellitem(Axe);
	sellitem(Battle_Axe);
	sellitem(Hammer);
	sellitem(Buster);
	sellitem(Two_Handed_Axe);
}

// ------------------------------------------------------------------
/*
nif_in,37,84,1	trader	Loja de Armaduras#nifShop2	4_NFCOFFIN,{
	OnInit:
	sellitem(Hood);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Manteau);
}
*/

// ------------------------------------------------------------------
nif_in,145,23,1	trader	Loja de Utilidades#nifShop3	4_NFCOFFIN,{
	OnInit:
	sellitem(Pumpkin);
	sellitem(Pumpkin_Head);
	sellitem(Tree_Root);
	sellitem(Goats_Horn);
	sellitem(Pet_Food);
	sellitem(Poison_Powder);
	sellitem(Single_Cell);
	sellitem(Mementos);
}

// ------------------------------------------------------------------
niflheim,209,180,5	trader	Chefe de Cozinha#nifShop4	4_M_01,{
	OnInit:
	sellitem(Mushroom);
}

// ------------------------------------------------------------------
// - [ Payon ] -
// ------------------------------------------------------------------
payon_in01,15,119,0	trader	Loja de Armas#payShop	1_F_ORIENT_03,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Sword);
	sellitem(Falchion);
	sellitem(Blade);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Rod);
	sellitem(Bow);
	sellitem(Composite_Bow);
	sellitem(Great_Bow);
	sellitem(CrossBow);
	sellitem(Arbalest);
	sellitem(Kakkung);
	sellitem(Hunter_Bow);
}

// ------------------------------------------------------------------
payon_in01,5,129,7	trader	Loja de Armas#payShop2	4_F_KID2,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
payon_in01,7,119,2	trader	Loja de Armaduras#payShop3	1_F_ORIENT_02,{
	OnInit:
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Manteau);
	sellitem(Ribbon);
	sellitem(Bandana);
	sellitem(Eye_Bandage);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Silk_Robe);
	sellitem(Wooden_Mail);
	sellitem(Silver_Robe);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Tights);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
// - [ Prontera ] -
// ------------------------------------------------------------------
prontera,104,49,0	trader	Feirante#prtShop	8_F,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
}

// ------------------------------------------------------------------
prontera,64,125,0	trader	A�ougue#prtShop2	4_M_BARBER,{
	OnInit:
	sellitem(Meat);
	sellitem(Monsters_Feed);
}

// ------------------------------------------------------------------
prontera,58,182,0	trader	Florista#prtShop3	4W_KID,{
	OnInit:
	sellitem(Flower);
	sellitem(Bunch_Of_Flowers);
}

// ------------------------------------------------------------------
prontera,113,42,0	trader	Florista#prtShop4	4_F_01,{
	OnInit:
	sellitem(Flower);
	sellitem(Bunch_Of_Flowers);
}

// ------------------------------------------------------------------
prontera,105,87,0	trader	Loja de Presentes#prtShop5	4_F_02,{
	OnInit:
	sellitem(Red_Frame);
	sellitem(Blue_Porcelain);
	sellitem(White_Platter);
	sellitem(Black_Ladle);
	sellitem(Glass_Bead);
}

// ------------------------------------------------------------------
prontera,248,153,0	trader	Loja de Bonecos#prtShop6	4_M_03,{
	OnInit:
	sellitem(Stuffed_Doll);
	sellitem(Poring_Doll);
	sellitem(Chonchon_Doll);
}

// ------------------------------------------------------------------
prontera,48,58,0	trader	Feirante#prtShop7	4_F_02,{
	OnInit:
	sellitem(Carrot);
	sellitem(Sweet_Potato);
	sellitem(Pumpkin);
}

// ------------------------------------------------------------------
prt_in,211,169,0	trader	Artigos de Casamento#prtShop8	1_F_LIBRARYGIRL,{
	OnInit:
	sellitem(Bunch_Of_Flowers);
	sellitem(Wedding_Bouquet);
	sellitem(Wedding_Dress);
	sellitem(Wedding_Veil);
	sellitem(Tuxedo);
}

// ------------------------------------------------------------------
prt_in,172,130,0	trader	Loja de Armas#prtShop9	1_M_JOBGUIDER,{
	OnInit:
	sellitem(Arrow);
	sellitem(Silver_Arrow);
	sellitem(Bow);
	sellitem(Knife);
	sellitem(Cutter);
	sellitem(Main_Gauche);
	sellitem(Rod);
	sellitem(Sword);
	sellitem(Falchion);
	sellitem(Blade);
	sellitem(Lapier);
	sellitem(Scimiter);
	sellitem(Ring_Pommel_Saber);
	sellitem(Tsurugi);
	sellitem(Haedonggum);
	sellitem(Saber);
	sellitem(Flamberge);
	sellitem(Katana);
	sellitem(Axe);
}

// ------------------------------------------------------------------
prt_in,172,132,0	trader	Loja de Armaduras#prtShop10	1_M_02,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Sandals);
	sellitem(Shoes);
	sellitem(Hood);
	sellitem(Muffler);
	sellitem(Hat);
	sellitem(Cap);
	sellitem(Cotton_Shirt);
	sellitem(Leather_Jacket);
	sellitem(Adventure_Suit);
	sellitem(Wooden_Mail);
	sellitem(Mantle);
	sellitem(Coat);
	sellitem(Padded_Armor);
	sellitem(Chain_Mail);
	sellitem(Novice_Armlet);
	sellitem(Belt);
}

// ------------------------------------------------------------------
prt_in,171,140,0	trader	Loja de Armas#prtShop11	1_M_01,{
	OnInit:
	sellitem(Javelin);
	sellitem(Spear);
	sellitem(Pike);
	sellitem(Guisarme);
	sellitem(Glaive);
	sellitem(Partizan);
	sellitem(Trident);
	sellitem(Halberd);
	sellitem(Lance);
}

// ------------------------------------------------------------------
prt_in,165,140,4	trader	Loja de Armas#prtShop12	1_F_01,{
	OnInit:
	sellitem(Town_Sword);
	sellitem(Cinquedea);
}

// ------------------------------------------------------------------
prt_monk,135,263,5	trader	Loja de Armas#prtShop13	4_F_JOB_BLACKSMITH,{
	OnInit:
	sellitem(Waghnakh);
	sellitem(Knuckle_Duster);
	sellitem(Hora);
}

// ------------------------------------------------------------------
// - [ Rachel ] -
// ------------------------------------------------------------------
ra_in01,175,364,3	trader	Loja de Armaduras#raShop	4_F_SHABBY,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Silk_Robe);
	sellitem(Chain_Mail);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
ra_in01,257,269,3	trader	Loja de Utilidades#raShop2	4_F_SHABBY,{
	OnInit:
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Booby_Trap);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
ra_in01,176,389,3	trader	Loja de Armas#raShop3	4_M_RACHMAN1,{
	OnInit:
	sellitem(Knife);
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
	sellitem(Coward);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
}

// ------------------------------------------------------------------
ra_in01,254,300,3	trader	Feirante#raShop4	4_M_RACHMAN1,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
}

// ------------------------------------------------------------------
rachel,65,80,1	trader	Feirante#raShop5	4_F_SHABBY,{
	OnInit:
	sellitem(Carrot);
	sellitem(Pumpkin);
	sellitem(Sweet_Potato);
}

// ------------------------------------------------------------------
// [ Umbala ]
// ------------------------------------------------------------------
um_in,104,124,3	trader	Loja de Utilidades#umShop	4_M_UMOLDMAN,{
	OnInit:
	sellitem(Apple);
	sellitem(Carrot);
	sellitem(Pumpkin);
	sellitem(Sweet_Potato);
	sellitem(Banana);
	sellitem(Meat);
	sellitem(Monsters_Feed);
	sellitem(Pet_Food);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
umbala,102,154,3	trader	Chefe de Cozinha#umShop2	4_M_01,{
	OnInit:
	sellitem(Red_Spice);
	sellitem(Grain);
}

// ------------------------------------------------------------------
um_in,160,125,3	trader	Loja de Armas#umShop3	4_M_UMSOLDIER,{
	OnInit:
	sellitem(Club);
	sellitem(Mace);
	sellitem(Smasher);
	sellitem(Flail);
	sellitem(Morning_Star);
	sellitem(Chain);
	sellitem(Fist);
	sellitem(Finger);
	sellitem(Claw);
}

// ------------------------------------------------------------------
// - [ Veins ] -
// ------------------------------------------------------------------
ve_in,386,245,3	trader	Loja de Armas#veShop	4_M_RACHMAN1,{
	OnInit:
	sellitem(Knife);
	sellitem(Main_Gauche);
	sellitem(Stiletto);
	sellitem(Blade);
	sellitem(Ring_Pommel_Saber);
	sellitem(Katana);
	sellitem(Bastard_Sword);
}

// ------------------------------------------------------------------
ve_in,336,243,3	trader	Loja de Armas#veShop2	4_M_RACHMAN1,{
	OnInit:
	sellitem(Pike);
	sellitem(Partizan);
	sellitem(Hammer);
	sellitem(Chain);
	sellitem(Coward);
}

// ------------------------------------------------------------------
ve_in,374,230,3	trader	Loja de Armaduras#veShop3	4_F_SHABBY,{
	OnInit:
	sellitem(Guard);
	sellitem(Buckler);
	sellitem(Shoes);
	sellitem(Boots);
	sellitem(Muffler);
	sellitem(Silk_Robe);
	sellitem(Chain_Mail);
	sellitem(Coat);
	sellitem(Thief_Clothes);
	sellitem(Novice_Armlet);
}

// ------------------------------------------------------------------
ve_in,243,303,5	trader	Loja de Utilidades#veShop4	4_M_DESERT,{
	OnInit:
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Spectacles);
	sellitem(Booby_Trap);
	sellitem(Leaf_Of_Yggdrasil);
}

// ------------------------------------------------------------------
ve_in,253,304,5	trader	Feirante#veShop5	4_F_DST_CHILD,{
	OnInit:
	sellitem(Apple);
	sellitem(Banana);
}

// ------------------------------------------------------------------
ve_in,252,313,0	trader	Itens M�gicos#veShop6	4_F_DST_GRAND,{
	OnInit:
	sellitem(Blue_Gemstone);
	sellitem(Rod);
	sellitem(Wand);
	sellitem(Staff);
	sellitem(Arc_Wand);
	sellitem(Circlet);
	sellitem(Silk_Robe);
	sellitem(Silver_Robe);
}

// ------------------------------------------------------------------
// - [ Guildas ]
// ------------------------------------------------------------------
alde_alche,38,184,3	trader	Loja de Materiais#alcheShop	4_M_SAGE_C,{
	OnInit:
	sellitem(Melange_Pot);
	sellitem(Cooking_Skewer);
	sellitem(Black_Charcoal);
	sellitem(Large_Cookpot);
	sellitem(Fine_Noodle);
	sellitem(Cool_Gravy);
	sellitem(Bottle_To_Throw);
}

// ------------------------------------------------------------------
que_ng,72,31,2	trader	Boonji#ninShop	4_M_01,{
	OnInit:
	sellitem(Shuriken);
	sellitem(Nimbus_Shuriken);
	sellitem(Flash_Shuriken);
	sellitem(Sharp_Leaf_Shuriken);
	sellitem(Thorn_Needle_Shuriken);
	sellitem(Explosive_Kunai);
	sellitem(Makibishi);
}

// ------------------------------------------------------------------
que_ng,73,26,5	trader	Boonray#ninShop2	4_M_01,{
	OnInit:
	sellitem(Arm_Guard);
	sellitem(Flame_Stone);
	sellitem(Ice_Stone);
	sellitem(Wind_Stone);
	sellitem(Shadow_Orb);
	sellitem(Charm_Fire);
	sellitem(Charm_Ice);
	sellitem(Charm_Wind);
	sellitem(Charm_Earth);
	sellitem(Fox_Armguard);
	sellitem(Special_Ninja_Suit);
}

// ------------------------------------------------------------------
que_ng,179,91,3	trader	Chivas Lugal#ninShop3	4_M_HUMERCHANT,{
	OnInit:
	sellitem(Branch);
	sellitem(Crimson_Bolt);
	sellitem(The_Cyclone);
	sellitem(Rolling_Stone);
	sellitem(Black_Rose);
	sellitem(Long_Barrel);
	sellitem(Jungle_Carbine);
	sellitem(Thunder_P);
}

// ------------------------------------------------------------------
que_ng,180,79,3	trader	Johnny Waiker#jusShop	4_M_HUMERCHANT,{
	OnInit:
	sellitem(Bullet);
	sellitem(Silver_Bullet);
	sellitem(Shell_Of_Blood);
}

// ------------------------------------------------------------------
in_moc_16,22,20,7	trader	Sepulchral#assShop	4_M_MASKMAN,{
	OnInit:
	sellitem(Venom_Knife);
}

// ------------------------------------------------------------------
prt_church,108,124,4	trader	Nun#churShop	1_F_PRIEST,{
	OnInit:
	sellitem(Rosary);
	sellitem(Biretta);
	sellitem(Blue_Coif);
	sellitem(Scapulare);
	sellitem(Saint_Robe);
	sellitem(Club);
	sellitem(Mace);
	sellitem(Smasher);
	sellitem(Flail);
	sellitem(Morning_Star);
	sellitem(Chain);
}

// ------------------------------------------------------------------
// - [ Cavernas ] -
// ------------------------------------------------------------------
/*
tur_dun01,158,54,6	trader	Loja de Utilidades#tuShop	4W_M_03,{
	OnInit:
	sellitem(Arrow);
	sellitem(Red_Potion);
	sellitem(Orange_Potion);
	sellitem(Yellow_Potion);
	sellitem(White_Potion);
	sellitem(Green_Potion);
	sellitem(Wing_Of_Fly);
	sellitem(Wing_Of_Butterfly);
	sellitem(Center_Potion);
	sellitem(Awakening_Potion);
	sellitem(Luxury_Sunglasses);
}
*/

// ------------------------------------------------------------------
// - [ Outros ] -
// ------------------------------------------------------------------

// Campo de Aprendizes ----------------------------------------------
new_1-3,100,50,4	trader	Comerciante#newShop	4_F_04,{
	OnInit:
	sellitem(Sweet_Potato);
}
