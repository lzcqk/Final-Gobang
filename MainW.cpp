#include "MainW.h"
#include "ui_MainW.h"
#include"Welcome.h"
#include"defin.h"
#include"Autho.h"
#include<QDebug>
#include"explain.h"

MainW::MainW(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::MainW)
{
	QPalette pe;
	pe.setColor(QPalette::WindowText, Qt::red);  //设置字体颜色
	ui->setupUi(this);
    ui->label_cl->setVisible(false);
	ui->label_cl->setPalette(pe);
	connect(ui->myla, &mylab::win, this, [=]()   // 显示游戏结果
		{
			ui->label_cl->setText(text);
			ui->label_cl->setVisible(true);
		});
	connect(ui->myla, &mylab::on_game, this, [=]()   // 不显示游戏结果
		{
			ui->label_cl->setVisible(false);
		});
	connect(ui->A_about, &QAction::triggered, [=]()   // 软件介绍
		{
			if(exis == 0)
			{
				exis = 1;
				Autho* me = new Autho;
				me->show();
				me->setAttribute(Qt::WA_DeleteOnClose); 
			}
    });
	connect(ui->A_explain, &QAction::triggered, [=]()   //游戏提示
		{
			if (exis == 0)
			{
				exis = 1;
				explain* ex = new explain;
				ex->show();
				ex->setAttribute(Qt::WA_DeleteOnClose);
			}
		});
    if(Gametype == 1)
    {
		str = str.fromLocal8Bit("人机对战");
        ui->btn_type->setText(str);
		if (Gofirst == 0) { str = str.fromLocal8Bit("玩家"); ui->btn_first->setText(str); }
        if(Gofirst == 1) { str = str.fromLocal8Bit("电脑"); ui->btn_first->setText(str);}
    }
    if(Gametype == 2)
    {
		str = str.fromLocal8Bit("双人博弈");
        ui->btn_type->setText(str);
		if (Gofirst == 0) { str = str.fromLocal8Bit("白棋"); ui->btn_first->setText(str); }
		if (Gofirst == 1) { str = str.fromLocal8Bit("黑棋"); ui->btn_first->setText(str); }
    }
	on_replay_clicked();
	mainlab.drawchessboard();
}

MainW::~MainW()
{
	delete ui;
}

void MainW::on_withdraw_clicked()
{
	if (pla.withdraw())
	{
		if (Gametype == 1) playerpoint = 0;
		else if (Gametype == 2)
		{
			if (playerpoint == 0)playerpoint = 1;
			else if (playerpoint == 1)playerpoint = 0;
		}
	}
	copic->load(imagename);
	mainlab.drawchessboard();
	mainlab.refresh();
	ui->myla->setPixmap(QPixmap::fromImage(*copic));
}

void MainW::on_forward_clicked()
{
	if (pla.goforward())
	{
		if (Gametype == 1) playerpoint = 0;
		else if (Gametype == 2)
		{
			if (playerpoint == 0)playerpoint = 1;
			else if (playerpoint == 1)playerpoint = 0;
		}
	}
	copic->load(imagename);
	mainlab.drawchessboard();
	mainlab.refresh();
	ui->myla->setPixmap(QPixmap::fromImage(*copic));
}

void MainW::on_save_clicked()
{
	copic->save("Save_chess.jpg");
}

void MainW::on_load_clicked()
{
	pla.rewrite();
	copic->load(imagename);
	mainlab.drawchessboard();
	mainlab.refresh();
	if (Gametype == 1 && playerpoint == 1)
	{
		mainlab.aape.choose(1);
		update();
	}
	ui->myla->setPixmap(QPixmap::fromImage(*copic));
}

void MainW::on_replay_clicked()
{
	qDebug() << " replay";
	pla.one_more();
	copic->load(imagename);
	mainlab.drawchessboard();
	if(Gametype == 1 && playerpoint == 1)
	{
		mainlab.aape.choose(1);
		update();
	}
	ui->myla->setPixmap(QPixmap::fromImage(*copic));
}

void MainW::on_btn_type_clicked()
{
    if(Gametype == 1)
    {
        Gametype = 2;
		str = str.fromLocal8Bit("双人博弈");
        ui->btn_type->setText(str);
		if (Gofirst == 0) { str = str.fromLocal8Bit("白棋"); ui->btn_first->setText(str); }
		else if (Gofirst == 1) { str = str.fromLocal8Bit("黑棋"); ui->btn_first->setText(str); }
    }
    else if(Gametype == 2)
    {
        Gametype = 1;
		str = str.fromLocal8Bit("人机对战");
        ui->btn_type->setText(str);
		if (Gofirst == 0) { str = str.fromLocal8Bit("玩家"); ui->btn_first->setText(str); }
		else if (Gofirst == 1) { str = str.fromLocal8Bit("电脑"); ui->btn_first->setText(str); }
    }
}

void MainW::on_btn_first_clicked()
{
    if(Gametype == 1)
    {
        if(Gofirst == 0) { str = str.fromLocal8Bit("电脑"); ui->btn_first->setText(str); Gofirst = 1;}
        else if(Gofirst == 1) { str = str.fromLocal8Bit("玩家"); ui->btn_first->setText(str);Gofirst = 0;}
    }
    else if(Gametype == 2)
    {
        if(Gofirst == 0) { str = str.fromLocal8Bit("黑棋"); ui->btn_first->setText(str);Gofirst = 1;}
        else if(Gofirst == 1) { str = str.fromLocal8Bit("白棋"); ui->btn_first->setText(str);Gofirst = 0;}
    }
}
