#pragma once

#define WIN32_LEAN_AND_MEAN//Compile only necessary elements

#include <windows.h>// include all the windows headers
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//#include <iostream>
//#include <string.h>
//#include <gdi32.lib>
//gdi32.lib

//using namespace std;

// defines for windows 
#define WINDOW_CLASS_NAME "WINCLASS1"
#define WINDOW_WIDTH 900
#define WINDOW_HEIGHT 860

// Macros
#define KEYDOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)
#define KEYUP(vk_code)   ((GetAsyncKeyState(vk_code) & 0x8000) ? 0 : 1)


// Globals
extern HWND GameHandle;
extern DWORD Polygonstarttime, Polygonendtime, endtime, starttime;

//custom extern defined.
extern int PolygonX;
extern int PolygonY;
extern int blocknumber;
extern int nextblocknumber;
extern int Polygonspeed;
extern int blockdropspeed;
extern int rotation;
extern int Shapex1, Shapey1, Shapex2, Shapey2, Shapex3, Shapey3, Shapex4, Shapey4;
extern int firstblock;
extern int randblock;
extern int dscore, dlevel, dlines;



// Function Prototypes
void Main_Loop();
void Initialise();
void Clear_Polygon(int rotate);
void Draw_Polygon_L(int rotate);
void Draw_Polygon_T(int rotate);
void Draw_Polygon_S(int rotate);
void Draw_Polygon_square();
void Draw_Polygon_rect(int rotate);
void Dropblock();
void Draw_Border();
void Text();
void generateblock();
void nextblock();
void blankoutnext();
void gameovercheck();
void resetgame();
void clearline();

//custom structures defined
struct GRIDPOS
{
	bool taken;
};

//my array of boolean values.
extern GRIDPOS grid[12][20];