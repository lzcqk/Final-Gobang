#include"defin.h"
#include"GobangAI.h"
#include"GobangJudge.h"
#include"GobangMAKE.h"
#include"GobangPlayer.h"
#include<opencv.hpp>
using namespace cv;

char Gametype = -1;
char Gofirst = -1;
char finish = 1;
int board[SIZE][SIZE] = { 0 }; //AI 为1， player 为2
int maxx = 0, maxy = 0; //记录格子 减少遍历次数
int minx = 14, miny = 14;   // 记录格子减少遍历次数
char playerpoint = 0;   // 玩家落子数  用于观察玩家是否落子 如果是 则AI落子
char fleg = 1;
int myx = 0;
int myy = 0;
char exis = 0;
const char* imagename = "Gobang.jpg";
QImage* copic = new QImage;
QString text = "";
char first_time = 1;
int zuo[36] = { 0 };
int  xia[36] = { 0 }; // 36 ---->>   2x + 4           __________    1 4 --->>  x 

void ini()
{
	Mat picture = imread(imagename);
	copic->load(imagename);
	for (int i = 0; i < 36; i++) { zuo[i] = picture.cols / 36 * (i); }
	for (int i = 0; i < 36; i++) { xia[i] = picture.rows / 36 * (i); }
}
void mmcompare(int x, int y)
{
	if (x >= maxx) maxx = x;
	if (x <= minx) minx = x;
	if (y >= maxy) maxy = y;
	if (y <= miny) miny = y;
}
