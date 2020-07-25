#include "GobangPlayer.h"
#include"defin.h"
#include"GobangMAKE.h"
#include<opencv2/opencv.hpp>
#include<fstream>

using namespace std;
using namespace cv;


GobangPlayer::GobangPlayer()
{
	ofstream cling("playerchessboard.txt", ios::trunc);
	cling.close();
	playerpower = 2;
}
int GobangPlayer::turn = 0;
int GobangPlayer::maxturn = 0;
void GobangPlayer::freshstatic() { turn = 0; maxturn = 0; }
void GobangPlayer::on_Mouse(int x, int y)
{
	if (zuo[2] < x && x < zuo[34] && xia[2] < y && y < xia[34] && finish && Gofirst != -1 && Gametype != -1)
	{
		int xcount = 0;
		int ycount = 0;
		int fx = 0; //标记是否在线上
		int fy = 0;
		for (xcount = 0; xcount < SIZE; xcount++)
		{
			if (zuo[xcount * 2 + 3] < x && x < zuo[xcount * 2 + 5])
			{
				myx = zuo[xcount * 2 + 4];
				fx = 1;
				break;
			}
		}
		for (ycount = 0; ycount < SIZE; ycount++)
		{
			if (xia[ycount * 2 + 3] < y && y < zuo[ycount * 2 + 5])
			{
				myy = zuo[ycount * 2 + 4];
				fy = 1;
				break;
			}
		}
		if (fx && fy)
		{
			if (board[xcount][ycount] == 0)  //如果没人下过此处
			{
				board[xcount][ycount] = playerpower;
				ofstream writer("playerchessboard.txt", ios::in);
				if (writer.is_open())
				{
					writer.seekp(int(turn * 9), ios::beg);
					if (xcount >= 10) { writer << xcount; }
					else writer << "0" << xcount;
					writer << " ";
					if (ycount >= 10) { writer << ycount; }
					else writer << "0" << ycount;
					writer << " ";
					writer << "0" << playerpower;
					writer << " ";
					writer.close();
				}
				if (maxturn > turn) { keepsame(); oumiga.keepsame(); }
				if (turn == maxturn) maxturn++;
				turn++;
				if (turn + oumiga.Aiturn() == SIZE * SIZE) { finish = 0; cout << "Board has been filled!!" << endl; }
				mmcompare(xcount, ycount);
				if (Gametype == 1)   // pve
				{
					playerpoint = 1;
				}
				if(Gametype == 2)   //pvp
				{
					if (playerpower == 2)playerpoint = 1;   // 权重为   2
					else if (playerpower == 1)playerpoint = 0;  // 权重为   1
				} 
				fleg = 1;
			}
		}
	}
	else { cout << "unavailable" << endl; } //测试 后期删去
	/*Mat dst;
	cvtColor(picture, dst, COLOR_BGR2HSV);
	uchar* data1 = dst.ptr<uchar>(y);
	int hval = data1[int(x) * 3];
	int sval = data1[int(x ) * 3 + 1];
	int vval = data1[int(x ) * 3 + 2];
	cout << x << " " << y << endl;
	printf("H:%d\tS:%d\tV:%d\n", hval, sval, vval);*/
}
int GobangPlayer::withdraw()
{
	if (turn > 0)
	{
		turn--; int fake_turn = turn + 1; int x; int y; int Fpower;
		ifstream reader("playerchessboard.txt");
		if (reader.is_open())
		{
			while (fake_turn--)
			{
				reader >> x >> y >> Fpower;
			}
			board[x][y] = 0;
			reader.close();
		}
		else cout << "error" << endl;
		oumiga.withdraw();
		myx = 0; myy = 0;
		return 1;
	}
	else return 0;
}
int GobangPlayer::goforward()
{
	if (turn < maxturn)
	{
		turn++;  int fake_turn = turn; int x; int y; int Fpower;
		ifstream reader("playerchessboard.txt");
		if (reader.is_open())
		{
			while (fake_turn--)
			{
				reader >> x >> y >> Fpower;
			}
			board[x][y] = Fpower;
			reader.close();
		}
		else cout << "error" << endl;
		oumiga.goforward();
		myx = 0; myy = 0;
		return 1;
	}
	else return 0;
}
void GobangPlayer::one_more()
{
	assist.board_initial(); finish = 1; playerpoint = Gofirst; first_time = 1; oumiga.freshstatic(); freshstatic();
	ofstream cling("playerchessboard.txt", ios::trunc);
	cling.close();
	ofstream AIcling("AIchessboard.txt", ios::trunc);
	AIcling.close();
}
int  GobangPlayer::rewrite() ///将board赋值
{
	one_more();
	Mat old_chess = imread("Save_chess.jpg");
	if (old_chess.empty())
	{
		cout << "You haven't saved the chess manual before" << endl;
		return -1;
	}
	Mat dst; int Blackchess = 0; int Whitechess = 0;
	cvtColor(old_chess, dst, COLOR_BGR2HSV);
	for (int y = 0; y < 15; y++)
	{
		uchar* data1 = dst.ptr<uchar>(xia[2 * y + 4] + 1);
		for (int x = 0; x < 15; x++)
		{
			int hval = data1[int((zuo[2 * x + 4] + 1) * 3)];
			int sval = data1[int((zuo[2 * x + 4] + 1) * 3) + 1];
			int vval = data1[int((zuo[2 * x + 4] + 1) * 3) + 2];
			if (180 >= hval && hval >= 0 && 255 >= sval && sval >= 0 && 46 >= vval && vval >= 0) { board[x][y] = 1; Blackchess++; mmcompare(x, y); }  //黑色棋子
			if (160 >= hval && hval >= 0 && 10 >= sval && sval >= 0 && vval <= 255 && vval >= 240) { board[x][y] = 2; Whitechess++; mmcompare(x, y); } //白色棋子
		}
	}
	/*
	for (int x = 0; x < 15; x++)
	{
		for (int y = 0; y < 15; y++)
		{
			cout << board[x][y];
		}
		cout << endl;
	}
	*/
	if (Blackchess == Whitechess) playerpoint = Gofirst;
	else if ((Gametype == 1) && (Blackchess == Whitechess - 1)) playerpoint = 0;
	else if ((Gametype == 2) && (Blackchess == Whitechess - 1)) playerpoint = 1;
	else if ((Gametype == 1) && (Blackchess == Whitechess + 1)) playerpoint = 1;
	else if ((Gametype == 2) && (Blackchess == Whitechess + 1)) playerpoint = 0;
	else { finish = 0; playerpoint = 2; text = text.fromLocal8Bit("旧棋盘出错");}  //偷棋 
	return 0;
}
void GobangPlayer::set_power(int flag) { playerpower = flag; }
int GobangPlayer::power() { return playerpower; }
void GobangPlayer::keepsame() { maxturn = turn; }
