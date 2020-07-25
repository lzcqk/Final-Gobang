#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#include"GobangAI.h"
#include"GobangJudge.h"
#include"GobangMAKE.h"
#include"GobangPlayer.h"
#include"mylab.h"

namespace Ui {
class MainW;
}

class MainW : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainW(QWidget *parent = nullptr);
    ~MainW();
    GobangPlayer pla;
    mylab mainlab;
private slots:   //Qt  各个按键的槽函数
    void on_withdraw_clicked();
    void on_forward_clicked();
    void on_save_clicked();
    void on_load_clicked();
    void on_replay_clicked();
    void on_btn_type_clicked();
    void on_btn_first_clicked();

private:
    Ui::MainW *ui;
    QString str; //用来解决中文乱码问题
};

#endif // MAINW_H
