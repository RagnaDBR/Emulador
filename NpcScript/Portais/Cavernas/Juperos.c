/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Potais em Juperos                                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Jupe_Cave ] -
// ------------------------------------------------------------------
jupe_cave,26,52,0	warp	jupecavewarp_1	1,1,juperos_01,53,247
jupe_cave,147,52,0	warp	jupecavewarp_2	1,1,yuno_fild07,212,175

// ------------------------------------------------------------------
// - [ Jupe_gate ] -
// ------------------------------------------------------------------
jupe_gate,28,145,0	warp	jupegatewarp_1	2,4,jupe_area1,100,222
jupe_gate,71,145,0	warp	jupegatewarp_2	2,4,jupe_area2,63,222
jupe_gate,49,55,0	warp	jupegatewarp_3	4,2,jupe_ele_r,49,30

// ------------------------------------------------------------------
// - [ Jupe_Area ] -
// ------------------------------------------------------------------
jupe_area1,103,222,0	warp	jupeareawarp_1	2,4,jupe_gate,31,145
jupe_area2,60,222,0	warp	jupeareawarp_2	2,4,jupe_gate,68,145

// ------------------------------------------------------------------
// - [ Juperos ] -
// ------------------------------------------------------------------
juperos_01,51,249,0	warp	juperoswarp_1	1,1,jupe_cave,36,51
juperos_02,33,59,0	warp	juperoswarp_2	1,1,juperos_01,120,72
