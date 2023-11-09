#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "Fruit.h"
#include "Dessert.h"
#include "dialogfruitlist.h"
#include "dialogdessertlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void addedFruit(QList<Fruit*> fruits);
    void addedDessert(QList<Dessert*> desserts);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void addFruit(Fruit *fruit);

    void addDessert(Dessert *dessert);

private:
    Ui::MainWindow *ui;
    QList<Fruit*> fruits;
    QList<Dessert*> desserts;
    DialogFruitList *dialogFruitList;
    DialogDessertList *dialogDessertList;
};

#endif // MAINWINDOW_H
