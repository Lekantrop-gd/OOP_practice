#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogfruit.h"
#include "dialogdessert.h"
#include "dialogfruitlist.h"
#include "dialogdessertlist.h"
#include "QListWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this, &MainWindow::recivedFruit, this, &MainWindow::addFruit);
    this->dialogFruitList = new DialogFruitList;
    this->dialogFruitList->setWindowTitle("Відображення фруктів");
    this->dialogDessertList = new DialogDessertList;
    this->dialogDessertList->setWindowTitle("Відображення десертів");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    QApplication::exit();
}


void MainWindow::on_pushButton_clicked()
{
    DialogFruit dialogFruit;
    dialogFruit.setWindowTitle("Створення фрукта");
    dialogFruit.setModal(true);
    connect(&dialogFruit, &DialogFruit::created, this, &MainWindow::recivedFruit);
    connect(this, &MainWindow::addedFruit, this->dialogFruitList, &DialogFruitList::updateList);
    dialogFruit.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    DialogDessert dialogDessert;
    dialogDessert.setWindowTitle("Створення десерта");
    connect(&dialogDessert, &DialogDessert::created, this, &MainWindow::recivedDessert);
    connect(this, &MainWindow::addedDessert, this->dialogDessertList, &DialogDessertList::updateList);
    dialogDessert.setModal(true);
    dialogDessert.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    this->dialogFruitList->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->dialogDessertList->show();
}

void MainWindow::addFruit(Fruit *fruit)
{
    fruits.append(fruit);
    emit addedFruit(this->fruits);
}

void MainWindow::addDessert(Dessert *dessert)
{
    desserts.append(dessert);
    emit addedDessert(this->desserts);
}
