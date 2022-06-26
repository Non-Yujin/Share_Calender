#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "widget.h"
#include <iostream>
#include <unistd.h>
#include <cstring>
#include <QMessageBox>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>

login::login(int sock, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    this->sock = sock;
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login_btn_clicked()
{
    //this->hide();
    Widget w(sock);
    w.show();
//    QString id = ui->ID_text->text();
//    QString pw = ui->PW_text->text();

//    if(id == "" || pw == "")
//    {
//        QMessageBox::information(this, "error", "공백");
//    }
//    else
//    {
//        char msg[1024];
//        std::string send_data = "login/" + id.toStdString() + "/" + pw.toStdString();
//        write(sock, send_data.c_str(), sizeof(send_data));
//        read(sock, msg, sizeof(msg));
//    }
}

void login::on_signup_btn_clicked()
{
    this->hide();
    signup signup(sock);
    signup.setModal(true);
    signup.exec();
    this->show();
}

void login::on_exit_btn_clicked()
{
//    close(this->sock);
    exit(0);
}


