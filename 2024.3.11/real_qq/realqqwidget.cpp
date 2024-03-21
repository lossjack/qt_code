#include "realqqwidget.h"
#include "ui_realqqwidget.h"

#include <QDebug>
#include "errordialog.h"
#include <Qlist>
#include <QMap>

realqqWidget::realqqWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::realqqWidget)
{
    ui->setupUi(this);
}

realqqWidget::~realqqWidget()
{
    delete ui;
}


void realqqWidget::on_btn_login_clicked()
{
    //获取账号栏
    QString account= ui->account_line->text();
    if(account == ""){
        qDebug()<<"account is null";
        errorDialog* err = new errorDialog;
        err->setAttribute(Qt::WA_DeleteOnClose);
        err->show();
        return ;
    }

    //获取密码栏
    QString passwd= ui->passwd_line->text();
    if(passwd == ""){
        qDebug()<<"passwd is null";
        errorDialog* err = new errorDialog;
        err->setAttribute(Qt::WA_DeleteOnClose);
        err->setData("10086");
        err->exec();
        return ;
    }

    qDebug()<<"正在校验账号和密码";


}
