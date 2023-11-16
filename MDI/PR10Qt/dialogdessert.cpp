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


void DialogDessert::on_back_clicked()
{
    this->hide();
}
