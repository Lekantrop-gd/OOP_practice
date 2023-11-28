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
        QMessageBox::warning(this, "Error", "You didn't fill all the fields!");
        qWarning() << "Unable to create fruit object. You didn't fill all the fields";
    }
}


void DialogFruit::on_back_clicked()
{
    this->hide();
}

