#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogfruit.h"
#include "dialogdessert.h"
#include "dialogfruitlist.h"
#include "dialogdessertlist.h"
#include "QListWidget"
#include "dbmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dialogFruitList = new DialogFruitList;
    this->dialogFruitList->setWindowTitle("Відображення фруктів");
    this->dialogDessertList = new DialogDessertList;
    this->dialogDessertList->setWindowTitle("Відображення десертів");

    this->dbmanager = new DBmanager;
    dbmanager->createTables();

    this->dialogFruitList->updateList(this->dbmanager);
    this->dialogDessertList->updateList(this->dbmanager);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    QApplication::exit();
    dbmanager->closeDataBase();
}


void MainWindow::on_pushButton_clicked()
{
    DialogFruit dialogFruit;
    dialogFruit.setWindowTitle("Створення фрукта");
    dialogFruit.setModal(true);
    connect(&dialogFruit, &DialogFruit::created, this, &MainWindow::addFruit);
    connect(this, &MainWindow::addedFruit, this->dialogFruitList, &DialogFruitList::updateList);
    dialogFruit.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    DialogDessert dialogDessert;
    dialogDessert.setWindowTitle("Створення десерта");
    connect(&dialogDessert, &DialogDessert::created, this, &MainWindow::addDessert);
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
    this->dbmanager->inserIntoTable(*fruit);
    emit addedFruit(this->dbmanager);
}

void MainWindow::addDessert(Dessert *dessert)
{
    this->dbmanager->inserIntoTable(*dessert);
    emit addedDessert(this->dbmanager);
}
