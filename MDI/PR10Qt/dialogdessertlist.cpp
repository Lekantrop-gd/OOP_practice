#include "dialogdessertlist.h"
#include "ui_dialogdessertlist.h"
#include <QSqlTableModel>

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

void DialogDessertList::updateList(DBmanager *dbmanager)
{
    QSqlTableModel *model = new QSqlTableModel(this, dbmanager->getDB());
    model->setTable(dbmanager->DESSERTS_TABLE_NAME);
    model->select();

    ui->tableView->setModel(model);
}
