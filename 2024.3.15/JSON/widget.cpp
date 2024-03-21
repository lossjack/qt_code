#include "widget.h"
#include "ui_widget.h"

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFile file("tianqi.json");

    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            qDebug() << "Could not open file";
            return ;
    }

    QByteArray readData =file.readAll();

    QJsonDocument doc = QJsonDocument::fromJson(readData);
}

Widget::~Widget()
{
    delete ui;
}

