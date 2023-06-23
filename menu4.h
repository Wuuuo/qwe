#ifndef MENU4_H
#define MENU4_H

#include <QWidget>

namespace Ui {
class menu4;
}

class menu4 : public QWidget
{
    Q_OBJECT

public:
    explicit menu4(QWidget *parent = nullptr);
    ~menu4();

private:
    Ui::menu4 *ui;
};

#endif // MENU4_H
