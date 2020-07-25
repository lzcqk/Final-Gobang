#include "Welcome.h"
#include "ui_Welcome.h"
#include"defin.h"
#include"MainW.h"

Welcome::Welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    Gamet = -1;
    Gof = -1;
    ui->PVEGroup->setVisible(false);
}

Welcome::~Welcome()
{
    delete ui;
}
void Welcome::on_PvE_clicked()
{
    if(ui->PvE->isChecked())
    {
        Gamet = 1;
        str = str.fromLocal8Bit("Íæ¼Ò");
        ui->Player->setText(str);
        str = str.fromLocal8Bit("µçÄÔ");
        ui->Computer->setText(str);
        ui->PVEGroup->setVisible(true);
    }
}

void Welcome::on_PvP_clicked()
{
    if(ui->PvP->isChecked())
    {
        Gamet = 2;
        str = str.fromLocal8Bit("°×Æå");
        ui->Player->setText(str);
        str = str.fromLocal8Bit("ºÚÆå");
        ui->Computer->setText(str);
        ui->PVEGroup->setVisible(true);
    }
}

void Welcome::on_Player_clicked()
{
    if(ui->Player->isChecked())
    {
        Gof = 0;
    }
}

void Welcome::on_Computer_clicked()
{
    if(ui->Computer->isChecked())
    {
        Gof = 1;
    }
}

void Welcome::on_OK_pressed()
{
    if (Gamet != -1 && Gof != -1)
    {
        Gametype = Gamet;
        Gofirst = Gof;
        Welcome::~Welcome();
        MainW* w = new MainW;
        w->show();
    }
}

