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
| - Nota: Potais no Santu�rio de Rachel                             |
\*-----------------------------------------------------------------*/

ra_san01,139,139,0	warp	sanctuary15	1,1,ra_temin,27,314

ra_san01,139,13,0	script	sanctuary01	WARPNPC,1,1,{
	if (ra_tem_q == 21) { warp "que_san04",119,110; end; }
	switch(rand(3)) {
		case 1:  warp "ra_san02",213,275; break;
		case 2:  warp "ra_san03",119,283; break;
		default: warp "ra_san04",119,110; break;
	}
}

// ------------------------------------------------------------------
ra_san02,213,280,0	warp	sanctuary02	1,1,ra_san01,140,19
ra_san02,289,149,0	warp	sanctuary10	1,1,ra_san03,10,149
ra_san02,213,4,0	warp	sanctuary12	1,1,ra_san04,35,216
ra_san02,30,21,0	warp	sanctuary14	1,1,ra_san05,14,149

// ------------------------------------------------------------------
ra_san03,123,283,0	warp	sanctuary03	1,1,ra_san01,140,19
ra_san03,279,21,0	warp	sanctuary05	1,1,ra_san05,282,149
ra_san03,85,15,0	warp	sanctuary06	1,1,ra_san04,203,216
ra_san03,5,149,0	warp	sanctuary11	1,1,ra_san02,284,149

// ------------------------------------------------------------------
ra_san04,203,221,0	warp	sanctuary07	1,1,ra_san03,85,20
ra_san04,120,48,0	warp	sanctuary08	1,1,ra_san05,150,282
ra_san04,119,104,0	warp	sanctuary04	1,1,ra_san01,140,19
ra_san04,35,221,0	warp	sanctuary13	1,1,ra_san02,213,9

// ------------------------------------------------------------------
ra_san05,150,7,0	warp	sanctuary09	1,1,ra_temple,119,153