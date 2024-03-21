#ifndef FILEWIDGET_H
#define FILEWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class fileWidget; }
QT_END_NAMESPACE

class fileWidget : public QWidget
{
    Q_OBJECT

public:
    fileWidget(QWidget *parent = nullptr);
    ~fileWidget();

private slots:
    void on_btn_open_clicked();

private:
    Ui::fileWidget *ui;
};
#endif // FILEWIDGET_H
