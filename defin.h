#pragma once
#ifndef _DEFIN_H_
#define _DEFIN_H_
#include<QImage>
#include<QString>

constexpr auto SIZE =15;
extern char Gametype;//记录游戏类型
extern char Gofirst;//记录先手状态
extern char finish ;//用于当有一方获胜时，终止循环
extern int board[SIZE][SIZE]; //AI 为1， player 为2
extern  int maxx , maxy; //记录格子 减少遍历次数
extern int minx , miny ;   // 记录格子减少遍历次数
extern char playerpoint ;   // 玩家落子数  用于观察玩家是否落子 如果是 则AI落子
extern int myx;    // 用于传递落子的x，y
extern int myy; 
extern char fleg;  //用于观察落子是否有效
extern char exis;  //控制窗口数量
extern const char* imagename ;//棋盘背景名称 xxx.jpg
extern QImage *copic;   //存入图片
extern QString text;  // 用于传递结果信息
extern char first_time;// 看是否是第一次运行程序
extern int zuo[36] ;//   将图片的xy像素均匀分布在数组中，便于操作棋盘
extern int  xia[36]; // 36 ---->>   2x + 4           __________    1 4 --->>  x 
void ini();//初始化zuo，xia的值
void mmcompare(int x, int y);//将maxx，maxy，minx，miny根据落子的x，y大小进行改进，从而防止遗漏某一个位置
#endif // !_DEFIN_H_
