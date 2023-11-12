#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QDateTime>

void logError(QString errorText) {
    QFile file("log.txt");
    if (file.open(QIODevice::Append)) {
        QTextStream stream(&file);
        stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + errorText;
    }
    file.close();
}

DBmanager::DBmanager()
{
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName("DataBase.db");

    if (!this->connectToDataBase()) {
        logError("Unable to open database. Error description: " + db.lastError().text());
        qFatal() << "Unable to open database. Error description: " + db.lastError().text();
    }
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
    if (this->db.lastError().text() != "") {
        logError("Unable to close database. Error description: " + this->db.lastError().text());
        qWarning() << "Unable to close database. Error description: " + this->db.lastError().text();
    }
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
        logError("Unable to create table: " + this->FRUITS_TABLE_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table: " + this->FRUITS_TABLE_NAME + ". Error description: " + query.lastError().text();
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
        logError("Unable to create table " + this->DESSERTS_TABLE_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table " + this->DESSERTS_TABLE_NAME + ". Error description: " + query.lastError().text();
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
        logError("Unable to insert into table " + this->FRUITS_TABLE_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to insert into table " + this->FRUITS_TABLE_NAME + ". Error description: " + query.lastError().text();
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
        logError("Unable to insert into table " + this->DESSERTS_TABLE_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to insert into table " + this->DESSERTS_TABLE_NAME + ". Error description: " + query.lastError().text();
        return false;
    }
    else return true;
}
