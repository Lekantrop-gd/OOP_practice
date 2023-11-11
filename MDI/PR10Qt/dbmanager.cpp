#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

DBmanager::DBmanager()
{
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName("DataBase.db");
}

bool DBmanager::connectToDataBase()
{
    if(db.open()){
        return true;
    } else
        return false;
}

void DBmanager::closeDataBase()
{
    this->db.close();
}

QSqlDatabase DBmanager::getDB()
{
    return this->db;
}

bool DBmanager::createTables()
{
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " + this->FRUITS_TABLE_NAME + " ("
                    "type TEXT NOT NULL, "
                    "calories INT NOT NULL,"
                    "vitamins VARCHAR(255) NOT NULL, "
                    "taste VARCHAR(255) NOT NULL"
                    " )"
                    ))
    {
        qDebug() << "DataBase: error of create table: " + this->FRUITS_TABLE_NAME;
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE " + this->DESSERTS_TABLE_NAME + " ("
                    "type TEXT NOT NULL,"
                    "calories INT NOT NULL,"
                    "sugarContent INT NOT NULL, "
                    "ingridients VARCHAR(255) NOT NULL"
                    " )"
                          ))
    {
        qDebug() << "DataBase: error of create tables" + this->DESSERTS_TABLE_NAME;
        qDebug() << query.lastError().text();
        return false;
    }
    return true;
}

bool DBmanager::inserIntoTable(const Fruit &fruit)
{
    QSqlQuery query;

    query.prepare("INSERT INTO " + this->FRUITS_TABLE_NAME + " VALUES(:type, :calories, :vitamins, :taste)");
    query.bindValue(":type", QString::fromStdString(fruit.getType()));
    query.bindValue(":calories", QString::number(fruit.getCalories()));
    query.bindValue(":vitamins", QString::fromStdString(fruit.getVitamins()));
    query.bindValue(":taste", QString::fromStdString(fruit.getTaste()));

    if (!query.exec())
    {
        qDebug() << "DataBase: error of insert into " << this->FRUITS_TABLE_NAME;
        qDebug() << query.lastError().text();
        return false;
    }
    else return true;
}

bool DBmanager::inserIntoTable(const Dessert &dessert)
{
    QSqlQuery query;

    query.prepare("INSERT INTO " + this->DESSERTS_TABLE_NAME + " VALUES(:type, :calories, :sugarcontent, :ingridients)");
    query.bindValue(":type", QString::fromStdString(dessert.getType()));
    query.bindValue(":calories", QString::number(dessert.getCalories()));
    query.bindValue(":sugarcontent", QString::number(dessert.getSugarContent()));
    query.bindValue(":ingridients", QString::fromStdString(dessert.getIngredients()));

    if (!query.exec())
    {
        qDebug() << "DataBase: error of insert into " << this->DESSERTS_TABLE_NAME;
        qDebug() << query.lastError().text();
        return false;
    }
    else return true;
}
