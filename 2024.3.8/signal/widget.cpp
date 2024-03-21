#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    connect(this,SIGNAL(btn1_event(int)),this, SLOT(close()));
    connect(this,&Widget::btn1_event,this, &Widget::close);

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_btn1_clicked()
{
    qDebug()<<"11111111111";

    emit btn1_event(10086);
}
