#ifndef NOFRAMEWIDGET_H
#define NOFRAMEWIDGET_H

#include <QWidget>
#include <QMouseEvent>

class Noframewidget : public QWidget
{
    Q_OBJECT
public:
    explicit Noframewidget(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *event) ; //鼠标按下事件
    void mouseMoveEvent(QMouseEvent *event) ; //鼠标移动事件
    void mouseReleaseEvent(QMouseEvent *event);
private:
    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志
    QPoint m_ptPress;//鼠标按下的初始位置
signals:

};

#endif // NOFRAMEWIDGET_H
