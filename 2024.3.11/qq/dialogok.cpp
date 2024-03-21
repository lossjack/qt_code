#include "dialogok.h"
#include "ui_dialogok.h"

DialogOk::DialogOk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogOk)
{
    ui->setupUi(this);
}

DialogOk::~DialogOk()
{
    delete ui;
}
