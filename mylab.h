#ifndef MYLAB_H
#define MYLAB_H

#include <QLabel>
#include"defin.h"
#include"GobangAI.h"
#include"GobangJudge.h"
#include"GobangMAKE.h"
#include"GobangPlayer.h"

class mylab : public QLabel
{
    Q_OBJECT
public:
    explicit mylab(QWidget* parent = nullptr); 
    void drawchessboard();   // 画棋盘
    void mousePressEvent(QMouseEvent *ev);  // 鼠标事件
    void paintEvent(QPaintEvent *);   // 画棋子事件
    void refresh();  // 复现棋盘事件
    int mainpower;  // 用于看是否有一方胜出
    GobangPlayer  player;
    GobangPlayer player_t;
    GobangAI aape;
    GobangJudge xiaowang;
signals:   // 发出信号  触发槽函数
    void win();
    void on_game();
};

#endif // MYLAB_H
