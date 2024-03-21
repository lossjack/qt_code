#include "loginwidget.h"
#include "ui_loginwidget.h"
#include <QWidget>
#include "noframewidget.h"

LoginWidget::LoginWidget(QWidget *parent): Noframewidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
}

LoginWidget::~LoginWidget()
{
    delete ui;
}

