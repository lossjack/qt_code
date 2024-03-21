#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    Q_timer = new QTimer;
    Q_timer->setInterval(1);
    connect(Q_timer,&QTimer::timeout,this,&Widget::timeOutSlots);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::timeOutSlots(){
    QTime* time = new QTime;
    ui->lineEdit->setText(time->currentTime().toString("HH:mm:ss:zzz"));
}

void Widget::on_btn_begin_clicked()
{
    Q_timer->start();
}

void Widget::on_btn_end_clicked()
{
    Q_timer->stop();
    ui->lineEdit->setText("");
}
