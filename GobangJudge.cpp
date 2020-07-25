#include "GobangJudge.h"
#include"defin.h"

int GobangJudge::bjudge(int a[][SIZE], int power)
{
	if (maxx - minx >= 4 || maxy - miny >= 4)
	{
		for (int x = minx; x <= maxx; x++) //    ||||||||||||  这样子搜索   起点为min   min
		{
			for (int y = miny; y + 4 <= maxy; y++)
			{
				if (a[x][y] == a[x][y + 1] && a[x][y + 1] == a[x][y + 2] && a[x][y + 2] == a[x][y + 3] && a[x][y + 3] == a[x][y + 4] && a[x][y] != 0) return power;
			}
		}
		for (int y = miny; y <= maxy; y++) //    -------- 这样子搜索       起点为  min      min
		{
			for (int x = minx; x + 4 <= maxx; x++)
			{
				if (a[x][y] == a[x + 1][y] && a[x + 1][y] == a[x + 2][y] && a[x + 2][y] == a[x + 3][y] && a[x + 3][y] == a[x + 4][y] && a[x][y] != 0) return power;
			}
		}
		int x = minx;
		int y = maxy;
		int count = 1;
		int xtemp = 0;
		int ytemp = 0;
		for (; x + 5 > 15; x--);//  没有超出棋盘
		xtemp = x;
		for (; y + 5 > 15; y--);
		for (; y + 4 > miny; y--, count++) //    对角线搜索 \\\\\\\\\\\\\  先上   /
		{
			ytemp = y;
			int i = 0;
			while (count - i)
			{
				if (i != 0) { x++;   y++; }
				if (a[x][y] == a[x + 1][y + 1] && a[x + 1][y + 1] == a[x + 2][y + 2] && a[x + 2][y + 2] == a[x + 3][y + 3] && a[x + 3][y + 3] == a[x + 4][y + 4] && a[x][y] != 0) return power;
				i++;
			}
			y = ytemp; x = xtemp;
		}
		ytemp = y;
		for (; x + 4 <= maxx; x++, count--) //    对角线搜索 \\\\\\\\\\\\\  向右边   /
		{
			xtemp = x;
			int i = 0;
			while (count - i)
			{
				if (i != 0) { x++;   y++; }
				if (a[x][y] == a[x + 1][y + 1] && a[x + 1][y + 1] == a[x + 2][y + 2] && a[x + 2][y + 2] == a[x + 3][y + 3] && a[x + 3][y + 3] == a[x + 4][y + 4] && a[x][y] != 0) return power;
				i++;
			}
			x = xtemp; y = ytemp;
		}
		count = 1;
		x = maxx;
		y = maxy;
		xtemp = x;
		for (; y + 5 > 15; y--);
		for (; y + 4 > miny; y--, count++) //    对角线搜索//////////// 先上   
		{
			ytemp = y;
			int i = 0;
			while (count - i)
			{
				if (i != 0) { x--;   y++; }
				if (a[x][y] == a[x - 1][y + 1] && a[x - 1][y + 1] == a[x - 2][y + 2] && a[x - 2][y + 2] == a[x - 3][y + 3] && a[x - 3][y + 3] == a[x - 4][y + 4] && a[x][y] != 0) return power;
				i++;
			}
			y = ytemp; x = xtemp;
		}
		ytemp = y;
		for (; x > minx + 3; x--, count--) //    对角线搜索 ///////////  向左////
		{
			xtemp = x;
			int i = 0;
			while (count - i)
			{
				if (i != 0) { x--;   y++; }
				if (a[x][y] == a[x - 1][y + 1] && a[x - 1][y + 1] == a[x - 2][y + 2] && a[x - 2][y + 2] == a[x - 3][y + 3] && a[x - 3][y + 3] == a[x - 4][y + 4] && a[x][y] != 0) return power;
				i++;
			}
			x = xtemp; y = ytemp;
		}
	}
	return 0;
}
int GobangJudge::claim(int power,int flag)  // 有一方胜利 返回1     break 出while
{
	if (power == 1 && flag == 1 )
	{
		text = text.fromLocal8Bit("电脑获胜");
		return 0;
	}
	if (power == 2 && flag == 1)
	{
		text = text.fromLocal8Bit("你获胜");
		return 0;
	}
	if (power == 1 && flag == 2)
	{
		text = text.fromLocal8Bit("黑棋获胜");
		return 0;
	}
	if (power == 2 && flag == 2)
	{
		text = text.fromLocal8Bit("白棋获胜");
		return 0;
	}
	return 1;
}