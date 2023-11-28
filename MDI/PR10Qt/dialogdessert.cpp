#include "dialogdessert.h"
#include "ui_dialogdessert.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDateTime>

DialogDessert::DialogDessert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDessert)
{
    ui->setupUi(this);
}

DialogDessert::~DialogDessert()
{
    delete ui;
}

void DialogDessert::on_create_clicked()
{
    if (ui->typeLineEdit->text() != "" &&
        ui->caloriesLineEdit->text() != "" &&
        ui->sugarLineEdit->text() != "" &&
        ui->ingridientsLineEdit->text() != "")
    {
        Dessert *dessert = new Dessert(
            ui->typeLineEdit->text().toStdString(),
            ui->caloriesLineEdit->text().toInt(),
            ui->sugarLineEdit->text().toInt(),
            ui->ingridientsLineEdit->text().toStdString()
            );
        emit created(dessert);
        this->hide();
    }
    else {
        QMessageBox::warning(this, "Error", "You didn't fill all the fields!");
        qWarning() << "Unable to create dessert object. You didn't fill all the fields";
    }
}

void DialogDessert::on_back_clicked()
{
    this->hide();
}
