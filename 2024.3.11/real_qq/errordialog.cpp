#include "errordialog.h"
#include "ui_errordialog.h"
#include <QDebug>
errorDialog::errorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorDialog)
{
    ui->setupUi(this);
}

errorDialog::~errorDialog()
{
    delete ui;
}

void errorDialog::on_pushButton_clicked()
{
    qDebug()<<"~errorDialog";
    close();
}

void errorDialog::setData(QString data)
{
    ui->error_reason_label->setText(data);
}


