#ifndef QQWIDGET_H
#define QQWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class qqWidget; }
QT_END_NAMESPACE

class qqWidget : public QWidget
{
    Q_OBJECT

public:
    qqWidget(QWidget *parent = nullptr);
    ~qqWidget();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::qqWidget *ui;
};
#endif // QQWIDGET_H
