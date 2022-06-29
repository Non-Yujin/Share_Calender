#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <cstring>

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(int sock, QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_check_btn_clicked();

    void on_signup_btn_clicked();

    void on_exit_btn_clicked();

private:
    bool check;
    int sock;
    Ui::signup *ui;
};

#endif // SIGNUP_H
