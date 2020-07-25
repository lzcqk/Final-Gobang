#include "mylab.h"
#include<QMouseEvent>
#include<QPainter>
#include"MainW.h"
#include"defin.h"

mylab::mylab(QWidget* parent) : QLabel(parent)
{
	mainpower = 0;
	playerpoint = Gofirst;
	player_t.set_power(1);
	if (Gametype == 1&& playerpoint == 1)
	{
		aape.choose(1);
		update();
	}
}

void mylab::mousePressEvent(QMouseEvent* ev)
{
	if (finish)
	{
		myx = ev->x(); myy = ev->y();
		if (Gametype == 1 && playerpoint == 0)   //pve
		{
			player.on_Mouse(myx, myy);
		}
		else if (Gametype == 2) //pvp
		{
			if (playerpoint == 0)
			{
				player.on_Mouse(myx, myy);
			}
			else if (playerpoint == 1)
			{
				player_t.on_Mouse(myx, myy);
			}
		}
		update();
	}
}

void mylab::paintEvent(QPaintEvent* event)
{
	QLabel::paintEvent(event);
	if (playerpoint == 1 && (fleg||Gametype ==1)&&myx!=0)
	{
		QPainter painter(copic);
		if (fleg)
		{
			painter.setPen(QColor(Qt::white));
			painter.setBrush(QBrush(Qt::white));
			painter.drawEllipse(QPoint(myx, myy), 8, 8);
			mainpower = xiaowang.bjudge(board, player.power());
			finish = xiaowang.claim(mainpower, Gametype);
		}
		if (Gametype == 1&& finish) 
		{
			aape.choose(1);
			painter.setPen(QColor(Qt::black));
			painter.setBrush(QBrush(Qt::black));
			painter.drawEllipse(QPoint(myx, myy), 8, 8);
			mainpower = xiaowang.bjudge(board, aape.power());
			finish = xiaowang.claim(mainpower, Gametype);
		}
	}
	else if (playerpoint == 0 && (fleg || (Gametype == 1&& first_time))&& myx != 0&&(myx - zuo[1])%(2*zuo[1])!=0 && (myy - xia[1]) % (2 * xia[1]) != 0)
	{
		first_time = 0;
		QPainter painter(copic);
		painter.setPen(QColor(Qt::black));
		painter.setBrush(QBrush(Qt::black));
		painter.drawEllipse(QPoint(myx, myy), 8, 8);
		mainpower = xiaowang.bjudge(board, player_t.power());
		finish = xiaowang.claim(mainpower, Gametype);
	}
	setPixmap(QPixmap::fromImage(*copic));
	fleg = 0;
    if (finish == 0) { emit win(); }
	else { emit on_game(); }
}

void mylab::drawchessboard()
{
	QPainter painter(copic);
	QPen pen;
	pen.setColor(Qt::black);
	pen.setWidth(2);
	painter.setPen(pen);
	for (int x = 1; x < 18; x++)
	{
		int n = x * 2;
		if (x == 1 || x == 17)
		{
			pen.setWidth(4);
			painter.setPen(pen);
			painter.drawLine(zuo[n], xia[2], zuo[n], xia[34]);
			painter.drawLine(zuo[2], xia[n], zuo[34], xia[n]);
		}
		else
		{
			pen.setWidth(2);
			painter.setPen(pen);
			painter.drawLine(zuo[n], xia[2], zuo[n], xia[34]);
			painter.drawLine(zuo[2], xia[n], zuo[34], xia[n]);
		}
	}
}

void mylab::refresh()
{
	int xa = maxx; int xi = minx; int ya = maxy; int yi = miny;
	QPainter painter(copic);
	QPen pen;
	for (; xi <= xa; xi++)
	{
		for (yi = miny; yi <= ya; yi++)
		{
			if (board[xi][yi] == 1)
			{
				painter.setPen(QColor(Qt::black));
				painter.setBrush(QBrush(Qt::black));
				painter.drawEllipse(QPoint(zuo[2 * xi + 4], xia[2 * yi + 4]), 8, 8);
			}
			if (board[xi][yi] == 2)
			{
				painter.setPen(QColor(Qt::white));
				painter.setBrush(QBrush(Qt::white));
				painter.drawEllipse(QPoint(zuo[2 * xi + 4], xia[2 * yi + 4]), 8, 8);
			}
		}
	}
}
