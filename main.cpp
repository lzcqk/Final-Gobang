#include <QApplication>
#include"defin.h"
#include"Welcome.h"

int main(int argc, char *argv[])
{
    ini();
    QApplication *a = new QApplication(argc,argv);
    Welcome* wel = new Welcome;
    wel->show();
    a->exec();
}
