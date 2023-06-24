#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
     //第五步(前面加逗号，初始化)
    ,m1(nullptr)
    ,m2(nullptr)
    ,m3(nullptr)
    ,m4(nullptr)
{
    ui->setupUi(this);
    //第二步
    init_menu();
  // y=new login(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_menu()
{
    //第六步
    m1=new menu1(this);
    m2=new menu2(this);
    m3=new menu3(this);
    m4=new menu4(this);


    //第三步，给wiget创一个stated wiget//
    ui->stackedWidget->addWidget(m1);
    //第七步
    ui->stackedWidget->addWidget(m2);
    ui->stackedWidget->addWidget(m3);
    ui->stackedWidget->addWidget(m4);
    ui->stackedWidget->setCurrentIndex(0);
    //第八步(找到按钮组的父类)
    auto l = ui->tool->children();

    for(auto it:l){
        if(it->objectName().contains("tb")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&MainWindow::me1);
        }
    }


}
//第九步，写出槽函数(记得头文件声明)
void MainWindow::me1(){
   auto str = sender()->objectName();
        // Implementation of the function
while(1){
    if(str=="tb1"){
        ui->stackedWidget->setCurrentIndex(0);
            break;
            }
    if(str=="tb2"){
        ui->stackedWidget->setCurrentIndex(2);
            break;
            }
    if(str=="tb3"){
        ui->stackedWidget->setCurrentIndex(1);
            break;
            }
    if(str=="tb4"){
        ui->stackedWidget->setCurrentIndex(3);
            break;
            }
}
}
void MainWindow::on_tb2_triggered(QAction *arg1){
     // Implementation of the function
}


void MainWindow::on_tb5_clicked()
{

   // connect(ui->tb5, SIGNAL(clicked()),y , SLOT(sho()));
}
