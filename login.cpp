#include "login.h"
#include "ui_login.h"
#include <QtDebug>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{

    delete ui;
}

void login::on_pB1_clicked()
{
    setResult(1);
    hide();
}

void login::on_pB2_clicked()
{
    setResult(0);
    hide();
}

void login::sho(){
   this->exec();
}
