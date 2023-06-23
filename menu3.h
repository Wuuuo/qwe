#ifndef MENU3_H
#define MENU3_H

#include <QWidget>

namespace Ui {
class menu3;
}

class menu3 : public QWidget
{
    Q_OBJECT

public:
    explicit menu3(QWidget *parent = nullptr);
    ~menu3();

private:
    Ui::menu3 *ui;
};

#endif // MENU3_H
