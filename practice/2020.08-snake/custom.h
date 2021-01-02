#ifndef CURSES
#undef UNI_OBJ
#define UNI_OBJ(c) 70,obj[c<7?c:c+rand()%(int)(sizeof(obj)/sizeof(*obj)-7)]
static const char *obj[]=
#if 0 // default
//{"＋","　","⮝","⮟","⮜","⮞","Ｏ","＊"};
{"＋","　","▲","▼","◀","▶","🅞 ","＊"};
#else // emoji
/* stand, null, up, down, left, right, body */
{"😐","　","😝","😛","🤪","😜","🍏",
/* food */
"🍎","🍄","🍅","🍇","🍉","🍊","🍋","🍌","🍍","🍐","🍑",
"🍒","🍓","🍔","🍕","🍖","🍗","🍞","🍩","🍬","🍭","🍰"};
#endif
#else
#undef WALL
#undef HEAD
#undef BODY
#undef BG
#undef WB
#undef HB
#undef BS
#undef BB
#define WALL COLOR_CYAN
#define HEAD COLOR_RED
#define BODY COLOR_GREEN
#define BG COLOR_WHITE
#define WB COLOR_BLACK
#define HB COLOR_BLACK
#define BS COLOR_BLACK
#define BB COLOR_BLACK
#endif
