/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Open;
    QPushButton *Backward;
    QPushButton *Begin;
    QPushButton *Forward;
    QSlider *Voice;
    QComboBox *comboBox;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Time;
    QLabel *label_3;
    QLabel *TTime;
    QSlider *Slide;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(733, 454);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 60));
        widget->setStyleSheet(QString::fromUtf8("background-color: transparent;nborder: none;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Open = new QPushButton(widget);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Open->sizePolicy().hasHeightForWidth());
        Open->setSizePolicy(sizePolicy);
        Open->setMinimumSize(QSize(50, 50));
        Open->setMaximumSize(QSize(50, 50));
        Open->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/img/open1.png);"));

        horizontalLayout->addWidget(Open);

        Backward = new QPushButton(widget);
        Backward->setObjectName(QString::fromUtf8("Backward"));
        Backward->setMinimumSize(QSize(50, 50));
        Backward->setMaximumSize(QSize(50, 50));
        Backward->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/img/rewind1.png);"));

        horizontalLayout->addWidget(Backward);

        Begin = new QPushButton(widget);
        Begin->setObjectName(QString::fromUtf8("Begin"));
        Begin->setMinimumSize(QSize(50, 50));
        Begin->setMaximumSize(QSize(50, 50));
        Begin->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/img/play2.png);"));

        horizontalLayout->addWidget(Begin);

        Forward = new QPushButton(widget);
        Forward->setObjectName(QString::fromUtf8("Forward"));
        Forward->setMinimumSize(QSize(50, 50));
        Forward->setMaximumSize(QSize(50, 50));
        Forward->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/img/forward1.png);"));

        horizontalLayout->addWidget(Forward);

        Voice = new QSlider(widget);
        Voice->setObjectName(QString::fromUtf8("Voice"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Voice->sizePolicy().hasHeightForWidth());
        Voice->setSizePolicy(sizePolicy1);
        Voice->setMinimumSize(QSize(30, 10));
        Voice->setMaximumSize(QSize(170, 33));
        Voice->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Voice);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(58, 20));
        comboBox->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;nborder: none;"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 31));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        Time = new QLabel(widget_2);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setMaximumSize(QSize(40, 16777215));
        Time->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(Time);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        TTime = new QLabel(widget_2);
        TTime->setObjectName(QString::fromUtf8("TTime"));
        TTime->setMaximumSize(QSize(40, 16777215));
        TTime->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(TTime);

        Slide = new QSlider(widget_2);
        Slide->setObjectName(QString::fromUtf8("Slide"));
        Slide->setMaximumSize(QSize(99999, 16777215));
        Slide->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(Slide);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        Open->setText(QString());
        Backward->setText(QString());
        Begin->setText(QString());
        Forward->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "0.75X", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "1X", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "1.5X", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "2X", nullptr));

        Time->setText(QCoreApplication::translate("Widget", "00 : 00 ", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "/", nullptr));
        TTime->setText(QCoreApplication::translate("Widget", "00 : 00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
