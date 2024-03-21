#include "lessframewidget.h"
#include "ui_lessframewidget.h"

lessframewidget::lessframewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lessframewidget)
{
    ui->setupUi(this);
}

lessframewidget::~lessframewidget()
{
    delete ui;
}
