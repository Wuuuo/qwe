#include "menu111.h"
#include "ui_menu111.h"

menu111::menu111(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu111)
{
    ui->setupUi(this);
}

menu111::~menu111()
{
    delete ui;
}
