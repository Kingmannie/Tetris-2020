#include "Globals.h"

HWND GameHandle;
DWORD Polygonstarttime, Polygonendtime, starttime, endtime;
GRIDPOS grid[12][20];

int dscore = 0;
int dlevel = 1;
int dlines = 0;

int PolygonX = 300;
int PolygonY = 10;

int blocknumber;
int firstblock;
int randblock;
int nextblocknumber;

int Polygonspeed = 1;
int rotation = 1;//Initial rotation value of the block.
int blockdropspeed = 500;

int Shapex1, Shapey1, Shapex2, Shapey2, Shapex3, Shapey3, Shapex4, Shapey4;