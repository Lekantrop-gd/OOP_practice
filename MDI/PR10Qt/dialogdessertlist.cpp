#include "dialogdessertlist.h"
#include "ui_dialogdessertlist.h"

DialogDessertList::DialogDessertList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDessertList)
{
    ui->setupUi(this);
}

DialogDessertList::~DialogDessertList()
{
    delete ui;
}

void DialogDessertList::updateList(QList<Dessert*> desserts)
{
    ui->listWidget->clear();
    for (int x = 0; x < desserts.size(); x++) {
        ui->listWidget->addItem(QString::fromStdString(desserts[x]->getType()));
    }
}
