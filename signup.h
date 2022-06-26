#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(int sock, QWidget *parent = nullptr);
    ~signup();

private:
    int sock;
    Ui::signup *ui;
};

#endif // SIGNUP_H
