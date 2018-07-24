#pragma once

#define noEvol 255
#define stoneEvol 101

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
//									   dex    name        typ1     typ2     cr  exp   hp  atk  def  spa  spd  spd  evo     next

const struct pokemonBase Taubsi    = {  16, "Taubsi",    normal,  flug,    255,  55,  40,  90,  40,  45,  80,  75, noEvol, nullptr };
const struct pokemonBase Bibor     = {  15, "Bibor",     kaefer,  gift,     45, 159,  65,  90,  40,  45,  80,  75, noEvol, nullptr };
const struct pokemonBase Kokuna    = {  14, "Kokuna",    kaefer,  gift,    120,  71,  45,  25,  50,  25,  25,  35, 10,     &Bibor };
const struct pokemonBase Hornliu   = {  13, "Hornliu",   kaefer,  gift,    255,  52,  40,  35,  30,  20,  20,  50,  7,     &Kokuna };
const struct pokemonBase Smettbo   = {  12, "Smettbo",   kaefer,  flug,     45, 160,  60,  45,  50,  90,  80,  70, noEvol, nullptr };
const struct pokemonBase Safcon    = {  11, "Safcon",    kaefer,  keinTyp, 120,  72,  50,  20,  55,  25,  25,  30, 10,     &Smettbo };
const struct pokemonBase Raupy     = {  10, "Raupy",     kaefer,  keinTyp, 255,  53,  45,  30,  35,  20,  20,  45,  7,     &Safcon };
const struct pokemonBase Turtok    = {   9, "Turtok",    wasser,  keinTyp,  45, 210,  79,  83, 100,  85, 105,  78, noEvol, &Raupy };
const struct pokemonBase Schillok  = {   8, "Schillok",  wasser,  keinTyp,  45, 143,  59,  63,  80,  65,  80,  58, 32,     &Turtok };
const struct pokemonBase Schiggy   = {   7, "Schiggy",   wasser,  keinTyp,  45,  66,  44,  48,  65,  50,  64,  43, 16,     &Schillok };
const struct pokemonBase Glurak    = {   6, "Glutexo",   feuer,   flug,     45, 209,  78,  84,  78, 109,  85, 100, noEvol, nullptr };
const struct pokemonBase Glutexo   = {   5, "Glurak",    feuer,   keinTyp,  45, 142,  58,  64,  58,  80,  65,  80, 32,     &Glurak };
const struct pokemonBase Glumanda  = {   4, "Glumanda",  feuer,   keinTyp,  45,  70,  39,  52,  43,  60,  50,  65, 16,     &Glutexo };
const struct pokemonBase Bisaflor  = {   3, "Bisasam",   pflanze, gift,     45, 208,  80,  82,  83, 100, 100,  80, noEvol, nullptr };
const struct pokemonBase Bisaknosp = {   2, "Bisaknosp", pflanze, gift,     45, 141,  60,  62,  63,  80,  80,  60, 32,     &Bisaflor };
const struct pokemonBase Bisasam   = {   1, "Bisaflor",  pflanze, gift,     45,  64,  45,  49,  49,  65,  65,  45, 16,     &Bisaknosp };

