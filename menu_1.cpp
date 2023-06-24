#include "menu_1.h"
#include "ui_menu_1.h"
#include<QPushButton>
#include<QtDebug>
menu_1::menu_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu_1)
  ,m22(nullptr)
  ,m33(nullptr)
  ,m44(nullptr)
{
    ui->setupUi(this);
    init_menu();
   // me1();
}

void menu_1::init_menu(){

    m22=new menu22(this);
    m33=new Dialog(this);
    m44=new menu33(this);


    //第三步，给wiget创一个stated wiget//
    ui->stackedWidget->addWidget(m22);
    //第七步
    ui->stackedWidget->addWidget(m33);
    ui->stackedWidget->addWidget(m44);

    ui->stackedWidget->setCurrentIndex(0);


    //第八步(找到按钮组的父类)
    auto l = ui->tool->children();

    for(auto it:l){
        if(it->objectName().contains("tb")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&menu_1::me1);
        }
    }
}


void menu_1::me1(){
   auto str = sender()->objectName();
        // Implementation of the function

while(1){
    if(str=="tb1_2"){
        ui->stackedWidget->setCurrentIndex(0);
            break;
            }
    if(str=="tb2_2"){
        ui->stackedWidget->setCurrentIndex(1);
            break;
            }
    if(str=="tb3_2"){
        ui->stackedWidget->setCurrentIndex(2);
            break;
            }

}
}


menu_1::~menu_1()
{
    delete ui;
}
