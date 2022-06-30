/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn;
    QCalendarWidget *calendar;
    QTextEdit *text;
    QLabel *clock;
    QLabel *show_date_time;
    QDateEdit *date;
    QTimeEdit *time;
    QLineEdit *date_input;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(630, 487);
        Widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));"));
        btn = new QPushButton(Widget);
        btn->setObjectName(QString::fromUtf8("btn"));
        btn->setGeometry(QRect(490, 450, 80, 24));
        btn->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        calendar = new QCalendarWidget(Widget);
        calendar->setObjectName(QString::fromUtf8("calendar"));
        calendar->setGeometry(QRect(40, 20, 411, 281));
        calendar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        calendar->setGridVisible(false);
        calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendar->setNavigationBarVisible(true);
        calendar->setDateEditEnabled(true);
        text = new QTextEdit(Widget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(40, 310, 531, 121));
        text->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 20px;\n"
"background-color: rgb(255, 255, 255);"));
        clock = new QLabel(Widget);
        clock->setObjectName(QString::fromUtf8("clock"));
        clock->setGeometry(QRect(470, 70, 131, 21));
        clock->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        show_date_time = new QLabel(Widget);
        show_date_time->setObjectName(QString::fromUtf8("show_date_time"));
        show_date_time->setGeometry(QRect(470, 30, 131, 21));
        show_date_time->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        date = new QDateEdit(Widget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setEnabled(true);
        date->setGeometry(QRect(470, 110, 151, 25));
        date->setFocusPolicy(Qt::WheelFocus);
        date->setAcceptDrops(false);
        date->setAutoFillBackground(false);
        date->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        date->setReadOnly(false);
        date->setButtonSymbols(QAbstractSpinBox::NoButtons);
        date->setMinimumDate(QDate(2022, 6, 26));
        time = new QTimeEdit(Widget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(470, 150, 151, 25));
        time->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 5px;"));
        time->setButtonSymbols(QAbstractSpinBox::NoButtons);
        time->setDateTime(QDateTime(QDate(2022, 6, 26), QTime(13, 0, 0)));
        time->setMaximumDateTime(QDateTime(QDate(2022, 6, 26), QTime(23, 59, 59)));
        time->setMinimumTime(QTime(0, 0, 0));
        time->setCalendarPopup(false);
        time->setTimeSpec(Qt::LocalTime);
        date_input = new QLineEdit(Widget);
        date_input->setObjectName(QString::fromUtf8("date_input"));
        date_input->setGeometry(QRect(40, 450, 441, 24));
        date_input->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 190, 611, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("img/bono.png")));
        label->raise();
        btn->raise();
        calendar->raise();
        text->raise();
        clock->raise();
        show_date_time->raise();
        date->raise();
        time->raise();
        date_input->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\354\272\230\353\246\260\353\215\224", nullptr));
        btn->setText(QCoreApplication::translate("Widget", "\354\236\205\353\240\245", nullptr));
        clock->setText(QCoreApplication::translate("Widget", "clock", nullptr));
        show_date_time->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        date->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy\353\205\204 M\354\233\224 d\354\235\274", nullptr));
        time->setDisplayFormat(QCoreApplication::translate("Widget", "hh\354\213\234mm\353\266\204", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
