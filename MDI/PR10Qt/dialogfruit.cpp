#include "dialogfruit.h"
#include "ui_dialogfruit.h"
#include <QMessageBox>

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

void DialogFruit::on_pushButton_clicked()
{
    this->hide();
}

void DialogFruit::on_pushButton_2_clicked()
{
    if (ui->lineEdit->text() != "" &&
        ui->lineEdit_2->text() != "" &&
        ui->lineEdit_3->text() != "" &&
        ui->lineEdit_4->text() != "")
    {
        Fruit *fruit = new Fruit(
            ui->lineEdit->text().toStdString(),
            ui->lineEdit_2->text().toInt(),
            ui->lineEdit_3->text().toStdString(),
            ui->lineEdit_4->text().toStdString()
            );
        emit created(fruit);
        this->hide();
    }
    else {
        QMessageBox::critical(this, "Підозра на скам", "Ви ввели не всі значення");
    }
}
