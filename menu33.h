#ifndef MENU33_H
#define MENU33_H

#include <QDialog>

namespace Ui {
class menu33;
}

class menu33 : public QDialog
{
    Q_OBJECT

public:
    explicit menu33(QWidget *parent = nullptr);
    ~menu33();

private:
    Ui::menu33 *ui;
};

#endif // MENU33_H
