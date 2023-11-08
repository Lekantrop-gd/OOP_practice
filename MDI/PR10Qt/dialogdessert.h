#ifndef DIALOGDESSERT_H
#define DIALOGDESSERT_H

#include <QDialog>
#include "Dessert.h"

namespace Ui {
class DialogDessert;
}

class DialogDessert : public QDialog
{
    Q_OBJECT

signals:
    void created(Dessert* dessert);

public:
    explicit DialogDessert(QWidget *parent = nullptr);
    ~DialogDessert();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DialogDessert *ui;
};

#endif // DIALOGDESSERT_H
