#include "Autho.h"
#include "ui_Autho.h"
#include"defin.h"

Autho::Autho(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Autho)
{
    ui->setupUi(this);
}

Autho::~Autho()
{
    exis = 0;
    delete ui;
}
