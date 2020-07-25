#ifndef AUTHO_H
#define AUTHO_H

#include <QWidget>

namespace Ui {
class Autho;
}

class Autho : public QWidget
{
    Q_OBJECT

public:
    explicit Autho(QWidget *parent = nullptr);
    ~Autho();

private:
    Ui::Autho *ui;
};

#endif // AUTHO_H
