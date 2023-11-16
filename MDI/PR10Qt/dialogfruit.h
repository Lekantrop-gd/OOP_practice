#ifndef DIALOGFRUIT_H
#define DIALOGFRUIT_H

#include <QDialog>
#include "Fruit.h"

namespace Ui {
class DialogFruit;
}

class DialogFruit : public QDialog
{
    Q_OBJECT

signals:
    void created(Fruit* fruit);

public:
    explicit DialogFruit(QWidget *parent = nullptr);
    ~DialogFruit();

private slots:
    void on_create_clicked();

    void on_back_clicked();

private:
    Ui::DialogFruit *ui;
};

#endif // DIALOGFRUIT_H
