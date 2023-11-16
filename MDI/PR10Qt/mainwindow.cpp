#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogfruit.h"
#include "dialogdessert.h"
#include "dialogfruitlist.h"
#include "dialogdessertlist.h"
#include "QListWidget"
#include "dbmanager.h"
#include <custommessagehandler.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qInstallMessageHandler(CustomMessageHandler::handleError);

    this->dialogFruitList = new DialogFruitList;
    this->dialogFruitList->setWindowTitle("Відображення фруктів");
    this->dialogDessertList = new DialogDessertList;
    this->dialogDessertList->setWindowTitle("Відображення десертів");

    try {
        this->dbmanager = new DBmanager;
    }
    catch(...) {
        qFatal("Access Violation Error");
    }

    try {
        dbmanager->createTables();
    }
    catch (...) {
        qWarning() << "Unable to create tables";
    }

    this->dialogFruitList->updateList(this->dbmanager);
    this->dialogDessertList->updateList(this->dbmanager);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addFruit(Fruit *fruit)
{
    try {
        this->dbmanager->inserIntoTable(*fruit);
    }
    catch (...)
    {
        qWarning() << "Unable to add item to fruit table";
    }

    emit addedFruit(this->dbmanager);
}

void MainWindow::addDessert(Dessert *dessert)
{
    try {
        this->dbmanager->inserIntoTable(*dessert);
    }
    catch (...)
    {
        qWarning() << "Unable to add item to dessert table";
    }

    emit addedDessert(this->dbmanager);
}

void MainWindow::on_addFuit_clicked()
{
    DialogFruit dialogFruit;
    dialogFruit.setWindowTitle("Створення фрукта");
    dialogFruit.setModal(true);
    connect(&dialogFruit, &DialogFruit::created, this, &MainWindow::addFruit);
    connect(this, &MainWindow::addedFruit, this->dialogFruitList, &DialogFruitList::updateList);
    dialogFruit.exec();
}

void MainWindow::on_addDessert_clicked()
{
    DialogDessert dialogDessert;
    dialogDessert.setWindowTitle("Створення десерта");
    connect(&dialogDessert, &DialogDessert::created, this, &MainWindow::addDessert);
    connect(this, &MainWindow::addedDessert, this->dialogDessertList, &DialogDessertList::updateList);
    dialogDessert.setModal(true);
    dialogDessert.exec();
}

void MainWindow::on_listFruits_clicked()
{
    this->dialogFruitList->show();
}

void MainWindow::on_listDesserts_clicked()
{
    this->dialogDessertList->show();
}

void MainWindow::on_exit_clicked()
{
    try {
        dbmanager->closeDataBase();
    }
    catch (...)
    {
        qWarning() << "Unable to close database";
    }

    QApplication::exit();
}
