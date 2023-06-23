#include "mainwindow.h"
#include <QMainWindow>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login x;
    int ret=x.exec();
    while(1){
        if(ret==1){
            break;
        }
        if(ret==0){
            exit(0);
            return 0;
        }
    }
    w.show();
    return a.exec();
}
