#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "Fruit.h"
#include "Dessert.h"

class DBmanager
{
private:
    QSqlDatabase db;

public:
    const QString DATABASE_NAME = "DataBase";
    const QString FRUITS_TABLE_NAME = "Fruits";
    const QString DESSERTS_TABLE_NAME = "Desserts";

    DBmanager();

    bool connectToDataBase();
    void closeDataBase();
    QSqlDatabase getDB();
    void createTables();
    void inserIntoTable(const Fruit& fruit);
    void inserIntoTable(const Dessert& dessert);
};

#endif // DBMANAGER_H
