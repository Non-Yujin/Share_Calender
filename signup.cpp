#include "signup.h"
#include "ui_signup.h"

signup::signup(int sock, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    this->sock = sock;
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}
