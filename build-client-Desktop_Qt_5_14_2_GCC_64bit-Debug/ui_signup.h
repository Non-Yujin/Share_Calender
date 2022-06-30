/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLineEdit *ID_text;
    QLineEdit *PW_text;
    QLineEdit *PW2_text;
    QLineEdit *name_text;
    QPushButton *check_btn;
    QPushButton *signup_btn;
    QPushButton *exit_btn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(198, 215);
        ID_text = new QLineEdit(signup);
        ID_text->setObjectName(QString::fromUtf8("ID_text"));
        ID_text->setGeometry(QRect(10, 20, 113, 25));
        PW_text = new QLineEdit(signup);
        PW_text->setObjectName(QString::fromUtf8("PW_text"));
        PW_text->setGeometry(QRect(10, 100, 113, 25));
        PW2_text = new QLineEdit(signup);
        PW2_text->setObjectName(QString::fromUtf8("PW2_text"));
        PW2_text->setGeometry(QRect(10, 140, 113, 25));
        name_text = new QLineEdit(signup);
        name_text->setObjectName(QString::fromUtf8("name_text"));
        name_text->setGeometry(QRect(10, 60, 113, 25));
        check_btn = new QPushButton(signup);
        check_btn->setObjectName(QString::fromUtf8("check_btn"));
        check_btn->setGeometry(QRect(130, 20, 61, 25));
        check_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"color: rgb(255, 255, 255);"));
        signup_btn = new QPushButton(signup);
        signup_btn->setObjectName(QString::fromUtf8("signup_btn"));
        signup_btn->setGeometry(QRect(10, 180, 81, 25));
        signup_btn->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        exit_btn = new QPushButton(signup);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(100, 180, 89, 25));
        exit_btn->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 67, 17));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 42, 67, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 82, 67, 17));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 122, 67, 17));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 200, 215));
        label_5->setTextFormat(Qt::AutoText);
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../\353\213\244\354\232\264\353\241\234\353\223\234/externalFile.jpeg")));
        label_5->setScaledContents(false);
        label_5->raise();
        ID_text->raise();
        PW_text->raise();
        PW2_text->raise();
        name_text->raise();
        check_btn->raise();
        signup_btn->raise();
        exit_btn->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        check_btn->setText(QCoreApplication::translate("signup", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        signup_btn->setText(QCoreApplication::translate("signup", "\355\231\225\354\235\270", nullptr));
        exit_btn->setText(QCoreApplication::translate("signup", "\354\267\250\354\206\214", nullptr));
        label->setText(QCoreApplication::translate("signup", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "PW", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "PW Check", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
