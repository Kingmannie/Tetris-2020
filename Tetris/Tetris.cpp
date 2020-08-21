#include "Globals.h"

//this value defines the status of the block. 0=not active, 1=active.
int blockstatus = 0;
//value to carry the dynamic value of the scores and numerical outputs of the game.
char dynamicvalue[2];

void Main_Loop()
{

	//Keypress escape ends the game.  Used at top of loop for maximum efficiency.
	if (KEYDOWN(VK_ESCAPE))
	{
		SendMessage(GameHandle, WM_CLOSE, 0, 0);
	}

	//Timer to drop blocks!
	endtime = (GetTickCount() - starttime);
	if ((int)endtime > blockdropspeed)//This conditional statement defines the interval between drawing. redrawing the shape.
	{

		Dropblock();
		starttime = GetTickCount();//This code defines and resets the interval to keep the loop continous to call drop the block continiously.

	}

	Polygonendtime = (GetTickCount() - Polygonstarttime);

	if ((int)Polygonendtime > 1)
	{
		//If left is pressed - Clear block, redraw specific to rotation, decrement x value by 40 to move block left by 40 pixels.
		if (KEYDOWN(VK_LEFT))
		{
			if (blocknumber == 1 && blockstatus == 1)
			{
				if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex2 - 1][Shapey2].taken == false && rotation == 1)
				{

					Clear_Polygon(rotation);
					PolygonX -= 40;

					//change the array values.
					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					//change the graphics.
					Draw_Polygon_L(rotation);


				}
				else if (Shapex2 > 0 && grid[Shapex2 - 1][Shapey2].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 2)
				{

					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);

				}
				else if (Shapex4 > 0 && grid[Shapex2 - 1][Shapey2].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 3)
				{

					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);


				}
				else if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 4)
				{

					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);

				}
			}
			else if (blocknumber == 2 && blockstatus == 1)
			{
				if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex3 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex4 > 0 && grid[Shapex4 - 1][Shapey4].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && rotation == 3)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex2 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex2 - 1][Shapey2].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 4)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}

			}
			else if (blocknumber == 3 && blockstatus == 1)
			{
				if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex2 - 1][Shapey2].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_S(rotation);

				}
				else if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex3 - 1][Shapey3].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_S(rotation);

				}

			}
			else if (blocknumber == 4 && blockstatus == 1)
			{
				if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex2 - 1][Shapey2].taken == false)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_square();
				}
			}
			else if (blocknumber == 5 && blockstatus == 1)
			{
				if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_rect(rotation);
				}
				else if (Shapex1 > 0 && grid[Shapex1 - 1][Shapey1].taken == false && grid[Shapex2 - 1][Shapey2].taken == false
					&& grid[Shapex3 - 1][Shapey3].taken == false && grid[Shapex4 - 1][Shapey4].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX -= 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1--;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2--;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3--;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4--;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_rect(rotation);
				}

			}

		}


		//If right is pressed - Clear block, redraw specific to rotation, increment x value by 40 to move block right across screen.
		if (KEYDOWN(VK_RIGHT))
		{
			//Call collision detection function here in regards to movement right and rotation value
			if (blocknumber == 1 && blockstatus == 1)
			{
				if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex2 + 1][Shapey2].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					//change the array values.
					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);
				}
				else if (Shapex1 < 11 && grid[Shapex1 + 1][Shapey1].taken == false && grid[Shapex3 + 1][Shapey3].taken == false && grid[Shapex4 + 1][Shapey4].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);
				}
				else if (Shapex1 < 11 && grid[Shapex1 + 1][Shapey1].taken == false && grid[Shapex2 + 1][Shapey2].taken == false && rotation == 3)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);
				}
				else if (Shapex2 < 11 && grid[Shapex2 + 1][Shapey2].taken == false && grid[Shapex3 + 1][Shapey3].taken == false && grid[Shapex4 + 1][Shapey4].taken == false && rotation == 4)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_L(rotation);
				}
			}
			else if (blocknumber == 2 && blockstatus == 1)
			{
				if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex3 + 1][Shapey3].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex2 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex2 + 1][Shapey2].taken == false && grid[Shapex1 + 1][Shapey1].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex1 < 11 && grid[Shapex1 + 1][Shapey1].taken == false && grid[Shapex3 + 1][Shapey3].taken == false && rotation == 3)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
				else if (Shapex3 < 11 && grid[Shapex3 + 1][Shapey3].taken == false && grid[Shapex1 + 1][Shapey1].taken == false && grid[Shapex4 + 1][Shapey4].taken == false && rotation == 4)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_T(rotation);
				}
			}
			else if (blocknumber == 3 && blockstatus == 1)
			{
				if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex3 + 1][Shapey3].taken == false && rotation == 1)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_S(rotation);
				}
				else if (Shapex4 < 11 && grid[Shapex1 + 1][Shapey1].taken == false && grid[Shapex2 + 1][Shapey2].taken == false && grid[Shapex4 + 1][Shapey4].taken == false && rotation == 2)
				{
					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_S(rotation);
				}
			}
			else if (blocknumber == 4 && blockstatus == 1)
			{
				if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex3 + 1][Shapey3].taken == false)
				{
					Clear_Polygon(4);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_square();
				}
			}
			else if (blocknumber == 5 && blockstatus == 1)
			{
				if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && rotation == 1)
				{

					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_rect(rotation);
				}
				else if (Shapex4 < 11 && grid[Shapex4 + 1][Shapey4].taken == false && grid[Shapex3 + 1][Shapey3].taken == false &&
					grid[Shapex2 + 1][Shapey2].taken == false && grid[Shapex1 + 1][Shapey1].taken == false && rotation == 2)
				{

					Clear_Polygon(rotation);
					PolygonX += 40;

					grid[Shapex1][Shapey1].taken = false;
					Shapex1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapex2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapex3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapex4++;

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;

					Draw_Polygon_rect(rotation);
				}

			}

		}
		//If down is pressed - Clear block, redraw specific to rotation, increment x value by 40 to make shape go left by block diameter.
		if (KEYDOWN(VK_DOWN))
		{//Call collision detection function here in regards to drop.  Much like automated drop collision detection function.
			if (blocknumber == 1 && blockstatus == 1)
			{
				if (rotation == 1 && Shapey2 < 19 && grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_L(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				else if (rotation == 2 && Shapey4 < 19 && grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_L(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				else if (rotation == 3 && Shapey1 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false
					&& grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_L(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				else if (rotation == 4 && Shapey1 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_L(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
			}
			else if (blocknumber == 2 && blockstatus == 1)
			{
				if (rotation == 1 && Shapey3 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_T(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				if (rotation == 2 && Shapey4 < 19 && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_T(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				if (rotation == 3 && Shapey2 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false
					&& grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_T(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				if (rotation == 4 && Shapey1 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_T(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
			}
			else if (blocknumber == 3 && blockstatus == 1)
			{
				if (rotation == 1 && Shapey3 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_S(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				if (rotation == 2 && Shapey4 < 19 && grid[Shapex4][Shapey4 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_S(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
			}
			else if (blocknumber == 4 && blockstatus == 1)
			{
				if (Shapey2 < 19 && grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_square();

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
			}
			else if (blocknumber == 5 && blockstatus == 1)
			{
				if (rotation == 1 && Shapey3 < 19 && grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false
					&& grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_rect(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}
				else if (rotation == 2 && Shapey4 < 19 && grid[Shapex4][Shapey4 + 1].taken == false)
				{
					Clear_Polygon(rotation);

					grid[Shapex1][Shapey1].taken = false;
					Shapey1++;
					grid[Shapex2][Shapey2].taken = false;
					Shapey2++;
					grid[Shapex3][Shapey3].taken = false;
					Shapey3++;
					grid[Shapex4][Shapey4].taken = false;
					Shapey4++;

					PolygonY += 40;
					Draw_Polygon_rect(rotation);

					grid[Shapex1][Shapey1].taken = true;
					grid[Shapex2][Shapey2].taken = true;
					grid[Shapex3][Shapey3].taken = true;
					grid[Shapex4][Shapey4].taken = true;
				}

			}

		}
		if (KEYDOWN(VK_UP))
		{
			if (blocknumber == 1 && blockstatus == 1)
			{
				rotation++;
				switch (rotation)
				{

				case 2:
				{
					if (Shapey2 != 19)
					{
						Clear_Polygon(1);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1++;
						grid[Shapex2][Shapey2].taken = false;
						Shapey2--;
						grid[Shapex3][Shapey3].taken = false;
						Shapey3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4--;
						Shapey4 = Shapey4 + 2;

						Draw_Polygon_L(2);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						//to cancel rotation.
						rotation--;
					}
					break;
				}
				case 3:
				{
					if (Shapex2 != 0)
					{
						Clear_Polygon(2);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1++;
						grid[Shapex2][Shapey2].taken = false;
						Shapex2++;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4 = Shapex4 - 2;
						Shapey4--;

						Draw_Polygon_L(3);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}

					break;
				}
				case 4:
				{
					if (Shapey2 != 0)
					{
						Clear_Polygon(3);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1--;
						grid[Shapex2][Shapey2].taken = false;
						Shapey2++;
						grid[Shapex3][Shapey3].taken = false;
						Shapey3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4++;
						Shapey4 = Shapey4 - 2;

						Draw_Polygon_L(4);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}

					break;
				}
				case 5:
				{
					if (Shapex2 != 11)
					{
						Clear_Polygon(4);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1--;
						grid[Shapex2][Shapey2].taken = false;
						Shapex2--;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapey4++;
						Shapex4 = Shapex4 + 2;

						Draw_Polygon_L(1);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;

						rotation = 1;
					}
					else
					{
						rotation--;
					}
					break;

				}

				}

			}
			else if (blocknumber == 2 && blockstatus == 1)
			{
				rotation++;
				switch (rotation)
				{

				case 2:
				{
					if (Shapey1 != 0)
					{
						Clear_Polygon(1);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1++;
						Shapey1--;
						grid[Shapex2][Shapey2].taken = false;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3--;
						Shapey3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4--;
						Shapey4++;

						Draw_Polygon_T(2);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						//to cancel rotation.
						rotation--;
					}
					break;
				}
				case 3:
				{
					if (Shapex2 != 11)
					{
						Clear_Polygon(2);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1++;
						Shapey1++;
						grid[Shapex2][Shapey2].taken = false;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3++;
						Shapey3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4--;
						Shapey4--;

						Draw_Polygon_T(3);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}

					break;
				}
				case 4:
				{
					if (Shapey2 != 19)
					{
						Clear_Polygon(3);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1--;
						Shapey1++;
						grid[Shapex2][Shapey2].taken = false;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3++;
						Shapey3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4++;
						Shapey4--;

						Draw_Polygon_T(4);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}

					break;
				}
				case 5:
				{
					if (Shapex2 != 0)
					{
						Clear_Polygon(4);

						grid[Shapex1][Shapey1].taken = false;
						Shapex1--;
						Shapey1--;
						grid[Shapex2][Shapey2].taken = false;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3--;
						Shapey3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapey4++;
						Shapex4++;

						Draw_Polygon_T(1);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;

						rotation = 1;
					}
					else
					{
						rotation--;
					}
					break;

				}

				}

			}
			else if (blocknumber == 3 && blockstatus == 1)
			{

				rotation++;
				switch (rotation)
				{

				case 2:
				{
					if (Shapey1 != 19)
					{
						Clear_Polygon(1);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1--;
						grid[Shapex2][Shapey2].taken = false;
						Shapey2++;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4--;
						Shapey4 = Shapey4 + 2;

						Draw_Polygon_S(2);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}
					break;

				}
				case 3:
				{
					if (Shapex2 != 11)
					{
						Clear_Polygon(2);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1++;
						grid[Shapex2][Shapey2].taken = false;
						Shapey2--;
						grid[Shapex3][Shapey3].taken = false;
						Shapex3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4++;
						Shapey4 = Shapey4 - 2;

						Draw_Polygon_S(1);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;

						rotation = 1;
					}
					else
					{
						rotation--;
					}
					break;
				}

				}

			}
			else if (blocknumber == 5 && blockstatus == 1)
			{
				rotation++;
				switch (rotation)
				{
				case 2:
				{
					if (Shapey1 != 19 && Shapey1 != 18)
					{
						Clear_Polygon(1);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1--;
						Shapex1 = Shapex1 + 2;
						grid[Shapex2][Shapey2].taken = false;
						Shapex2++;
						grid[Shapex3][Shapey3].taken = false;
						Shapey3++;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4--;
						Shapey4 = Shapey4 + 2;

						Draw_Polygon_rect(2);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;
					}
					else
					{
						rotation--;
					}
					break;

				}
				case 3:
				{
					if (Shapex2 != 11 && Shapex1 != 0 && Shapex1 != 1)
					{
						Clear_Polygon(2);

						grid[Shapex1][Shapey1].taken = false;
						Shapey1++;
						Shapex1 = Shapex1 - 2;
						grid[Shapex2][Shapey2].taken = false;
						Shapex2--;
						grid[Shapex3][Shapey3].taken = false;
						Shapey3--;
						grid[Shapex4][Shapey4].taken = false;
						Shapex4++;
						Shapey4 = Shapey4 - 2;

						Draw_Polygon_rect(1);

						grid[Shapex1][Shapey1].taken = true;
						grid[Shapex2][Shapey2].taken = true;
						grid[Shapex3][Shapey3].taken = true;
						grid[Shapex4][Shapey4].taken = true;

						rotation = 1;
					}
					else
					{
						rotation--;
					}
					break;
				}

				}

			}

		}

		Polygonstarttime = GetTickCount();
	}
	//Text();//Print text on screen to see test array dynamically.
}

//Function "initialise()" declared in winmain to initialise the game.
void Initialise()
{
	dscore = dscore + 10;
	//increment false values across my boolean array to make initial game grid.
	for (int x = 0; x < 12; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			grid[x][y].taken = false;
		}
	}

	//call the random value of the block number here between 1 - 5.  Makes random shape appear.
	srand((unsigned)time(NULL));
	firstblock = (rand() % 5) + 1;

	Polygonstarttime = GetTickCount();
	starttime = GetTickCount();

	//make block number equal firstblock in order to make just the first block random and also generate the next block.
	blocknumber = firstblock;

	//call functions to allocate the number of the blocks properly. note the order that they are called in.
	nextblock();
	generateblock();

	Draw_Border();//Draw the border interface.
	Text();//Print text on screen.

}

void Dropblock()
{
	if (blocknumber == 1)//define the block
	{
		if (rotation == 1)//define the rotation value.
		{
			if (grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey2 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape

				Draw_Polygon_L(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;

			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				//blocknumber is equal to the randomly generated number local to the nextblock function.
				//this give the next block a value to display it ahead of the current block.
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 2)//check on rotation 2.
		{
			if (grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey4 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_L(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;


			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 3)//check on rotation 3.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false
				&& grid[Shapex4][Shapey4 + 1].taken == false && Shapey1 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_L(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;

			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 4)//check on rotation 4.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false && Shapey1 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_L(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;

			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
	}
	else if (blocknumber == 2)
	{
		if (rotation == 1)//define the rotation value.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey3 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_T(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 2)//check on rotation 2.
		{
			if (grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey4 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_T(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 3)//check on rotation 3.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false
				&& grid[Shapex4][Shapey4 + 1].taken == false && Shapey1 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_T(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 4)//check on rotation 4.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && Shapey1 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_T(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
	}
	else if (blocknumber == 3)
	{
		if (rotation == 1)//define the rotation value.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey3 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_S(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 2)//check on rotation 2.
		{
			if (grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey4 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_S(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
	}
	else if (blocknumber == 4)
	{
		if (grid[Shapex2][Shapey2 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey2 < 19)//define the place on the grid.
		{//checks all y values on the array because of rotation value.

			Clear_Polygon(4);//Clear the block specific to the rotation value

			grid[Shapex1][Shapey1].taken = false;//declare the current position as false
			Shapey1++;//increment the value of y to move the shape onto a different part of the array.
			grid[Shapex2][Shapey2].taken = false;
			Shapey2++;
			grid[Shapex3][Shapey3].taken = false;
			Shapey3++;
			grid[Shapex4][Shapey4].taken = false;
			Shapey4++;

			PolygonY += 40;//move the actual shape
			Draw_Polygon_square();//draw it with the rotation value

			grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
			grid[Shapex2][Shapey2].taken = true;
			grid[Shapex3][Shapey3].taken = true;
			grid[Shapex4][Shapey4].taken = true;
		}
		else
		{
			dscore++;
			blockstatus = 0;
			PolygonX = 300;
			PolygonY = 10;
			rotation = 1;
			blocknumber = randblock;
			nextblock();
			clearline();
			generateblock();
			gameovercheck();
			Text();
		}
	}
	else if (blocknumber == 5)
	{
		if (rotation == 1)//define the rotation value.
		{
			if (grid[Shapex1][Shapey1 + 1].taken == false && grid[Shapex2][Shapey2 + 1].taken == false
				&& grid[Shapex3][Shapey3 + 1].taken == false && grid[Shapex4][Shapey4 + 1].taken == false && Shapey1 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_rect(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}
		}
		else if (rotation == 2)//check on rotation 2.
		{
			if (grid[Shapex4][Shapey4 + 1].taken == false && Shapey4 < 19)//define the place on the grid.
			{//checks all y values on the array because of rotation value.

				Clear_Polygon(rotation);//Clear the block specific to the rotation value

				grid[Shapex1][Shapey1].taken = false;//declare the current position as false
				Shapey1++;//increment the value of y to move the shape onto a different part of the array.
				grid[Shapex2][Shapey2].taken = false;
				Shapey2++;
				grid[Shapex3][Shapey3].taken = false;
				Shapey3++;
				grid[Shapex4][Shapey4].taken = false;
				Shapey4++;

				PolygonY += 40;//move the actual shape
				Draw_Polygon_rect(rotation);//draw it with the rotation value

				grid[Shapex1][Shapey1].taken = true;//declare the new array position as taken.
				grid[Shapex2][Shapey2].taken = true;
				grid[Shapex3][Shapey3].taken = true;
				grid[Shapex4][Shapey4].taken = true;
			}
			else
			{
				dscore++;
				blockstatus = 0;
				PolygonX = 300;
				PolygonY = 10;
				rotation = 1;
				blocknumber = randblock;
				nextblock();
				clearline();
				generateblock();
				gameovercheck();
				Text();
			}

		}

	}

}

void nextblock()
{
	//graphics device context
	HDC        hdc;
	HBRUSH brush;

	//get the graphics device context for the window
	hdc = GetDC(GameHandle);
	brush = CreateSolidBrush(RGB(200, 200, 255));
	SelectObject(hdc, brush);

	//Declarations for the (x, y) spawn position of the polygon and the number of points.
	int num_points = 10;
	int x = 560;
	int y = 10;

	//I need to define 9 points for this polygon.
	POINT point_list[10];

	//Dimensions of my polygon.
	point_list[0].x = x;
	point_list[0].y = y;
	point_list[1].x = x + 310;
	point_list[1].y = y;
	point_list[2].x = x + 310;
	point_list[2].y = y + 10;
	point_list[3].x = x + 10;
	point_list[3].y = y + 10;
	point_list[4].x = x + 10;
	point_list[4].y = y + 210;
	point_list[5].x = x + 310;
	point_list[5].y = y + 210;
	point_list[6].x = x + 310;
	point_list[6].y = y;
	point_list[7].x = x + 320;
	point_list[7].y = y;
	point_list[8].x = x + 320;
	point_list[8].y = y + 220;
	point_list[9].x = x;
	point_list[9].y = y + 220;

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	//randomly generate a blocknumber and display it for the next falling block.
	randblock = (rand() % 5) + 1;
	nextblocknumber = randblock;

	switch (nextblocknumber)
	{
		//case statements.
	case 1:
	{

		PolygonX = 660;
		PolygonY = 70;
		blankoutnext();
		Draw_Polygon_L(1);
		PolygonX = 300;
		PolygonY = 10;

		break;
	}
	case 2:
	{

		PolygonX = 660;
		PolygonY = 70;
		blankoutnext();
		Draw_Polygon_T(1);
		PolygonX = 300;
		PolygonY = 10;
		break;
	}
	case 3:
	{

		PolygonX = 660;
		PolygonY = 70;
		blankoutnext();
		Draw_Polygon_S(1);
		PolygonX = 300;
		PolygonY = 10;
		break;
	}
	case 4:
	{

		PolygonX = 670;
		PolygonY = 70;
		blankoutnext();
		Draw_Polygon_square();
		PolygonX = 300;
		PolygonY = 10;
		break;
	}
	case 5:
	{

		PolygonX = 650;
		PolygonY = 80;
		blankoutnext();
		Draw_Polygon_rect(1);
		PolygonX = 300;
		PolygonY = 10;
		break;
	}
	}

	// release the device context
	DeleteObject(brush);
	ReleaseDC(GameHandle, hdc);
}

void blankoutnext()
{
	RECT BlankRect; // used to write a blank

	HBRUSH hbrush;
	HDC	hdc;

	hdc = GetDC(GameHandle);

	hbrush = CreateSolidBrush(RGB(0, 0, 0));

	BlankRect.left = 650;
	BlankRect.top = 70;
	BlankRect.right = 850;
	BlankRect.bottom = 200;
	FillRect(hdc, &BlankRect, hbrush);

	DeleteObject(hbrush);
	ReleaseDC(GameHandle, hdc);
}

void generateblock()
{

	switch (blocknumber)
	{
		//case statements.
	case 1:
	{
		grid[6][0].taken = true;
		grid[6][1].taken = true;
		grid[7][0].taken = true;
		grid[8][0].taken = true;

		Shapex1 = 6; Shapex2 = 6; Shapex3 = 7; Shapex4 = 8;
		Shapey1 = 0; Shapey2 = 1; Shapey3 = 0; Shapey4 = 0;

		Draw_Polygon_L(rotation);
		blockstatus = 1;

		break;
	}
	case 2:
	{
		grid[6][0].taken = true;
		grid[7][0].taken = true;
		grid[7][1].taken = true;
		grid[8][0].taken = true;

		Shapex1 = 6; Shapex2 = 7; Shapex3 = 7; Shapex4 = 8;
		Shapey1 = 0; Shapey2 = 0; Shapey3 = 1; Shapey4 = 0;

		Draw_Polygon_T(rotation);//Draw the block specific to the rotation value
		blockstatus = 1;

		break;
	}
	case 3:
	{
		grid[6][1].taken = true;
		grid[7][0].taken = true;
		grid[7][1].taken = true;
		grid[8][0].taken = true;

		Shapex1 = 6; Shapex2 = 7; Shapex3 = 7; Shapex4 = 8;
		Shapey1 = 1; Shapey2 = 0; Shapey3 = 1; Shapey4 = 0;

		Draw_Polygon_S(rotation);//Draw the block specific to the rotation value
		blockstatus = 1;

		break;
	}
	case 4:
	{
		grid[6][0].taken = true;
		grid[6][1].taken = true;
		grid[7][0].taken = true;
		grid[7][1].taken = true;

		Shapex1 = 6; Shapex2 = 6; Shapex3 = 7; Shapex4 = 7;
		Shapey1 = 0; Shapey2 = 1; Shapey3 = 0; Shapey4 = 1;

		Draw_Polygon_square();//Draw the block specific to the rotation value
		blockstatus = 1;

		break;
	}
	case 5:
	{
		grid[6][0].taken = true;
		grid[7][0].taken = true;
		grid[8][0].taken = true;
		grid[9][0].taken = true;

		Shapex1 = 6; Shapex2 = 7; Shapex3 = 8; Shapex4 = 9;
		Shapey1 = 0; Shapey2 = 0; Shapey3 = 0; Shapey4 = 0;

		Draw_Polygon_rect(rotation);//Draw the block specific to the rotation value
		blockstatus = 1;

		break;
	}

	}

}

void Draw_Polygon_L(int rotate)//GRIDPOS x, GRIDPOS y.?
{
	// graphics device context
	HDC			hdc;
	HBRUSH		blue_brush;

	//get the graphics device context for the window
	hdc = GetDC(GameHandle);

	blue_brush = CreateSolidBrush(RGB(255, 0, 0));
	SelectObject(hdc, blue_brush);

	//Number of points in the polygon. 
	int num_points = 7;

	//this will define the point list
	POINT point_list[7];

	switch (rotate)
	{
	case 1:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX + 120;//140
			point_list[0].y = PolygonY + 0;//140
			point_list[1].x = PolygonX + 120;//180
			point_list[1].y = PolygonY + 40;//140
			point_list[2].x = PolygonX + 40;//180
			point_list[2].y = PolygonY + 40;//220
			point_list[3].x = PolygonX + 40;//220
			point_list[3].y = PolygonY + 80;//220
			point_list[4].x = PolygonX;//220
			point_list[4].y = PolygonY + 80;//260
			point_list[5].x = PolygonX;//140
			point_list[5].y = PolygonY + 0;//260
			point_list[6].x = PolygonX + 120;//140
			point_list[6].y = PolygonY + 0;//140


		}
	} break;

	case 2:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX + 80;//140
			point_list[0].y = PolygonY + 120;//140
			point_list[1].x = PolygonX + 40;//180
			point_list[1].y = PolygonY + 120;//140
			point_list[2].x = PolygonX + 40;//180
			point_list[2].y = PolygonY + 40;//220
			point_list[3].x = PolygonX;//220
			point_list[3].y = PolygonY + 40;//220
			point_list[4].x = PolygonX;//220
			point_list[4].y = PolygonY + 0;//260
			point_list[5].x = PolygonX + 80;//140
			point_list[5].y = PolygonY + 0;//260
			point_list[6].x = PolygonX + 80;//140
			point_list[6].y = PolygonY + 120;//140`

		}
	} break;

	case 3:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX - 40;//140
			point_list[0].y = PolygonY + 80;//140
			point_list[1].x = PolygonX - 40;//180
			point_list[1].y = PolygonY + 40;//140
			point_list[2].x = PolygonX + 40;//180
			point_list[2].y = PolygonY + 40;//220
			point_list[3].x = PolygonX + 40;//220
			point_list[3].y = PolygonY + 0;//220
			point_list[4].x = PolygonX + 80;//220
			point_list[4].y = PolygonY + 0;//260
			point_list[5].x = PolygonX + 80;//140
			point_list[5].y = PolygonY + 80;//260
			point_list[6].x = PolygonX - 40;//140
			point_list[6].y = PolygonY + 80;//140`

		}
	} break;

	case 4:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX;//140
			point_list[0].y = PolygonY - 40;//140
			point_list[1].x = PolygonX + 40;//180
			point_list[1].y = PolygonY - 40;//140
			point_list[2].x = PolygonX + 40;//180
			point_list[2].y = PolygonY + 40;//220
			point_list[3].x = PolygonX + 80;//220
			point_list[3].y = PolygonY + 40;//220
			point_list[4].x = PolygonX + 80;//220
			point_list[4].y = PolygonY + 80;//260
			point_list[5].x = PolygonX;//140
			point_list[5].y = PolygonY + 80;//260
			point_list[6].x = PolygonX;//140
			point_list[6].y = PolygonY;//140

		}
	} break;

	default: {} break;
	} // end switch

	//Draw the polygon.
	Polygon(hdc, point_list, num_points);

	Sleep(100);//To handle delay in movement so shape wont fly off the screen fast.

	// release the device context
	DeleteObject(blue_brush);

	// release the device context
	ReleaseDC(GameHandle, hdc);
}

void Draw_Polygon_T(int rotate)
{
	// graphics device context
	HDC			hdc;
	HBRUSH		yellow_brush;

	// get the graphics device context for the window
	hdc = GetDC(GameHandle);

	yellow_brush = CreateSolidBrush(RGB(255, 255, 0));
	SelectObject(hdc, yellow_brush);

	//number of points for polygon
	int num_points = 9;

	// this will hold the point list
	POINT point_list[9];

	switch (rotate)
	{
	case 1:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX + 80;
			point_list[0].y = PolygonY + 80;
			point_list[1].x = PolygonX + 40;
			point_list[1].y = PolygonY + 80;
			point_list[2].x = PolygonX + 40;
			point_list[2].y = PolygonY + 40;
			point_list[3].x = PolygonX;
			point_list[3].y = PolygonY + 40;
			point_list[4].x = PolygonX;
			point_list[4].y = PolygonY;
			point_list[5].x = PolygonX + 120;
			point_list[5].y = PolygonY;
			point_list[6].x = PolygonX + 120;
			point_list[6].y = PolygonY + 40;
			point_list[7].x = PolygonX + 80;
			point_list[7].y = PolygonY + 40;
			point_list[8].x = PolygonX + 80;
			point_list[8].y = PolygonY + 80;

		} // end for index

	} break;

	case 2:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX;
			point_list[0].y = PolygonY + 40;
			point_list[1].x = PolygonX;
			point_list[1].y = PolygonY;
			point_list[2].x = PolygonX + 40;
			point_list[2].y = PolygonY;
			point_list[3].x = PolygonX + 40;
			point_list[3].y = PolygonY - 40;
			point_list[4].x = PolygonX + 80;
			point_list[4].y = PolygonY - 40;
			point_list[5].x = PolygonX + 80;
			point_list[5].y = PolygonY + 80;
			point_list[6].x = PolygonX + 40;
			point_list[6].y = PolygonY + 80;
			point_list[7].x = PolygonX + 40;
			point_list[7].y = PolygonY + 40;
			point_list[8].x = PolygonX;
			point_list[8].y = PolygonY + 40;

		} // end for index
	} break;

	case 3:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX + 40;
			point_list[0].y = PolygonY - 40;
			point_list[1].x = PolygonX + 80;
			point_list[1].y = PolygonY - 40;
			point_list[2].x = PolygonX + 80;
			point_list[2].y = PolygonY;
			point_list[3].x = PolygonX + 120;
			point_list[3].y = PolygonY;
			point_list[4].x = PolygonX + 120;
			point_list[4].y = PolygonY + 40;
			point_list[5].x = PolygonX;
			point_list[5].y = PolygonY + 40;
			point_list[6].x = PolygonX;
			point_list[6].y = PolygonY;
			point_list[7].x = PolygonX + 40;
			point_list[7].y = PolygonY;
			point_list[8].x = PolygonX + 40;
			point_list[8].y = PolygonY - 40;

		} // end for index
	} break;

	case 4:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX + 120;
			point_list[0].y = PolygonY;
			point_list[1].x = PolygonX + 120;
			point_list[1].y = PolygonY + 40;
			point_list[2].x = PolygonX + 80;
			point_list[2].y = PolygonY + 40;
			point_list[3].x = PolygonX + 80;
			point_list[3].y = PolygonY + 80;
			point_list[4].x = PolygonX + 40;
			point_list[4].y = PolygonY + 80;
			point_list[5].x = PolygonX + 40;
			point_list[5].y = PolygonY - 40;
			point_list[6].x = PolygonX + 80;
			point_list[6].y = PolygonY - 40;
			point_list[7].x = PolygonX + 80;
			point_list[7].y = PolygonY;
			point_list[8].x = PolygonX + 120;
			point_list[8].y = PolygonY;

		} // end for index
	} break;

	default: {} break;
	} // end switch

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	Sleep(100);// To handle delay in movement so shape wont fly off the screen fast.

	// release the device context
	DeleteObject(yellow_brush);
	ReleaseDC(GameHandle, hdc);
}

void Draw_Polygon_S(int rotate)
{

	HDC			hdc;      // graphics device context
	HBRUSH		green_brush;

	// get the graphics device context for the window
	hdc = GetDC(GameHandle);

	green_brush = CreateSolidBrush(RGB(0, 255, 0));
	SelectObject(hdc, green_brush);

	// now create list of random points for polygon
	int num_points = 9;//+rand()%8; // 3 + (number range 0-7) ie. 3-10

	// this will hold the point list
	POINT point_list[9];

	switch (rotate)
	{
	case 1:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX + 120;
			point_list[0].y = PolygonY;
			point_list[1].x = PolygonX + 120;
			point_list[1].y = PolygonY + 40;
			point_list[2].x = PolygonX + 80;
			point_list[2].y = PolygonY + 40;
			point_list[3].x = PolygonX + 80;
			point_list[3].y = PolygonY + 80;
			point_list[4].x = PolygonX;
			point_list[4].y = PolygonY + 80;
			point_list[5].x = PolygonX;
			point_list[5].y = PolygonY + 40;
			point_list[6].x = PolygonX + 40;
			point_list[6].y = PolygonY + 40;
			point_list[7].x = PolygonX + 40;
			point_list[7].y = PolygonY;
			point_list[8].x = PolygonX + 120;
			point_list[8].y = PolygonY;
		}
	} break;

	case 2:
	{
		for (int index = 0; index <= num_points; index++)
		{
			point_list[0].x = PolygonX;
			point_list[0].y = PolygonY;
			point_list[1].x = PolygonX + 40;
			point_list[1].y = PolygonY;
			point_list[2].x = PolygonX + 40;
			point_list[2].y = PolygonY + 40;
			point_list[3].x = PolygonX + 80;
			point_list[3].y = PolygonY + 40;
			point_list[4].x = PolygonX + 80;
			point_list[4].y = PolygonY + 120;
			point_list[5].x = PolygonX + 40;
			point_list[5].y = PolygonY + 120;
			point_list[6].x = PolygonX + 40;
			point_list[6].y = PolygonY + 80;
			point_list[7].x = PolygonX;
			point_list[7].y = PolygonY + 80;
			point_list[8].x = PolygonX;
			point_list[8].y = PolygonY;
		}
	} break;


	default: {} break;
	} // end switch

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	Sleep(100);// To handle delay in movement so shape wont fly off the screen fast.

	// release the device context
	DeleteObject(green_brush);
	ReleaseDC(GameHandle, hdc);
}

void Draw_Polygon_square()
{


	HDC			hdc;      // graphics device context
	HBRUSH		red_brush;

	// get the graphics device context for the window
	hdc = GetDC(GameHandle);

	red_brush = CreateSolidBrush(RGB(0, 255, 255));
	SelectObject(hdc, red_brush);

	// number of polygon points
	int num_points = 5;

	//point list
	POINT point_list[5];

	//Dimensions of my polygon.
	point_list[0].x = PolygonX;
	point_list[0].y = PolygonY;
	point_list[1].x = PolygonX + 80;
	point_list[1].y = PolygonY;
	point_list[2].x = PolygonX + 80;
	point_list[2].y = PolygonY + 80;
	point_list[3].x = PolygonX;
	point_list[3].y = PolygonY + 80;
	point_list[4].x = PolygonX;
	point_list[4].y = PolygonY;

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	Sleep(100);// To handle delay in movement so shape wont fly off the screen fast.

	// release the device context
	DeleteObject(red_brush);
	ReleaseDC(GameHandle, hdc);
}

void Draw_Polygon_rect(int rotate)
{

	//graphics device context
	HDC			hdc;
	HBRUSH		orange_brush;

	// get the graphics device context for the window
	hdc = GetDC(GameHandle);

	orange_brush = CreateSolidBrush(RGB(255, 0, 255));
	SelectObject(hdc, orange_brush);

	// now create list of random points for polygon.
	int num_points = 5;

	// this will hold the point list
	POINT point_list[5];

	switch (rotate)
	{
	case 1:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX;
			point_list[0].y = PolygonY;
			point_list[1].x = PolygonX + 160;
			point_list[1].y = PolygonY;
			point_list[2].x = PolygonX + 160;
			point_list[2].y = PolygonY + 40;
			point_list[3].x = PolygonX;
			point_list[3].y = PolygonY + 40;
			point_list[4].x = PolygonX;
			point_list[4].y = PolygonY;

		}
	} break;

	case 2:
	{
		for (int index = 0; index <= num_points; index++)
		{

			point_list[0].x = PolygonX + 80;
			point_list[0].y = PolygonY - 40;
			point_list[1].x = PolygonX + 120;
			point_list[1].y = PolygonY - 40;
			point_list[2].x = PolygonX + 120;
			point_list[2].y = PolygonY + 120;
			point_list[3].x = PolygonX + 80;
			point_list[3].y = PolygonY + 120;
			point_list[4].x = PolygonX + 80;
			point_list[4].y = PolygonY - 40;

		}
	} break;

	default: {} break;
	}

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	Sleep(100);// To handle delay in movement so shape wont fly off the screen fast.

	//release the device context
	DeleteObject(orange_brush);
	ReleaseDC(GameHandle, hdc);
}

void Clear_Polygon(int rotate)
{

	HDC        hdc;
	HBRUSH clear_brush;

	// get the graphics device context for the window.
	hdc = GetDC(GameHandle);

	clear_brush = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, clear_brush);

	//Start of code to clear the blocks and redraw!
	if (blocknumber == 1)//if start value = 1 then draw first shape
	{
		// now create list of points for polygon
		int num_points = 7;

		// point list
		POINT point_list[7];

		//Code to clear L Block.
		switch (rotate)
		{
		case 1:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX + 120;
				point_list[0].y = PolygonY + 0;
				point_list[1].x = PolygonX + 120;
				point_list[1].y = PolygonY + 40;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 40;
				point_list[3].y = PolygonY + 80;
				point_list[4].x = PolygonX;
				point_list[4].y = PolygonY + 80;
				point_list[5].x = PolygonX;
				point_list[5].y = PolygonY + 0;
				point_list[6].x = PolygonX + 120;
				point_list[6].y = PolygonY + 0;
			}
		} break;

		case 2:
		{

			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX + 80;
				point_list[0].y = PolygonY + 120;
				point_list[1].x = PolygonX + 40;
				point_list[1].y = PolygonY + 120;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX;
				point_list[3].y = PolygonY + 40;
				point_list[4].x = PolygonX;
				point_list[4].y = PolygonY;
				point_list[5].x = PolygonX + 80;
				point_list[5].y = PolygonY;
				point_list[6].x = PolygonX + 80;
				point_list[6].y = PolygonY + 120;
			}

		} break;

		case 3:
		{

			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX - 40;
				point_list[0].y = PolygonY + 80;
				point_list[1].x = PolygonX - 40;
				point_list[1].y = PolygonY + 40;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 40;
				point_list[3].y = PolygonY;
				point_list[4].x = PolygonX + 80;
				point_list[4].y = PolygonY;
				point_list[5].x = PolygonX + 80;
				point_list[5].y = PolygonY + 80;
				point_list[6].x = PolygonX - 40;
				point_list[6].y = PolygonY + 80;
			}
		} break;

		case 4:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX;
				point_list[0].y = PolygonY - 40;
				point_list[1].x = PolygonX + 40;
				point_list[1].y = PolygonY - 40;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 80;
				point_list[3].y = PolygonY + 40;
				point_list[4].x = PolygonX + 80;
				point_list[4].y = PolygonY + 80;
				point_list[5].x = PolygonX;
				point_list[5].y = PolygonY + 80;
				point_list[6].x = PolygonX;
				point_list[6].y = PolygonY;
			}
		} break;

		default: {} break;
		} // end switch
		Polygon(hdc, point_list, num_points);
	}
	//Code to clear T block
	else if (blocknumber == 2)
	{
		//number of points in polygon
		int num_points = 9;

		// this will hold the point list
		POINT point_list[9];

		switch (rotate)
		{
		case 1:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX + 80;
				point_list[0].y = PolygonY + 80;
				point_list[1].x = PolygonX + 40;
				point_list[1].y = PolygonY + 80;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX;
				point_list[3].y = PolygonY + 40;
				point_list[4].x = PolygonX;
				point_list[4].y = PolygonY;
				point_list[5].x = PolygonX + 120;
				point_list[5].y = PolygonY;
				point_list[6].x = PolygonX + 120;
				point_list[6].y = PolygonY + 40;
				point_list[7].x = PolygonX + 80;
				point_list[7].y = PolygonY + 40;
				point_list[8].x = PolygonX + 80;
				point_list[8].y = PolygonY + 80;

			} // end for index
		} break;

		case 2:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX;
				point_list[0].y = PolygonY + 40;
				point_list[1].x = PolygonX;
				point_list[1].y = PolygonY;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY;
				point_list[3].x = PolygonX + 40;
				point_list[3].y = PolygonY - 40;
				point_list[4].x = PolygonX + 80;
				point_list[4].y = PolygonY - 40;
				point_list[5].x = PolygonX + 80;
				point_list[5].y = PolygonY + 80;
				point_list[6].x = PolygonX + 40;
				point_list[6].y = PolygonY + 80;
				point_list[7].x = PolygonX + 40;
				point_list[7].y = PolygonY + 40;
				point_list[8].x = PolygonX;
				point_list[8].y = PolygonY + 40;

			} // end for index
		} break;

		case 3:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX + 40;
				point_list[0].y = PolygonY - 40;
				point_list[1].x = PolygonX + 80;
				point_list[1].y = PolygonY - 40;
				point_list[2].x = PolygonX + 80;
				point_list[2].y = PolygonY;
				point_list[3].x = PolygonX + 120;
				point_list[3].y = PolygonY;
				point_list[4].x = PolygonX + 120;
				point_list[4].y = PolygonY + 40;
				point_list[5].x = PolygonX;
				point_list[5].y = PolygonY + 40;
				point_list[6].x = PolygonX;
				point_list[6].y = PolygonY;
				point_list[7].x = PolygonX + 40;
				point_list[7].y = PolygonY;
				point_list[8].x = PolygonX + 40;
				point_list[8].y = PolygonY - 40;

			} // end for index
		} break;

		case 4:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX + 120;
				point_list[0].y = PolygonY;
				point_list[1].x = PolygonX + 120;
				point_list[1].y = PolygonY + 40;
				point_list[2].x = PolygonX + 80;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 80;
				point_list[3].y = PolygonY + 80;
				point_list[4].x = PolygonX + 40;
				point_list[4].y = PolygonY + 80;
				point_list[5].x = PolygonX + 40;
				point_list[5].y = PolygonY - 40;
				point_list[6].x = PolygonX + 80;
				point_list[6].y = PolygonY - 40;
				point_list[7].x = PolygonX + 80;
				point_list[7].y = PolygonY;
				point_list[8].x = PolygonX + 120;
				point_list[8].y = PolygonY;

			} // end for index
		} break;

		default: {} break;
		} // end switch
		Polygon(hdc, point_list, num_points);
	}
	//Code to clear S block
	else if (blocknumber == 3)
	{
		//now create list of points for polygon
		int num_points = 9;

		// this will hold the point list
		POINT point_list[9];

		switch (rotate)
		{
		case 1:
		{
			for (int index = 0; index <= num_points; index++)
			{

				point_list[0].x = PolygonX + 120;
				point_list[0].y = PolygonY;
				point_list[1].x = PolygonX + 120;
				point_list[1].y = PolygonY + 40;
				point_list[2].x = PolygonX + 80;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 80;
				point_list[3].y = PolygonY + 80;
				point_list[4].x = PolygonX;
				point_list[4].y = PolygonY + 80;
				point_list[5].x = PolygonX;
				point_list[5].y = PolygonY + 40;
				point_list[6].x = PolygonX + 40;
				point_list[6].y = PolygonY + 40;
				point_list[7].x = PolygonX + 40;
				point_list[7].y = PolygonY;
				point_list[8].x = PolygonX + 120;
				point_list[8].y = PolygonY;

			} // end for index
		} break;

		case 2:
		{
			for (int index = 0; index <= num_points; index++)
			{
				point_list[0].x = PolygonX;
				point_list[0].y = PolygonY;
				point_list[1].x = PolygonX + 40;
				point_list[1].y = PolygonY;
				point_list[2].x = PolygonX + 40;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX + 80;
				point_list[3].y = PolygonY + 40;
				point_list[4].x = PolygonX + 80;
				point_list[4].y = PolygonY + 120;
				point_list[5].x = PolygonX + 40;
				point_list[5].y = PolygonY + 120;
				point_list[6].x = PolygonX + 40;
				point_list[6].y = PolygonY + 80;
				point_list[7].x = PolygonX;
				point_list[7].y = PolygonY + 80;
				point_list[8].x = PolygonX;
				point_list[8].y = PolygonY;

			} // end for index
		} break;

		default: {} break;
		} // end switch
		Polygon(hdc, point_list, num_points);
	}
	else if (blocknumber == 4)
	{
		// now create list of points for polygon
		int num_points = 5;

		// this will hold the point list
		POINT point_list[5];

		point_list[0].x = PolygonX;
		point_list[0].y = PolygonY;
		point_list[1].x = PolygonX + 80;
		point_list[1].y = PolygonY;
		point_list[2].x = PolygonX + 80;
		point_list[2].y = PolygonY + 80;
		point_list[3].x = PolygonX;
		point_list[3].y = PolygonY + 80;
		point_list[4].x = PolygonX;
		point_list[4].y = PolygonY;

		Polygon(hdc, point_list, num_points);
	}

	//Code to clear rectangle block
	else if (blocknumber == 5)
	{
		//list of points for polygon
		int num_points = 5;

		//point list
		POINT point_list[5];

		switch (rotate)
		{
		case 1:
		{
			for (int index = 0; index <= num_points; index++)
			{

				point_list[0].x = PolygonX;
				point_list[0].y = PolygonY;
				point_list[1].x = PolygonX + 160;
				point_list[1].y = PolygonY;
				point_list[2].x = PolygonX + 160;
				point_list[2].y = PolygonY + 40;
				point_list[3].x = PolygonX;
				point_list[3].y = PolygonY + 40;
				point_list[4].x = PolygonX;
				point_list[4].y = PolygonY;

			}

		} break;

		case 2:
		{

			for (int index = 0; index <= num_points; index++)
			{

				point_list[0].x = PolygonX + 80;
				point_list[0].y = PolygonY - 40;
				point_list[1].x = PolygonX + 120;
				point_list[1].y = PolygonY - 40;
				point_list[2].x = PolygonX + 120;
				point_list[2].y = PolygonY + 120;
				point_list[3].x = PolygonX + 80;
				point_list[3].y = PolygonY + 120;
				point_list[4].x = PolygonX + 80;
				point_list[4].y = PolygonY - 40;

			}

		} break;

		default: {} break;
		} // end switch

		Polygon(hdc, point_list, num_points);
	}

	// release the device context
	DeleteObject(clear_brush);
	ReleaseDC(GameHandle, hdc);
}

void Draw_Border()
{
	//graphics device context
	HDC        hdc;
	HBRUSH brush;

	//get the graphics device context for the window
	hdc = GetDC(GameHandle);
	brush = CreateSolidBrush(RGB(200, 200, 255));
	SelectObject(hdc, brush);

	//Declarations for the (x, y) spawn position of the polygon and the number of points.
	int num_points = 9;
	int x = 50;
	int y = 10;

	//I need to define 9 points for this polygon.
	POINT point_list[9];

	//Dimensions of my polygon.
	point_list[0].x = x;
	point_list[0].y = y;
	point_list[1].x = x + 10;
	point_list[1].y = y;
	point_list[2].x = x + 10;
	point_list[2].y = y + 800;
	point_list[3].x = x + 490;
	point_list[3].y = y + 800;
	point_list[4].x = x + 490;
	point_list[4].y = y;
	point_list[5].x = x + 500;
	point_list[5].y = y;
	point_list[6].x = x + 500;
	point_list[6].y = y + 810;
	point_list[7].x = x;
	point_list[7].y = y + 810;
	point_list[8].x = x;
	point_list[8].y = y;

	// draw the polygon
	Polygon(hdc, point_list, num_points);

	// release the device context
	DeleteObject(brush);
	ReleaseDC(GameHandle, hdc);
}

void Text()
{

	HDC	hdc;

	hdc = GetDC(GameHandle);

	SetTextColor(hdc, RGB(200, 200, 255));

	SetBkColor(hdc, RGB(0, 0, 0));

	SetBkMode(hdc, OPAQUE);

	char Score[6] = "Score";
	char Level[6] = "Level";
	char Lines[6] = "Lines";
	char Next[5] = "Next";

	//testing array.
	//this char is to be used with the array positions.
	/*char g00[2];
	int row, col,x,y;

	for (x=0, row=1000; x<12; x++, row+=15)
	{
		for (y=0, col=10; y<20; y++, col+=15)
		{
			//grab mem loc of gridxrows and cols and display them with textout.
			sprintf(g00,"%d",grid[x][y].taken);
			TextOut(hdc, row,col, g00, 1);

		}
	}*/

	//output for the permanent strings.
	TextOut(hdc, 650, 300, Score, strlen(Score));
	TextOut(hdc, 650, 500, Level, strlen(Level));
	TextOut(hdc, 650, 700, Lines, strlen(Lines));
	TextOut(hdc, 580, 20, Next, strlen(Next));

	//input/output for the dynamic values of the score, level and lines.
	sprintf(dynamicvalue, "%d", dscore);
	TextOut(hdc, 675, 320, dynamicvalue, 2);

	sprintf(dynamicvalue, "%d", dlevel);
	TextOut(hdc, 675, 520, dynamicvalue, 1);

	sprintf(dynamicvalue, "%d", dlines);
	TextOut(hdc, 675, 720, dynamicvalue, 1);

	if (dlines == 2)
	{
		//increment the speed/(level of difficulty) of the game according to the number of lines that has been achieved.
		blockdropspeed -= 150;
		dlevel = 2;
	}
	if (dlines == 4)
	{
		//increment the speed/(level of difficulty) of the game according to the number of lines that has been achieved.
		blockdropspeed -= 150;
		dlevel = 3;
	}
	if (dlines == 6)
	{
		//increment the speed/(level of difficulty) of the game according to the number of lines that has been achieved.
		blockdropspeed -= 100;
		dlevel = 4;
	}
	if (dlines == 8)
	{
		//increment the speed/(level of difficulty) of the game according to the number of lines that has been achieved.
		//top speed = 0.
		blockdropspeed -= 100;
		dlevel = 5;
	}

	ReleaseDC(GameHandle, hdc);
}

void gameovercheck()
{
	HDC        hdc;
	hdc = GetDC(GameHandle);

	SetTextColor(hdc, RGB(255, 255, 255));
	SetBkColor(hdc, RGB(0, 0, 0));
	SetBkMode(hdc, OPAQUE);

	char finalscore[38] = "Congratulations, your final score is:";
	char gameover[32] = "Do you want to play again? Y/N.";
	char playagain;
	int arrayvalue = 0;
	bool gameovercheck[12];

	//initialise 12 array values that are false to coordinate with the grid array.
	//this is to be used for checking purposes.
	for (arrayvalue = 0; arrayvalue < 12; arrayvalue++)
	{
		gameovercheck[arrayvalue] = false;
	}

	for (int x = 12; x > 0; x--)
	{
		for (int y = 0; y < 20; y++)
		{
			if (grid[x][y].taken == true)
			{
				//the y line number that will turn true of occupied
				gameovercheck[y] = true;
			}
		}
	}

	//these checks will check the top x line and the 3rd x line to see if they are occupied
	//its not perfect but its very close, maybe implement a check on the y axis to make it more accurate
	if (gameovercheck[0] == true && gameovercheck[2] == true)
	{

		sprintf(dynamicvalue, "%d", dscore);
		TextOut(hdc, 383, 381, dynamicvalue, 2);

		TextOut(hdc, 150, 380, finalscore, strlen(finalscore));
		TextOut(hdc, 160, 400, gameover, strlen(gameover));

		playagain = 'a';
		//puts the game into a while loop to pause until a key is pressed.
		while (playagain == 'a')
		{

			if (KEYDOWN('Y'))
			{
				playagain = 'Y';
				resetgame();
			}
			else if (KEYDOWN('N'))
			{
				exit(1);
			}

		}

	}
	ReleaseDC(GameHandle, hdc);
}

void resetgame()
{
	HDC        hdc;
	hdc = GetDC(GameHandle);

	RECT BlankRect; // used to write a blank

	HBRUSH hbrush;

	hbrush = CreateSolidBrush(RGB(0, 0, 0));

	dscore = 0;
	dscore = dscore + 10;
	dlevel = 1;
	dlines = 0;
	//reset game speed
	blockdropspeed = 500;

	//reset boolean array.
	for (int x = 0; x < 12; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			grid[x][y].taken = false;
		}
	}

	BlankRect.left = 60;
	BlankRect.top = 10;
	BlankRect.right = 540;
	BlankRect.bottom = 810;
	FillRect(hdc, &BlankRect, hbrush);

	srand((unsigned)time(NULL));
	firstblock = (rand() % 5) + 1;

	Polygonstarttime = GetTickCount();
	starttime = GetTickCount();

	blocknumber = firstblock;

	nextblock();
	generateblock();

	Draw_Border();//Draw the border interface.
	Text();//Print text on screen.

	DeleteObject(hbrush);

	ReleaseDC(GameHandle, hdc);

}

void clearline()
{
	HDC        hdc;
	hdc = GetDC(GameHandle);

	bool clearline[20];
	int arrayvalue = 0;
	int checklineloop = 0;
	int redrawlocation = 0;

	//loop the check 4 times because 4 lines is the maximum you can achieve with one block. the rect block.
	while (checklineloop < 4)
	{
		//initialise 19 boolean values as true.
		for (arrayvalue = 0; arrayvalue < 19; arrayvalue++)
		{
			clearline[arrayvalue] = true;
		}

		//increment check over the whole array from bottom up and coordinate it with the previously created boolean array.
		for (int y = 19; y > 0; y--)
		{
			for (int x = 0; x < 12; x++)
			{
				if (grid[x][y].taken == false)
				{
					clearline[y] = false;
				}
			}
		}

		//specify the location of the position to redraw the pixels from.
		redrawlocation = 769;
		//make a check on the clearline array
		for (int posx = 19; posx > 0; posx--)
		{
			if (clearline[posx])
			{
				//increment the lines score if a line is cleared.
				dlines++;
				dscore = dscore + 2;
				//increment for loop that handles the array values.
				for (int y = posx; y > 0; y--)
				{
					for (int x = 0; x < 12; x++)
					{
						grid[x][y].taken = grid[x][y - 1].taken;
					}
				}

				//define the y area that will be repixelated with the cap on where it will stop.
				for (y = redrawlocation; y > 0; y--)
				{
					//set the x value of the repixelation.
					for (int x = 60; x < 540; x++)
					{
						//redraw every pixel according to x and y at the previous pixel(hdc,x,y) and draw it to the screen.
						SetPixel(hdc, x, y + 40, GetPixel(hdc, x, y));
					}
				}
			}
			//redraw pixels -=40 at a time, coordinating with block sizes.
			redrawlocation -= 40;
		}
		checklineloop++;
	}
	ReleaseDC(GameHandle, hdc);
}