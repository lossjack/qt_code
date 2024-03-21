#include "noframemainwindow.h"

NoFrameMainWindow::NoFrameMainWindow(QWidget *parent) : QMainWindow(parent)
{
    //设置无边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    //设置透明
    this->setAttribute(Qt::WA_TranslucentBackground);
}
void NoFrameMainWindow::mousePressEvent(QMouseEvent *event)
{
    m_bPressed = true;

    //记录鼠标按下的初始坐标位置
    m_ptPress = event->pos();

   // qDebug()<<"m_ptPress:"<<m_ptPress;
}

void NoFrameMainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bPressed){
        //qDebug()<<"event->pos():"<<event->pos();
        this->move(this->pos() + event->pos() - m_ptPress);
    }
}

void NoFrameMainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    m_bPressed = false;
}
