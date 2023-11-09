#ifndef DIALOGFRUITLIST_H
#define DIALOGFRUITLIST_H

#include <QDialog>
#include "Fruit.h"

namespace Ui {
class DialogFruitList;
}

class DialogFruitList : public QDialog
{
    Q_OBJECT

public slots:
    void updateList(QList<Fruit*> fruits);

public:
    explicit DialogFruitList(QWidget *parent = nullptr);
    ~DialogFruitList();

private:
    Ui::DialogFruitList *ui;
};

#endif // DIALOGFRUITLIST_H
