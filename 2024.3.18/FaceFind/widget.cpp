#include "widget.h"
#include "ui_widget.h"

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <memory>

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


void Widget::on_btn_register_clicked()
{

}
