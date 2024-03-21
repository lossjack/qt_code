#include "widget.h"
#include "ui_widget.h"
#include "timethread.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建线程
    TimeThread *timeThread = new TimeThread();
    //启动线程
    timeThread->start();

    connect(timeThread,&TimeThread::updatedata,this,&Widget::recv);
    connect(this,&Widget::timeBegin,timeThread,&TimeThread::updateMutex);
    connect(this,&Widget::timeStop,timeThread,&TimeThread::updateMutex);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::recv(QString dataTime,int num){
    ui->lineTime->setText(dataTime);
    ui->lineNum->setText(QString::number(num));
}


void Widget::on_btn_begin_clicked()
{
    //启动时间显示，发送一个启动信号
    emit timeBegin();

}

void Widget::on_btn_end_clicked()
{
     //结束时间显示，发送一个结束信号
     emit timeStop();
}
