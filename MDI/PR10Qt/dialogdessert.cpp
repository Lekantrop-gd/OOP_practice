#include "dialogdessert.h"
#include "ui_dialogdessert.h"
#include <QMessageBox>

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

void DialogDessert::on_pushButton_clicked()
{
    this->hide();
}

void DialogDessert::on_pushButton_2_clicked()
{
    if (ui->lineEdit->text() != "" &&
        ui->lineEdit_2->text() != "" &&
        ui->lineEdit_3->text() != "" &&
        ui->lineEdit_4->text() != "")
    {
        Dessert *dessert = new Dessert(
            ui->lineEdit->text().toStdString(),
            ui->lineEdit_2->text().toInt(),
            ui->lineEdit_3->text().toInt(),
            ui->lineEdit_4->text().toStdString()
        );
        emit created(dessert);
        this->hide();
    }
    else {
        QMessageBox::critical(this, "Підозра на скам", "Ви ввели не всі значення");
    }
}
