#pragma once
#ifndef _GOBANGPLAYER_H_
#define _GOBANGPLAYER_H_
#include"defin.h"
#include"GobangAI.h"
#include "GobangMAKE.h"

class GobangPlayer
{
	private:
		int playerpower;//记录玩家的权重
		static int turn;//记录玩家当前棋盘所下的步数
		static int maxturn;//记录玩家全部落子的次数
	public:
		GobangMAKE assist;
		GobangAI oumiga;
		GobangPlayer();//初始化，当PVP时有特殊处理
		void on_Mouse(int x, int y);//鼠标事件
		int withdraw();//悔棋操作
		int goforward();//撤销悔棋操作
		void one_more();//再来一盘操作
		int rewrite();//读入旧棋盘操作
		void set_power(int flag);// 设定power
		int power();//返回玩家权重
		void freshstatic();//将turn，Maxturn全部清0
		void keepsame(); //同步turn 和 maxturn
};

#endif // !_GOBANGPLAYER_H_

