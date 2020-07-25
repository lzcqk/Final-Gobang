#include "GobangMAKE.h"
#include"defin.h"
#include<QPainter>

GobangMAKE::GobangMAKE() 
{
	n = 0;
}

void GobangMAKE::board_initial()
{
	int x = 0;
	int y = 0;
	maxx = 0; maxy = 0; minx = 14; miny = 14; myx = 0; myy = 0;
	for (x = 0; x < SIZE; x++)
	{
		for (y = 0; y < SIZE; y++)
		{
			board[x][y] = 0;
		}
	}
}
