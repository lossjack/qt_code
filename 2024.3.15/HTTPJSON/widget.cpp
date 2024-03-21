#include "widget.h"
#include "ui_widget.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //1 实例化一个网络访问管理者类的对象
    manager = new QNetworkAccessManager;

    connect(manager,&QNetworkAccessManager::finished,this,&Widget::onRecvDataSlot);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QUrl url("http://img.keaitupian.cn/uploads/2021/04/26/4dbd9e6796d1435b8eaefd1ae9e04b26.jpg");
    QNetworkRequest request(url);
    manager->get(request);
}


void Widget::onRecvDataSlot(QNetworkReply *reply){
    QByteArray readData = reply->readAll();

    //把data 转成图片对象
    QPixmap pic;//创建图像对象
        pic.loadFromData(readData);//给图像对象加载数据
        pic = pic.scaled(ui->label->width(),ui->textEdit->height());

        ui->label->setPixmap(pic);//将图像设置到UI控件上

}
