#ifndef LOGWIDGET_H
#define LOGWIDGET_H

#include <QWidget>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class LogWidget; }
QT_END_NAMESPACE

class LogWidget : public QWidget
{
    Q_OBJECT

public:
    LogWidget(QWidget *parent = nullptr);
    ~LogWidget();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

public slots:
//    void onTitleBtnClicked();
private slots:
    void on_btn_min_clicked();

    void on_btn_max_clicked();

    void on_btn_close_clicked();

private:
    QRect m_areaMovable;//可移动窗口的区域，鼠标只有在该区域按下才能移动窗口
    bool m_bPressed;//鼠标按下标志
    QPoint m_ptPress;//鼠标按下的初始位置，当前窗口的初始位置

private:
    Ui::LogWidget *ui;
};
#endif // LOGWIDGET_H
