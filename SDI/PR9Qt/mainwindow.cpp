#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveRightPanel(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QCoreApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    if (!this->isRightPanelActive) {
        setActiveRightPanel(true);
    }
}

void MainWindow::setActiveLabels(bool activeStatus) {
    if (activeStatus) {
        ui->IdLabel->show();
        ui->ModelLabel->show();
        ui->YearLabel->show();
        ui->PriceLabel->show();
        ui->RegistrationNumberLabel->show();
        ui->VinLabel->show();
        ui->SeatsLabel->show();
        ui->DoorsLabel->show();
        this->areLanelsActive = true;
    }
    else {
        ui->IdLabel->hide();
        ui->ModelLabel->hide();
        ui->YearLabel->hide();
        ui->PriceLabel->hide();
        ui->RegistrationNumberLabel->hide();
        ui->VinLabel->hide();
        ui->SeatsLabel->hide();
        ui->DoorsLabel->hide();
        this->areLanelsActive = false;
    }
}

void MainWindow::setActiveInputs(bool activeStatus) {
    if (activeStatus) {
        ui->IdLine->show();
        ui->ModelLine->show();
        ui->YearLine->show();
        ui->PriceLine->show();
        ui->RegistrationNumberLine->show();
        ui->VinLine->show();
        ui->SeatsLine->show();
        ui->DoorsLine->show();
        ui->pushButton_4->show();
        ui->pushButton_5->show();
        this->areInputsActive = true;
    }
    else {
        ui->IdLine->hide();
        ui->ModelLine->hide();
        ui->YearLine->hide();
        ui->PriceLine->hide();
        ui->RegistrationNumberLine->hide();
        ui->VinLine->hide();
        ui->SeatsLine->hide();
        ui->DoorsLine->hide();
        ui->pushButton_4->hide();
        ui->pushButton_5->hide();
        this->areInputsActive = false;
    }
}

void MainWindow::setActiveRightPanel(bool activeStatus)
{
    if (activeStatus) {
        setActiveInputs(true);
        setActiveLabels(true);
        this->isRightPanelActive = true;
    }
    else {
        setActiveInputs(false);
        setActiveLabels(false);
        this->isRightPanelActive = false;
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    setActiveRightPanel(false);
}


void MainWindow::on_pushButton_4_clicked()
{
    QString id = ui->IdLine->text();
    QString model = ui->ModelLine->text();
    QString year = ui->YearLine->text();
    QString price = ui->PriceLine->text();
    QString rNumber = ui->RegistrationNumberLine->text();
    QString vin = ui->VinLine->text();
    QString seats = ui->SeatsLine->text();
    QString doors = ui->DoorsLine->text();
    if (ui->IdLine->text() != "" &&
        ui->ModelLine->text() != "" &&
        ui->YearLine->text() != "" &&
        ui->PriceLine->text() != "" &&
        ui->RegistrationNumberLine->text() != "" &&
        ui->VinLine->text() != "" &&
        ui->SeatsLine->text() != "" &&
        ui->DoorsLine->text() != "") {

        this->car = new Car(id.toInt(), model.toStdString(), year.toInt(), price.toInt(), rNumber.toStdString(), vin.toStdString(), seats.toInt(), doors.toInt());
    }
    else {
        QMessageBox::critical(this, "Підозра на скам", "Ви ввели не всі значення!");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    try {
        setActiveRightPanel(false);
        setActiveLabels(true);
        ui->IdLabel->setText("ID: " + QString::number(this->car->getId()));
        ui->ModelLabel->setText("Модель: " + QString::fromStdString(this->car->getModel()));
        ui->YearLabel->setText("Рік випуску: " + QString::number(this->car->getReleaseDate()));
        ui->PriceLabel->setText("Ціна: " + QString::number(this->car->getPrice()));
        ui->RegistrationNumberLabel->setText("Реєстраційний номер: " + QString::fromStdString(this->car->getRegistrationNumber()));
        ui->VinLabel->setText("Він-код: " + QString::fromStdString(this->car->getVinCode()));
        ui->SeatsLabel->setText("Кількість сидінь: " + QString::number(this->car->getNumberOfSeats()));
        ui->DoorsLabel->setText("Кількість дверей: " + QString::number(this->car->getNumberOfDoors()));
    } catch (...) {

    }
}
