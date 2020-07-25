/********************************************************************************
** Form generated from reading UI file 'MainW.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_H
#define UI_MAINW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mylab.h"

QT_BEGIN_NAMESPACE

class Ui_MainW
{
public:
    QAction *A_about;
    QAction *A_explain;
    QWidget *centralwidget;
    mylab *myla;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *btn_type;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *btn_first;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *withdraw;
    QSpacerItem *verticalSpacer_2;
    QPushButton *forward;
    QSpacerItem *verticalSpacer_3;
    QPushButton *save;
    QSpacerItem *verticalSpacer_4;
    QPushButton *load;
    QSpacerItem *verticalSpacer_5;
    QPushButton *replay;
    QLabel *label_cl;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainW)
    {
        if (MainW->objectName().isEmpty())
            MainW->setObjectName(QString::fromUtf8("MainW"));
        MainW->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainW->sizePolicy().hasHeightForWidth());
        MainW->setSizePolicy(sizePolicy);
        MainW->setMinimumSize(QSize(800, 600));
        MainW->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/magic/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainW->setWindowIcon(icon);
        A_about = new QAction(MainW);
        A_about->setObjectName(QString::fromUtf8("A_about"));
        A_explain = new QAction(MainW);
        A_explain->setObjectName(QString::fromUtf8("A_explain"));
        centralwidget = new QWidget(MainW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        myla = new mylab(centralwidget);
        myla->setObjectName(QString::fromUtf8("myla"));
        myla->setGeometry(QRect(40, 20, 540, 540));
        myla->setPixmap(QPixmap(QString::fromUtf8(":/magic/Gobang.jpg")));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(590, 20, 206, 531));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        btn_type = new QPushButton(widget_3);
        btn_type->setObjectName(QString::fromUtf8("btn_type"));

        horizontalLayout_2->addWidget(btn_type);


        verticalLayout_2->addWidget(widget_3);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        btn_first = new QPushButton(widget_2);
        btn_first->setObjectName(QString::fromUtf8("btn_first"));

        horizontalLayout->addWidget(btn_first);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        withdraw = new QPushButton(widget);
        withdraw->setObjectName(QString::fromUtf8("withdraw"));

        verticalLayout->addWidget(withdraw);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        forward = new QPushButton(widget);
        forward->setObjectName(QString::fromUtf8("forward"));

        verticalLayout->addWidget(forward);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        save = new QPushButton(widget);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout->addWidget(save);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        load = new QPushButton(widget);
        load->setObjectName(QString::fromUtf8("load"));

        verticalLayout->addWidget(load);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        replay = new QPushButton(widget);
        replay->setObjectName(QString::fromUtf8("replay"));

        verticalLayout->addWidget(replay);


        verticalLayout_2->addWidget(widget);

        label_cl = new QLabel(centralwidget);
        label_cl->setObjectName(QString::fromUtf8("label_cl"));
        label_cl->setEnabled(true);
        label_cl->setGeometry(QRect(130, 130, 451, 281));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka"));
        font.setPointSize(54);
        label_cl->setFont(font);
        MainW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainW->setMenuBar(menubar);
        statusbar = new QStatusBar(MainW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainW->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(A_explain);
        menu->addAction(A_about);

        retranslateUi(MainW);

        QMetaObject::connectSlotsByName(MainW);
    } // setupUi

    void retranslateUi(QMainWindow *MainW)
    {
        MainW->setWindowTitle(QApplication::translate("MainW", "\344\272\224\345\255\220\346\243\213", nullptr));
        A_about->setText(QApplication::translate("MainW", "\347\211\210\346\234\254", nullptr));
        A_explain->setText(QApplication::translate("MainW", "\345\270\256\345\212\251", nullptr));
        myla->setText(QString());
        label_3->setText(QApplication::translate("MainW", "\346\270\270\346\210\217\346\250\241\345\274\217\357\274\232", nullptr));
        btn_type->setText(QApplication::translate("MainW", "\345\217\214\344\272\272\345\215\232\345\274\210", nullptr));
        label_2->setText(QApplication::translate("MainW", "\345\205\210\346\211\213\347\212\266\346\200\201\357\274\232", nullptr));
        btn_first->setText(QApplication::translate("MainW", "\351\273\221\346\243\213", nullptr));
        withdraw->setText(QApplication::translate("MainW", "\346\202\224\346\243\213", nullptr));
        forward->setText(QApplication::translate("MainW", "\346\222\244\351\224\200\346\202\224\346\243\213", nullptr));
        save->setText(QApplication::translate("MainW", "\344\277\235\345\255\230\346\243\213\350\260\261", nullptr));
        load->setText(QApplication::translate("MainW", "\345\212\240\350\275\275\346\227\247\346\243\213\350\260\261", nullptr));
        replay->setText(QApplication::translate("MainW", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        label_cl->setText(QApplication::translate("MainW", "Black win", nullptr));
        menu->setTitle(QApplication::translate("MainW", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainW: public Ui_MainW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_H
