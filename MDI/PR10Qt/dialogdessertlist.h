#ifndef DIALOGDESSERTLIST_H
#define DIALOGDESSERTLIST_H

#include <QDialog>
#include <Dessert.h>
#include "dbmanager.h"

namespace Ui {
class DialogDessertList;
}

class DialogDessertList : public QDialog
{
    Q_OBJECT

public slots:
    void updateList(DBmanager *dbmanager);

public:
    explicit DialogDessertList(QWidget *parent = nullptr);
    ~DialogDessertList();

private:
    Ui::DialogDessertList *ui;
};

#endif // DIALOGDESSERTLIST_H
