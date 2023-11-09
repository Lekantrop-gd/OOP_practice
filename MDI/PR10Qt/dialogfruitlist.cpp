#include "dialogfruitlist.h"
#include "ui_dialogfruitlist.h"

DialogFruitList::DialogFruitList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFruitList)
{
    ui->setupUi(this);
}

DialogFruitList::~DialogFruitList()
{
    delete ui;
}

void DialogFruitList::updateList(QList<Fruit*> fruits)
{
    ui->listWidget->clear();
    for (int x = 0; x < fruits.size(); x++) {
        ui->listWidget->addItem(QString::fromStdString(fruits[x]->getType()));
    }
}
