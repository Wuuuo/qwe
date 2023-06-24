#ifndef MENU111_H
#define MENU111_H

#include <QDialog>

namespace Ui {
class menu111;
}

class menu111 : public QDialog
{
    Q_OBJECT

public:
    explicit menu111(QWidget *parent = nullptr);
    ~menu111();

private:
    Ui::menu111 *ui;
};

#endif // MENU111_H
