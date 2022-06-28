#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>

signup::signup(int sock, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    check = false;
    this->sock = sock;
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_check_btn_clicked()
{
    QString id = ui->ID_text->text();
    if(id == "")
        QMessageBox::information(this, "error", "공백");
    else
    {
        std::string send_data = "idcheck/" + id.toStdString();
        write(sock, send_data.c_str(), sizeof(send_data));
        char msg[30];
        read(sock, msg, sizeof(msg));
        if(strcmp(msg, "OK") == 0)
        {
            check = true;
            QMessageBox::information(this, "OK", "통과");
        }
        else
            QMessageBox::information(this, "error", "중복");
    }
}

void signup::on_signup_btn_clicked()
{
    if(!check)
        QMessageBox::information(this, "error", "중복확인");
    else
    {
        QString pw = ui->PW_text->text();
        QString name = ui->name_text->text();
        if(pw == "" || name == "")
            QMessageBox::information(this, "error", "공백");
        else
        {
            if(ui->PW_text->text() != ui->PW2_text->text())
                QMessageBox::information(this, "error", "비밀번호 불일치");
            else
            {
                std::string send_data = "signup/" + ui->ID_text->text().toStdString() + "/" +
                    pw.toStdString() + "/" + name.toStdString();
                write(sock, send_data.c_str(), sizeof(send_data));
                QMessageBox::information(this, "축", "축) 가입");
                this->close();
            }
        }
    }
}

void signup::on_exit_btn_clicked()
{
    this->close();
}
