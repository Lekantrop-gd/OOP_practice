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
