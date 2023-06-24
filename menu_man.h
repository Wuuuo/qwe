#ifndef MENU_MAN_H
#define MENU_MAN_H

#include <QWidget>

namespace Ui {
class menu_man;
}

class menu_man : public QWidget
{
    Q_OBJECT

public:
    explicit menu_man(QWidget *parent = nullptr);
    ~menu_man();

private:
    Ui::menu_man *ui;
};

#endif // MENU_MAN_H
