#ifndef MENU22_H
#define MENU22_H

#include <QDialog>

namespace Ui {
class menu22;
}

class menu22 : public QDialog
{
    Q_OBJECT

public:
    explicit menu22(QWidget *parent = nullptr);
    ~menu22();

private:
    Ui::menu22 *ui;
};

#endif // MENU22_H
