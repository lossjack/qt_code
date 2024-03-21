#ifndef REALQQWIDGET_H
#define REALQQWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class realqqWidget; }
QT_END_NAMESPACE

class realqqWidget : public QWidget
{
    Q_OBJECT

public:
    realqqWidget(QWidget *parent = nullptr);
    ~realqqWidget();

private slots:
    void on_btn_login_clicked();

private:
    Ui::realqqWidget *ui;
};
#endif // REALQQWIDGET_H
