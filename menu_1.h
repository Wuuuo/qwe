#ifndef MENU_1_H
#define MENU_1_H
#include"menu22.h"
#include"menu33.h"
#include "dialog.h"
#include <QWidget>
#include <QMainWindow>
namespace Ui {
class menu_1;
}

class menu_1 : public QWidget
{
    Q_OBJECT

public:
    explicit menu_1(QWidget *parent = nullptr);
    ~menu_1();
    void init_menu();
    void me1();

private:
    Ui::menu_1 *ui;
    menu22 * m22;
    Dialog * m33;
    menu33 * m44;
};

#endif // MENU_1_H
