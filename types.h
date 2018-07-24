#pragma once

// Positionen des Typs im Array
#define normal   0
#define kampf    1
#define flug     2
#define gift     3
#define boden    4
#define stein    5
#define kaefer   6
#define geist    7
#define stahl    8
#define feuer    9
#define wasser   10
#define pflanze  11
#define elektro  12
#define psycho   13
#define eis      14
#define drache   15
#define unlicht  16
#define keinTyp  17

// Effektivität
#define sehr   2
#define normal 1
#define nicht  0.5
#define immun  0

double matrix[18][18] = {
//             Normal || Kampf || Flug  || Gift || Boden || Stein || Käfer || Geist || Stahl || Feuer || Wasser || Pflanze || Elektro || Psycho || Eis || Drache || Unlicht||	Kein Typ
/* Normal*/	 { normal  ,normal  ,normal  ,normal ,normal  ,nicht   ,normal  ,immun   ,nicht    ,normal  ,normal   ,normal    ,normal    ,normal   ,normal,normal   , normal,	normal },
/* Kampf*/   { sehr    ,normal  ,nicht   ,nicht  ,normal  ,sehr    ,nicht   ,immun   ,sehr     ,normal  ,normal   ,normal    ,normal    ,nicht    ,sehr  ,normal   , sehr  ,	normal },
/* Flug*/    { normal  ,sehr    ,normal  ,normal ,normal  ,nicht   ,sehr    ,normal  ,nicht    ,normal  ,normal   ,sehr      ,nicht     ,normal   ,normal,normal   , normal,	normal },
/* Gift*/    { normal  ,normal  ,normal  ,nicht  ,nicht   ,nicht   ,normal  ,nicht   ,immun    ,normal  ,normal   ,sehr      ,normal    ,normal   ,normal,normal   , normal,	normal },
/* Boden*/   { normal  ,normal  ,immun   ,sehr   ,normal  ,sehr    ,nicht   ,normal  ,sehr     ,sehr    ,normal   ,nicht     ,sehr      ,normal   ,normal,normal   , normal,	normal },
/* Gestein*/ { normal  ,nicht   ,sehr    ,normal ,nicht   ,normal  ,sehr    ,normal  ,nicht    ,sehr    ,normal   ,normal    ,normal    ,normal   ,sehr  ,normal   , normal,	normal },
/* Käfer*/   { normal  ,nicht   ,nicht   ,nicht  ,normal  ,normal  ,normal  ,nicht   ,nicht    ,nicht   ,normal   ,sehr      ,normal    ,sehr     ,normal,normal   , sehr  ,	normal },
/* Geist*/   { immun   ,normal  ,normal  ,normal ,normal  ,normal  ,normal  ,sehr    ,nicht    ,normal  ,normal   ,normal    ,normal    ,sehr     ,normal,normal   , nicht ,	normal },
/* Stahl*/   { normal  ,normal  ,normal  ,normal ,normal  ,sehr    ,normal  ,normal  ,nicht    ,nicht   ,nicht    ,normal    ,nicht     ,normal   ,sehr  ,normal   , normal,	normal },
/* Feuer*/   { normal  ,normal  ,normal  ,normal ,normal  ,nicht   ,sehr    ,normal  ,sehr     ,nicht   ,nicht    ,sehr      ,normal    ,normal   ,sehr  ,nicht    , normal,	normal },
/* Wasser*/  { normal  ,normal  ,normal  ,normal ,sehr    ,sehr    ,normal  ,normal  ,normal   ,sehr    ,nicht    ,nicht     ,normal    ,normal   ,normal,nicht    , normal,	normal },
/* Pflanze*/ { normal  ,normal  ,nicht   ,nicht  ,sehr    ,sehr    ,nicht   ,normal  ,nicht    ,nicht   ,sehr     ,nicht     ,normal    ,normal   ,normal,nicht    , normal,	normal },
/* Elektro*/ { normal  ,normal  ,sehr    ,normal ,immun   ,normal  ,normal  ,normal  ,normal   ,normal  ,normal   ,nicht     ,nicht     ,normal   ,normal,nicht    , normal,	normal },
/* Psycho*/  { normal  ,sehr    ,normal  ,sehr   ,normal  ,normal  ,normal  ,normal  ,nicht    ,normal  ,normal   ,normal    ,normal    ,nicht    ,normal,normal   , immun ,	normal },
/* Eis*/     { normal  ,normal  ,sehr    ,normal ,sehr    ,normal  ,normal  ,normal  ,nicht    ,nicht   ,nicht    ,sehr      ,normal    ,normal   ,nicht ,sehr     , normal,	normal },
/* Drache*/  { normal  ,normal  ,normal  ,normal ,normal  ,normal  ,normal  ,normal  ,nicht    ,normal  ,normal   ,normal    ,normal    ,normal   ,normal,sehr     , normal,	normal },
/* Unlicht*/ { normal  ,normal  ,normal  ,normal ,normal  ,normal  ,normal  ,sehr    ,nicht    ,normal  ,normal   ,normal    ,normal    ,sehr     ,normal,normal   , nicht ,	normal },

/* Kein Typ*/{ normal  ,normal  ,normal  ,normal ,normal  ,normal  ,normal  ,normal  ,normal   ,normal  ,normal   ,normal    ,normal    ,normal   ,normal,normal   , normal,  normal }

};

// Multiplikator ausrechnen
double getMultiplikator(int attackType,int defenseType1,int defenseType2) {

	return (matrix[attackType][defenseType1])*(matrix[attackType][defenseType2]);

}
