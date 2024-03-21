#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建网络访问管理器
    QNetworkAccessManager manager;

    //创建请求对象
    QNetworkRequest request;

    //创建返回对象
    QNetworkReply reply;



}

Widget::~Widget()
{
    delete ui;
}

