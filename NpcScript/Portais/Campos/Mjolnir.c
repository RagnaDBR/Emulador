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
| - Nota: Potais no monte Mjolnir                                   |
\*-----------------------------------------------------------------*/

mjolnir_01,284,18,0	warp	mjol001	4,2,gef_fild04,261,359
mjolnir_01,378,256,0	warp	mjol01	2,2,mjolnir_02,31,258

// ------------------------------------------------------------------
mjolnir_02,28,258,0	warp	mjol01-1	2,2,mjolnir_01,374,256
mjolnir_02,326,289,0	warp	mjol02	1,1,mjolnir_03,24,258
mjolnir_02,361,18,0	warp	mjol03	4,2,mjolnir_06,366,380
mjolnir_02,79,365,0	warp	mjol013	2,1,mjo_dun01,52,17

// ------------------------------------------------------------------
mjolnir_03,21,258,0	warp	mjol02-1	2,2,mjolnir_02,323,289
mjolnir_03,212,17,0	warp	mjol04	4,2,mjolnir_07,214,380
mjolnir_03,242,204,0	warp	mjol05	1,1,mjolnir_04,125,208

// ------------------------------------------------------------------
mjolnir_04,122,208,0	warp	mjol05-1	1,1,mjolnir_03,239,204
mjolnir_04,160,46,0	warp	mjol06	4,2,mjolnir_08,159,370
mjolnir_04,387,174,0	warp	mjol07	2,2,mjolnir_05,19,171

// ------------------------------------------------------------------
mjolnir_05,16,171,0	warp	mjol07-1	2,2,mjolnir_04,384,174
mjolnir_05,220,382,0	warp	mjol08	4,2,mjolnir_12,220,29
mjolnir_05,235,16,0	warp	mjol09	4,2,mjolnir_10,235,378

// ------------------------------------------------------------------
mjolnir_06,18,331,0	warp	mjol002	2,4,gef_fild04,359,322
mjolnir_06,265,29,0	warp	mjol003	2,2,gef_fild00,267,379
mjolnir_06,366,383,0	warp	mjol03-1	4,2,mjolnir_02,361,21
mjolnir_06,382,377,0	warp	mjol10	2,4,mjolnir_07,19,377
mjolnir_06,383,74,0	warp	mjol11	2,4,mjolnir_07,20,77

// ------------------------------------------------------------------
mjolnir_07,156,16,0	warp	mjol004	4,2,prt_fild00,159,380
mjolnir_07,16,377,0	warp	mjol10-1	2,4,mjolnir_06,379,377
mjolnir_07,17,77,0	warp	mjol11-1	2,4,mjolnir_06,380,74
mjolnir_07,214,383,0	warp	mjol04-1	4,2,mjolnir_03,212,20
mjolnir_07,383,233,0	warp	mjol12	2,4,mjolnir_08,33,234
mjolnir_07,383,362,0	warp	mjol13	2,4,mjolnir_08,32,346

// ------------------------------------------------------------------
mjolnir_08,159,373,0	warp	mjol06a	1,1,mjolnir_04,160,49
mjolnir_08,185,28,0	warp	mjol14	17,2,mjolnir_09,196,364
mjolnir_08,29,346,0	warp	mjol13-1	2,4,mjolnir_07,380,362
mjolnir_08,30,234,0	warp	mjol12-1	2,4,mjolnir_07,380,233
mjolnir_08,369,257,0	warp	mjol15	2,4,mjolnir_10,18,258

// ------------------------------------------------------------------
mjolnir_09,106,28,0	warp	mjol005	4,2,prt_fild05,105,378
mjolnir_09,194,367,0	warp	mjol14-1	8,2,mjolnir_08,185,31
mjolnir_09,30,249,0	warp	mjol006	2,4,prt_fild00,380,249
mjolnir_09,300,28,0	warp	mjol007	4,2,prt_fild05,292,382
mjolnir_09,373,288,0	warp	mjol011	2,2,prt_fild01,23,292

// ------------------------------------------------------------------
mjolnir_10,15,258,0	warp	mjol15-1	2,4,mjolnir_08,366,257
mjolnir_10,235,381,0	warp	mjol09-1	4,2,mjolnir_05,235,19
mjolnir_10,265,13,0	warp	mjol008	3,2,prt_fild01,261,370
mjolnir_10,384,220,0	warp	mjol16	2,4,mjolnir_11,23,220
mjolnir_10,66,15,0	warp	mjol009	4,2,prt_fild01,66,370

// ------------------------------------------------------------------
mjolnir_11,174,20,0	warp	mjol010	4,2,prt_fild02,173,379
mjolnir_11,20,220,0	warp	mjol16-1	2,4,mjolnir_10,381,220

// ------------------------------------------------------------------
mjolnir_12,199,378,0	warp	mjol012	2,2,aldebaran,138,37
mjolnir_12,220,26,0	warp	mjol08-1	3,2,mjolnir_05,220,379
mjolnir_12,44,17,0	warp	mjol17	1,1,prt_maze01,17,111