#include "menu3.h"
#include "ui_menu3.h"

menu3::menu3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu3)
{
    ui->setupUi(this);
}

menu3::~menu3()
{
    delete ui;
}
