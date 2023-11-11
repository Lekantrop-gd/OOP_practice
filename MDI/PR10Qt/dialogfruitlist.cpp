#include "dialogfruitlist.h"
#include "ui_dialogfruitlist.h"
#include <QSqlTableModel>

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

void DialogFruitList::updateList(DBmanager *dbmanager)
{
    QSqlTableModel *model = new QSqlTableModel(this, dbmanager->getDB());
    model->setTable(dbmanager->FRUITS_TABLE_NAME);
    model->select();

    ui->tableView->setModel(model);
}
