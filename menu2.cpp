#include "menu2.h"
#include "ui_menu2.h"

menu2::menu2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu2)
{
    ui->setupUi(this);


}

menu2::~menu2()
{
    delete ui;
}
