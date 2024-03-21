#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //创建主界面的对象
    MainWindow *m = new MainWindow(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->hide();

    QString str = ui->lineEdit->text();

    connect(this,&Widget::login_account_signal,m,&MainWindow::log_account_slot);

//    //connect(登录界面对象指针，发出信号(携带了用户名数据)，第二个界面对象指针，接受执行槽函数);
//    connect(this,&LoginWidget::sendDataSignal,w,&MainWindow::onRecvDataSlot);


    emit login_account_signal(str);
    m->show();
}
