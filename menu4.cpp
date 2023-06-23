#include "menu4.h"
#include "ui_menu4.h"

menu4::menu4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu4)
{
    ui->setupUi(this);
}

menu4::~menu4()
{
    delete ui;
}
