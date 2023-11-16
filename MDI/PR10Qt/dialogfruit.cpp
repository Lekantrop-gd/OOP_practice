#include "dialogfruit.h"
#include "ui_dialogfruit.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDateTime>

DialogFruit::DialogFruit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFruit)
{
    ui->setupUi(this);
}

DialogFruit::~DialogFruit()
{
    delete ui;
}

void DialogFruit::on_create_clicked()
{
    if (ui->typeLineEdit->text() != "" &&
        ui->caloriesLineEdit->text() != "" &&
        ui->vitaminsLineEdit->text() != "" &&
        ui->tasteLineEdit->text() != "")
    {
        Fruit *fruit = new Fruit(
            ui->typeLineEdit->text().toStdString(),
            ui->caloriesLineEdit->text().toInt(),
            ui->vitaminsLineEdit->text().toStdString(),
            ui->tasteLineEdit->text().toStdString()
            );
        emit created(fruit);
        this->hide();
    }
    else {
        QFile file("log.txt");
        if (file.open(QIODevice::Append)) {
            QTextStream stream(&file);
            stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + "An error writing data to the object occured. You have not input all values";
        }
        file.close();

        qWarning() << "An error writing data to the object occured. You have not input all values";
        QMessageBox::critical(this, "Підозра на скам", "An error writing data to the object occured. You have not input all values");
    }
}


void DialogFruit::on_back_clicked()
{
    this->hide();
}

