#ifndef MENU2_H
#define MENU2_H

#include <QWidget>

namespace Ui {
class menu2;
}

class menu2 : public QWidget
{
    Q_OBJECT

public:
    explicit menu2(QWidget *parent = nullptr);
    ~menu2();

private:
    Ui::menu2 *ui;
};

#endif // MENU2_H
