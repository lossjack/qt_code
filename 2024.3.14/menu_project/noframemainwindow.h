#ifndef NOFRAMEMAINWINDOW_H
#define NOFRAMEMAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

class NoFrameMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit NoFrameMainWindow(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *event) ; //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event) ; //鼠标移动事件
    void mouseReleaseEvent(QMouseEvent *event);
private:
    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志
    QPoint m_ptPress;//鼠标按下的初始位置

signals:

};

#endif // NOFRAMEMAINWINDOW_H
