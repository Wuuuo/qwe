#ifndef MENU11_H
#define MENU11_H
#include"menu22.h"
#include"menu33.h"
#include "dialog.h"
#include <QDialog>

namespace Ui {
class menu11;
}

class menu11 : public QDialog
{
    Q_OBJECT

public:
    explicit menu11(QWidget *parent = nullptr);
    ~menu11();
   void init_menu();
    void me1();

private:
    Ui::menu11 *ui;



   menu22 * m2;
   Dialog * m3;
   menu33 * m4;
};

#endif // MENU11_H
