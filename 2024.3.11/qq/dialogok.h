#ifndef DIALOGOK_H
#define DIALOGOK_H

#include <QDialog>

namespace Ui {
class DialogOk;
}

class DialogOk : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOk(QWidget *parent = nullptr);
    ~DialogOk();

private:
    Ui::DialogOk *ui;
};

#endif // DIALOGOK_H
