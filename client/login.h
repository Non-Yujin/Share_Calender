#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(int sock, QWidget *parent = nullptr);
    ~login();

private:
    int sock;
    Ui::login *ui;
private slots:
    void on_login_btn_clicked();
    void on_signup_btn_clicked();
    void on_exit_btn_clicked();
};
#endif // LOGIN_H
