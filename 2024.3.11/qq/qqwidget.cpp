#include "qqwidget.h"
#include "ui_qqwidget.h"
#include "dialogok.h"

qqWidget::qqWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qqWidget)
{
    ui->setupUi(this);
}

qqWidget::~qqWidget()
{
    delete ui;
}


void qqWidget::on_pushButton_3_clicked()
{
    DialogOk* msg1 = new DialogOk;
//    msg1->show();
    msg1->exec();
}
