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
| - Nota: Potais na F�brica de Rob�s                                |
\*-----------------------------------------------------------------*/

kh_dun01,3,234,0	warp	kh_dun_00	1,1,yuno_fild08,74,174
kh_dun01,232,226,0	warp	kh_dun_01	1,1,kh_dun01,13,12
kh_dun01,63,7,0	warp	kh_dun_02	1,1,kh_dun01,227,176
kh_dun01,232,176,0	warp	kh_dun_03	1,1,kh_dun01,63,12

// ------------------------------------------------------------------
kh_dun02,43,195,0	script	kh_dun04	WARPNPC,1,1,{
	OnTouch:
	if (rand(1,2) == 1) {
		warp "kh_dun01",41,206;
	}
	else {
		warp "kh_dun01",32,199;
	}
}