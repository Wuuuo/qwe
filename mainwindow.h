#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"login.h"
#include"menu1.h"
#include"menu2.h"
#include"menu3.h"
#include"menu4.h"
#include <QMainWindow>
#include<QPushButton>
#include<QtDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //第一步
    void init_menu();
    //第九步
   void me1();
login y;
private slots:
    void on_tb2_triggered(QAction *arg1);




    void on_tb5_clicked();

private:
    Ui::MainWindow *ui;
    //第四步
    menu1 * m1;
    menu2 * m2;
    menu3 * m3;
    menu4 * m4;
};
#endif // MAINWINDOW_H
