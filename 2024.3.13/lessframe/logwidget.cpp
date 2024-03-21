#include "logwidget.h"
#include "ui_logwidget.h"
#include <QDebug>

LogWidget::LogWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogWidget)
{
    ui->setupUi(this);

    //设置无边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    //设置透明
    this->setAttribute(Qt::WA_TranslucentBackground);
}

LogWidget::~LogWidget()
{
    delete ui;
}

void LogWidget::mousePressEvent(QMouseEvent *event)
{
    m_bPressed = true;

    //记录鼠标按下的初始坐标位置
    m_ptPress = event->pos();

    qDebug()<<"m_ptPress:"<<m_ptPress;
}

void LogWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bPressed){
         qDebug()<<"event->pos():"<<event->pos();
//        qDebug()<<"this->pos():"<<this->pos();

        /*this->pos():所在电脑的位置，event->pos():鼠标所在窗口位置，m_ptPress:*/
        this->move(this->pos() + event->pos() - m_ptPress);
    }
}

void LogWidget::mouseReleaseEvent(QMouseEvent *event)
{
//    m_bPressed = false;
}

//void LogWidget::onTitleBtnClicked()
//{
//    QPushButton*btn = (QPushButton*) this->sender();

//    if(btn->objectName() == "btn_min")//最小化
//    {
//        this->showMinimized();
//    }
//    else if(btn->objectName() == "btn_max") //最大化
//    {
//        if(this->isMaximized())//如果当前已经是最大化了，那么应该显示正常化
//        {
//            this->showNormal();
//        }else{
//            this->showMaximized();
//        }

//    }else{
//        this->close();
//    }
//}


void LogWidget::on_btn_min_clicked()
{
    this->showMinimized();
}

void LogWidget::on_btn_max_clicked()
{
    this->showMaximized();
}

void LogWidget::on_btn_close_clicked()
{
    this->close();
}
