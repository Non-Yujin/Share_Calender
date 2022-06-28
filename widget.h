#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QDateTime>
#include <QTimer>
#include <QDateTime>
#include <QMessageBox>
#include <cstring>
#include <vector>
#include <string>
#include <sstream>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(int sock, QWidget *parent = nullptr);
    ~Widget();
    std::map<QString,QString> saved_data;

protected:
    QTime now;
    QTimer *timer;
    QDateTime datetime;
    QString date;
    QString slt_date;

private slots:
    void on_btn_clicked(); //버튼 클릭 시
    void show_time();// 현재 시간 보여주기
    void on_calendar_clicked();//캘린더를 클릭했을 시
    std::vector<std::string> sort(std::vector<std::string>str);
    std::vector<std::string> split(std::string str, char Delimiter);

private:
    int sock;
    Ui::Widget *ui;
};
#endif // WIDGET_H
