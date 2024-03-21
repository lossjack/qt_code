#include "noframewidget.h"

Noframewidget::Noframewidget(QWidget *parent) : QWidget(parent)
{
    //设置无边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    //设置透明
    this->setAttribute(Qt::WA_TranslucentBackground);
}

void Noframewidget::mousePressEvent(QMouseEvent *event)
{
    m_bPressed = true;

    //记录鼠标按下的初始坐标位置
    m_ptPress = event->pos();

   // qDebug()<<"m_ptPress:"<<m_ptPress;
}

void Noframewidget::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bPressed){
        //qDebug()<<"event->pos():"<<event->pos();
        this->move(this->pos() + event->pos() - m_ptPress);
    }
}

void Noframewidget::mouseReleaseEvent(QMouseEvent *event)
{
    m_bPressed = false;
}
