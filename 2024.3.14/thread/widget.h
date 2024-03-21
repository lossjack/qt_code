#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QThread>
#include <QDebug>
#include <QTime>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void recv(QString dataTime,int num);

signals:
    void timeBegin();
    void timeStop();

private slots:
    void on_btn_begin_clicked();

    void on_btn_end_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
