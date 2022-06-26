#include "signup.h"
#include "ui_signup.h"
#include <unistd.h>
#include <cstring>
#include <QMessageBox>
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
    std::string send_data = "signup/" + ui->ID_text->text().toStdString();
    if(send_data == "")
        QMessageBox::information(this, "error", "공백");
    else
    {
        char msg[30];
        write(sock, send_data.c_str(), sizeof(send_data));
        read(sock, msg, sizeof(msg));
        if(strcmp(msg, "OK") == 0)
            check = true;
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
            if(ui->PW_text != ui->PW2_text)
                QMessageBox::information(this, "error", "비밀번호 불일치");
            else
            {
                std::string send_data = "signup/" + ui->ID_text->text().toStdString(); + "/" +
                    pw.toStdString() + "/" + name.toStdString();
                write(sock, send_data.c_str(), sizeof(send_data));
            }
        }
    }
}

void signup::on_exit_btn_clicked()
{
    this->close();
}
