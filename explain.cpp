#include "explain.h"
#include "ui_explain.h"
#include"defin.h"

explain::explain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::explain)
{
    ui->setupUi(this);
}

explain::~explain()
{
    delete ui;
    exis = 0;
}
