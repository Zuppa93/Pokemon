#pragma once

#include "types.h"

#define noEvol 255
#define stoneThunder 101
#define stoneMoon 102
#define stoneFire 103
#define stoneLeaf 104

typedef unsigned char byte;

struct pokemonBase{
	const int natDex;
	const char *name;
	const byte typ1;
	const byte typ2;
	const byte catchrate;
	const int exp;
	const byte hp;
	const byte attack;
	const byte defense;
	const byte spAttack;
	const byte spDefense;
	const byte speed;
	const byte evolveLvl;
	const struct pokemonBase *evolution;
};
//									     dex    name       typ1     typ2      cr  exp   hp  atk  def  spa  spd  spd  evo           next

const struct pokemonBase Digdri     = {  51, "Digdri",     boden,   keinTyp,  50, 153,  35, 100,  50,  50,  70, 120, noEvol,       nullptr };
const struct pokemonBase Digda      = {  50, "Digda",      boden,   keinTyp, 255,  81,  10,  55,  25,  35,  45,  95, 26,           &Digdri };
const struct pokemonBase Omot       = {  49, "Omot",       kaefer,  gift,     75, 138,  70,  65,  60,  90,  75,  90, noEvol,       nullptr };
const struct pokemonBase Bluzuk     = {  48, "Bluzuk",     kaefer,  gift,    190,  75,  60,  55,  50,  40,  55,  45, 31,		   &Omot };
const struct pokemonBase Parasek    = {  47, "Parasek",    kaefer,  pflanze,  75, 128,  60,  95,  80,  60,  80,  30, noEvol,       nullptr };
const struct pokemonBase Paras      = {  46, "Paras",      kaefer,  pflanze, 190,  70,  35,  70,  55,  45,  55,  25, 24,           &Parasek };
const struct pokemonBase Giflor     = {  45, "Giflor",     pflanze, gift,     45, 184,  75,  80,  85, 110,  90,  50, noEvol,       nullptr };
const struct pokemonBase Duflor     = {  44, "Duflor",     pflanze, gift,    120, 132,  60,  65,  70,  85,  75,  40, stoneLeaf,    &Giflor };
const struct pokemonBase Myrapla    = {  43, "Myrapla",    pflanze, gift,    255,  78,  45,  50,  55,  75,  65,  30, 21,           &Duflor };
const struct pokemonBase Golbat     = {  42, "Golbat",     gift,    flug,     90, 171,  71,  80,  70,  65,  75,  90, noEvol,       nullptr };
const struct pokemonBase Zubat      = {  41, "Zubat",      gift,    flug,    255,  54,  40,  45,  35,  30,  40,  55, 22,           &Golbat };
const struct pokemonBase Knuddeluff = {  40, "Knuddeluff", normal,  keinTyp,  50, 109, 140,  70,  45,  85,  50,  45, noEvol,       nullptr };
const struct pokemonBase Pummeluff  = {  39, "Pummeluff",  normal,  keinTyp, 170,  76, 115,  45,  20,  45,  25,  20, stoneMoon,    &Knuddeluff };
const struct pokemonBase Vulnona    = {  38, "Vulnona",    feuer,   keinTyp,  75, 178,  73,  76,  75,  81, 100, 100, noEvol,       nullptr };
const struct pokemonBase Vulpix     = {  37, "Vulpix",     feuer,   keinTyp, 190,  63,  38,  41,  40,  50,  65,  65, stoneFire,    &Vulnona };
const struct pokemonBase Pixi       = {  36, "Pixi",       normal,  keinTyp,  25, 129,  95,  70,  73,  95,  90,  60, noEvol,       nullptr };
const struct pokemonBase Piepi      = {  35, "Piepi",      normal,  keinTyp, 150,  68,  70,  45,  48,  60,  65,  35, stoneMoon,    &Pixi };
const struct pokemonBase Nidoking   = {  34, "Nidoking",   gift,    boden,    45, 195,  81, 102,  77,  85,  75,  85, noEvol,       nullptr };
const struct pokemonBase Nidorino   = {  33, "Nidorino",   gift,    keinTyp, 120, 118,  61,  72,  57,  55,  55,  65, stoneMoon,    &Nidoking };
const struct pokemonBase NidoranM   = {  32, "NidoranM",   gift,    keinTyp, 235,  60,  46,  57,  40,  40,  40,  50, 16,           &Nidorino };
const struct pokemonBase Nidoqueen  = {  31, "Nidoqueen",  gift,    boden,    45, 194,  90,  92,  87,  75,  85,  76, noEvol,       nullptr };
const struct pokemonBase Nidorina   = {  30, "Nidorina",   gift,    keinTyp, 120, 117,  70,  62,  67,  55,  55,  56, stoneMoon,    &Nidoqueen };
const struct pokemonBase NidoranW   = {  29, "NidoranW",   gift,    keinTyp, 235,  59,  55,  47,  52,  40,  40,  41, 16,		   &Nidorina };
const struct pokemonBase Sandamer   = {  28, "Sandamer",   boden,   keinTyp,  90, 163,  75, 100, 110,  45,  55,  65, noEvol,       nullptr };
const struct pokemonBase Sandan     = {  27, "Sandan",     boden,   keinTyp, 255,  93,  50,  75,  85,  20,  30,  40, 22,           &Sandamer };
const struct pokemonBase Raichu     = {  26, "Raichu",     elektro, keinTyp,  75, 122,  60,  90,  55,  90,  80, 110, noEvol,       nullptr };
const struct pokemonBase Pikachu    = {  25, "Pikachu",    elektro, keinTyp, 190,  82,  35,  55,  40,  50,  50,  90, stoneThunder, &Raichu };
const struct pokemonBase Arbok	    = {  24, "Arbok",      gift,    keinTyp,  90, 147,  60,  95,  69,  65,  79,  80, noEvol,	   nullptr };
const struct pokemonBase Rettan     = {  23, "Rettan",     gift,    keinTyp, 255,  62,  35,  60,  44,  40,  45,  55, 22,           &Arbok };
const struct pokemonBase Ibitak     = {  22, "Ibitak",     normal,  flug,     90, 162,  65,  90,  65,  61,  61, 100, noEvol,       nullptr };
const struct pokemonBase Habitak    = {  21, "Habitak",    normal,  flug,    255,  58,  40,  60,  30,  31,  31,  70, 20,           &Ibitak };
const struct pokemonBase Rattikarl  = {  20, "Rattikarl",  normal,  keinTyp, 127, 116,  55,  81,  60,  50,  70,  97, noEvol,       nullptr };
const struct pokemonBase Rattfratz  = {  19, "Rattfratz",  normal,  keinTyp, 255,  57,  30,  56,  35,  25,  35,  72, 20,           &Rattikarl };
const struct pokemonBase Tauboss    = {  18, "Tauboss",    normal,  flug,     45, 172,  83,  80,  75,  70,  70, 101, noEvol,       nullptr };
const struct pokemonBase Tauboga    = {  17, "Tauboga",    normal,  flug,    120, 113,  63,  60,  55,  50,  50,  71, 36,	       &Tauboss };
const struct pokemonBase Taubsi     = {  16, "Taubsi",     normal,  flug,    255,  55,  40,  45,  40,  35,  35,  53, 18,	       &Tauboga };
const struct pokemonBase Bibor      = {  15, "Bibor",      kaefer,  gift,     45, 159,  65,  90,  40,  45,  80,  75, noEvol,       nullptr };
const struct pokemonBase Kokuna     = {  14, "Kokuna",     kaefer,  gift,    120,  71,  45,  25,  50,  25,  25,  35, 10,           &Bibor };
const struct pokemonBase Hornliu    = {  13, "Hornliu",    kaefer,  gift,    255,  52,  40,  35,  30,  20,  20,  50,  7,           &Kokuna };
const struct pokemonBase Smettbo    = {  12, "Smettbo",    kaefer,  flug,     45, 160,  60,  45,  50,  90,  80,  70, noEvol,       nullptr };
const struct pokemonBase Safcon     = {  11, "Safcon",     kaefer,  keinTyp, 120,  72,  50,  20,  55,  25,  25,  30, 10,           &Smettbo };
const struct pokemonBase Raupy      = {  10, "Raupy",      kaefer,  keinTyp, 255,  53,  45,  30,  35,  20,  20,  45,  7,           &Safcon };
const struct pokemonBase Turtok     = {   9, "Turtok",     wasser,  keinTyp,  45, 210,  79,  83, 100,  85, 105,  78, noEvol,       &Raupy };
const struct pokemonBase Schillok   = {   8, "Schillok",   wasser,  keinTyp,  45, 143,  59,  63,  80,  65,  80,  58, 32,           &Turtok };
const struct pokemonBase Schiggy    = {   7, "Schiggy",    wasser,  keinTyp,  45,  66,  44,  48,  65,  50,  64,  43, 16,           &Schillok };
const struct pokemonBase Glurak     = {   6, "Glutexo",    feuer,   flug,     45, 209,  78,  84,  78, 109,  85, 100, noEvol,       nullptr };
const struct pokemonBase Glutexo    = {   5, "Glurak",     feuer,   keinTyp,  45, 142,  58,  64,  58,  80,  65,  80, 32,           &Glurak };
const struct pokemonBase Glumanda   = {   4, "Glumanda",   feuer,   keinTyp,  45,  70,  39,  52,  43,  60,  50,  65, 16,           &Glutexo };
const struct pokemonBase Bisaflor   = {   3, "Bisaflor",   pflanze, gift,     45, 208,  80,  82,  83, 100, 100,  80, noEvol,       nullptr };
const struct pokemonBase Bisaknosp  = {   2, "Bisaknosp",  pflanze, gift,     45, 141,  60,  62,  63,  80,  80,  60, 32,           &Bisaflor };
const struct pokemonBase Bisasam    = {   1, "Bisasam",    pflanze, gift,     45,  64,  45,  49,  49,  65,  65,  45, 16,           &Bisaknosp };
