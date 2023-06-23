#ifndef MENU1_H
#define MENU1_H

#include <QWidget>

namespace Ui {
class menu1;
}

class menu1 : public QWidget
{
    Q_OBJECT

public:
    explicit menu1(QWidget *parent = nullptr);
    ~menu1();

private:
    Ui::menu1 *ui;
};

#endif // MENU1_H
