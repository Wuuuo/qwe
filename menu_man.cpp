#include "menu_man.h"
#include "ui_menu_man.h"

menu_man::menu_man(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu_man)
{
    ui->setupUi(this);
}

menu_man::~menu_man()
{
    delete ui;
}
