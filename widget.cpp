#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(int sock, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->sock = sock;
    QPixmap pix("/home/iot/C++/None_YuJin/client/img/bono.png");
    ui->label->setPixmap(pix);

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


std::vector<std::string> Widget::split(std::string str, char Delimiter) {
    std::istringstream iss(str);             // istringstream에 str을 담는다.
    std::string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

    std::vector<std::string> result;

    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
    result = Widget::sort(result);
    return result;
}

std::vector<std::string> Widget::sort(std::vector<std::string>str)
{
    int len = str.size();

    std::string temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (str[j].compare(str[j + 1]) > 0)
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    return str;
}

void Widget::show_time()
{
    now = QTime::currentTime();//현재시간 받아오기
    QString now_time = now.toString("hh시 mm분 ss초");//24시간 채제로 string형태로 저장
    ui->clock->setText(now_time);//라벨에 적용
    QDate set_date = ui->date->date();
    QDate slt_date = ui->calendar->selectedDate();
    if(slt_date != set_date)
        ui->date->setDate(slt_date);
}

void Widget::on_btn_clicked()//버튼 클릭시
{
    std::string check_msg;
    for(size_t i=0; i<split_msg.size();i++)
    {
        check_msg += split_msg[i];
    }
    QTime slt_time = ui->time->time();
    QString time = slt_time.toString("hh시 mm분 - ");
    QString str = time + ui->date_input->text();

    if(check_msg.find(str.toStdString())== std::string::npos){
        QDate slect_date = ui->calendar->selectedDate();//selectedDate의 반환값은 QDate이기에 같은 QDate형태에 저장
        slt_date = slect_date.toString("yyyy년 MM월 dd일/");
        std::string send_str = "update/" + slt_date.toStdString() + str.toStdString();

        write(sock,send_str.c_str(),send_str.size()+1);

        msgBox.setText(time+"\n"+ui->date_input->text()+"\n일정이 추가 되었습니다");
        ui->date_input->clear();
        msgBox.exec();

        Widget::on_calendar_clicked();
    }else
    {
        msgBox.setText("같은 시간대에 같은 일정이 있습니다");
        msgBox.exec();
    }
}

void Widget::on_calendar_clicked()
{
    char msg[1024];
    std::string recv_msg;
    ui->text->clear();
    ui->date_input->clear();
    QDate slect_date = ui->calendar->selectedDate();//selectedDate의 반환값은 QDate이기에 같은 QDate형태에 저장
    slt_date = slect_date.toString("yyyy년 MM월 dd일");
    ui->date->setDate(slect_date);
    std::string str = "choose_date/" + slt_date.toStdString();
    write(sock,str.c_str(),str.size());

    usleep(10000);

    while(1){
        read(sock,msg,sizeof(msg));
        if(strcmp(msg,"X")==0)
            break;
        recv_msg += msg;
    }

    split_msg = Widget::split(recv_msg,'/');

    for(size_t i=0; i<split_msg.size();i++)
    {
        ui->text->append(QString::fromStdString(split_msg[i]));
    }
}
