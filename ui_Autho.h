/********************************************************************************
** Form generated from reading UI file 'Autho.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHO_H
#define UI_AUTHO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Autho
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Autho)
    {
        if (Autho->objectName().isEmpty())
            Autho->setObjectName(QString::fromUtf8("Autho"));
        Autho->resize(413, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Autho->sizePolicy().hasHeightForWidth());
        Autho->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/magic/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Autho->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Autho);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_4 = new QWidget(Autho);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        gridLayout->addWidget(widget_3, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/magic/favicon.ico")));

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(widget);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        verticalLayout->addWidget(label);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        gridLayout_2->addWidget(widget_4, 0, 0, 1, 1);


        retranslateUi(Autho);

        QMetaObject::connectSlotsByName(Autho);
    } // setupUi

    void retranslateUi(QWidget *Autho)
    {
        Autho->setWindowTitle(QApplication::translate("Autho", "\346\270\270\346\210\217\347\211\210\346\234\254", nullptr));
        label_4->setText(QApplication::translate("Autho", "  \347\211\210\346\234\254  1.0.1", nullptr));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("Autho", " \344\272\224\345\255\220\346\243\213\345\260\217\346\270\270\346\210\217", nullptr));
        label->setText(QApplication::translate("Autho", "  2019\347\272\247\350\207\252\345\212\250\345\214\226  \346\235\216\346\263\275\350\257\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autho: public Ui_Autho {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHO_H
