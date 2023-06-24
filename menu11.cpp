#include "menu11.h"
#include "ui_menu11.h"
#include<QPushButton>
#include<QtDebug>
menu11::menu11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu11)

  ,m2(nullptr)
  ,m3(nullptr)
  ,m4(nullptr)
{
    ui->setupUi(this);
     init_menu();
     me1();

}

void menu11::init_menu(){

    m2=new menu22(this);
    m3=new Dialog(this);
    m4=new menu33(this);

    //第三步，给wiget创一个stated wiget//
    ui->stackedWidget->addWidget(m2);
    //第七步
    ui->stackedWidget->addWidget(m3);
    ui->stackedWidget->addWidget(m4);

    ui->stackedWidget->setCurrentIndex(0);


    //第八步(找到按钮组的父类)
    auto l = ui->tool->children();

    for(auto it:l){
        if(it->objectName().contains("tb")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&menu11::me1);
        }
    }
}

void menu11::me1(){
   auto str = sender()->objectName();
        // Implementation of the function
while(1){
    if(str=="tb1"){
        ui->stackedWidget->setCurrentIndex(0);
            break;
            }
    if(str=="tb2"){
        ui->stackedWidget->setCurrentIndex(1);
            break;
            }
    if(str=="tb3"){
        ui->stackedWidget->setCurrentIndex(2);
            break;
            }

}
}

menu11::~menu11()
{
    delete ui;
}
