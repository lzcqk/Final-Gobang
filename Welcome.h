#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Welcome; }
QT_END_NAMESPACE

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    Welcome(QWidget *parent = nullptr);
    ~Welcome();
    int Gof;
    int Gamet;
private slots:
    void on_PvE_clicked();
    void on_PvP_clicked();
    void on_Player_clicked();
    void on_Computer_clicked();
    void on_OK_pressed();

private:
    Ui::Welcome *ui;
    QString str; //用来解决中文乱码问题
};
#endif // WELCOME_H
