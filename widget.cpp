#include "widget.h"
#include "./ui_widget.h"
#include <QTimer>
#include <cstring>
#include <QDateTime>
#include <QMessageBox>

Widget::Widget(int sock, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->sock = sock;
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(show_time()));//show_time 함수 연결
    timer->start();//timer 시작

    datetime=QDateTime::currentDateTime();//현재 날자를 저장
    QString now_datetime = datetime.toString("yyyy년 MM월 dd일");//현재 날자를 string형태로 변환
    ui->show_date_time->setText(now_datetime);//변환한 날자를 ui의 라벨에 적용

    ui->calendar->setMinimumDate(QDate(2022,6,26));//캘린더 시작 날자 기준 잡기
}

Widget::~Widget()
{
    delete ui;
}



void Widget::show_time()
{
    now = QTime::currentTime();//현재시간 받아오기
    QString now_time = now.toString("AP hh시 mm분 ss초");//12시간 채제로 string형태로 저장
    ui->clock->setText(now_time);//라벨에 적용
}

void Widget::on_btn_clicked()//버튼 클릭시
{
    QTime slt_time = ui->time->time();
    QString time = slt_time.toString("AP hh시 mm분 - ");
    QString str = time + ui->date_input->text()+ "\n";
    auto item = saved_data.find(slt_date);
    if(item != saved_data.end())//만약 key가 있을시
    {
        item->second += str;
        ui->text->setText(item->second);
    }else//없다면 insert로 추가
        saved_data.insert(std::make_pair(slt_date,str));
        ui->text->setText(str);
    QMessageBox msgBox;
    msgBox.setText(str);
    msgBox.exec();
}

void Widget::on_calendar_clicked(const QDate &date)
{
    slt_date = ui->calendar->selectedDate();//selectedDate의 반환값은 QDate이기에 같은 QDate형태에 저장
    ui->text->clear();
    ui->date->setDate(slt_date);
    auto item = saved_data.find(slt_date);
    if(item != saved_data.end())
    {
        if(item->second.length() >= 1)//만약 key에 저장된 정보의 길이가 0 이상일 시
        {
            ui->text->setText(item->second);
        }
    }
}
