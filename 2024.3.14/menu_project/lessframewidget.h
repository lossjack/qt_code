#ifndef LESSFRAMEWIDGET_H
#define LESSFRAMEWIDGET_H

#include <QWidget>

namespace Ui {
class lessframewidget;
}

class lessframewidget : public QWidget
{
    Q_OBJECT

public:
    explicit lessframewidget(QWidget *parent = nullptr);
    ~lessframewidget();

private:
    Ui::lessframewidget *ui;
};

#endif // LESSFRAMEWIDGET_H
