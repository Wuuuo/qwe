#include "menu22.h"
#include "ui_menu22.h"

menu22::menu22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu22)
{
    ui->setupUi(this);
}

menu22::~menu22()
{
    delete ui;
}
