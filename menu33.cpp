#include "menu33.h"
#include "ui_menu33.h"
#include"mainwindow.h"
menu33::menu33(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu33)
{
    ui->setupUi(this);

}

menu33::~menu33()
{
    delete ui;
}
