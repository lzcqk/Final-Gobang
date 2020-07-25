/********************************************************************************
** Form generated from reading UI file 'Welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *PvP;
    QRadioButton *PvE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK;
    QPushButton *Cancel;
    QGroupBox *PVEGroup;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *Player;
    QRadioButton *Computer;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Welcome->sizePolicy().hasHeightForWidth());
        Welcome->setSizePolicy(sizePolicy);
        Welcome->setMinimumSize(QSize(800, 600));
        Welcome->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/magic/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Welcome->setWindowIcon(icon);
        centralwidget = new QWidget(Welcome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(161, 175, 457, 109));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(457, 109));
        groupBox->setMaximumSize(QSize(457, 109));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka"));
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        PvP = new QRadioButton(groupBox);
        PvP->setObjectName(QString::fromUtf8("PvP"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        PvP->setFont(font1);

        horizontalLayout_3->addWidget(PvP);

        PvE = new QRadioButton(groupBox);
        PvE->setObjectName(QString::fromUtf8("PvE"));
        PvE->setFont(font1);

        horizontalLayout_3->addWidget(PvE);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(161, 408, 457, 110));
        widget->setMinimumSize(QSize(457, 110));
        widget->setMaximumSize(QSize(457, 110));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OK = new QPushButton(widget);
        OK->setObjectName(QString::fromUtf8("OK"));

        horizontalLayout->addWidget(OK);

        Cancel = new QPushButton(widget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        horizontalLayout->addWidget(Cancel);

        PVEGroup = new QGroupBox(widget_2);
        PVEGroup->setObjectName(QString::fromUtf8("PVEGroup"));
        PVEGroup->setGeometry(QRect(161, 291, 457, 110));
        sizePolicy.setHeightForWidth(PVEGroup->sizePolicy().hasHeightForWidth());
        PVEGroup->setSizePolicy(sizePolicy);
        PVEGroup->setMinimumSize(QSize(457, 110));
        PVEGroup->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(PVEGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Player = new QRadioButton(PVEGroup);
        Player->setObjectName(QString::fromUtf8("Player"));
        Player->setFont(font1);

        horizontalLayout_2->addWidget(Player);

        Computer = new QRadioButton(PVEGroup);
        Computer->setObjectName(QString::fromUtf8("Computer"));
        Computer->setFont(font1);

        horizontalLayout_2->addWidget(Computer);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(161, 58, 457, 110));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(457, 110));
        label->setMaximumSize(QSize(457, 110));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(36);
        font2.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font2);

        horizontalLayout_4->addWidget(widget_2);

        Welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Welcome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Welcome->setMenuBar(menubar);
        statusbar = new QStatusBar(Welcome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Welcome->setStatusBar(statusbar);

        retranslateUi(Welcome);
        QObject::connect(Cancel, SIGNAL(clicked()), Welcome, SLOT(close()));

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "\344\272\224\345\255\220\346\243\213", nullptr));
        groupBox->setTitle(QApplication::translate("Welcome", "\346\270\270\346\210\217\346\250\241\345\274\217", nullptr));
        PvP->setText(QApplication::translate("Welcome", "\345\217\214\344\272\272\345\215\232\345\274\210", nullptr));
        PvE->setText(QApplication::translate("Welcome", "\344\272\272\346\234\272\345\257\271\346\210\230", nullptr));
        OK->setText(QApplication::translate("Welcome", "\345\256\214\346\210\220", nullptr));
        Cancel->setText(QApplication::translate("Welcome", "\345\217\226\346\266\210", nullptr));
        PVEGroup->setTitle(QApplication::translate("Welcome", "\345\205\210\346\211\213\346\250\241\345\274\217", nullptr));
        Player->setText(QApplication::translate("Welcome", "\347\216\251\345\256\266", nullptr));
        Computer->setText(QApplication::translate("Welcome", "\347\224\265\350\204\221", nullptr));
        label->setText(QApplication::translate("Welcome", "    \344\272\224\345\255\220\346\243\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
