/********************************************************************************
** Form generated from reading UI file 'dialogdessert.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDESSERT_H
#define UI_DIALOGDESSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDessert
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogDessert)
    {
        if (DialogDessert->objectName().isEmpty())
            DialogDessert->setObjectName("DialogDessert");
        DialogDessert->resize(239, 254);
        DialogDessert->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(22, 22, 22)\n"
"}"));
        formLayout = new QFormLayout(DialogDessert);
        formLayout->setObjectName("formLayout");
        label = new QLabel(DialogDessert);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(DialogDessert);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(120, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(DialogDessert);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(DialogDessert);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(DialogDessert);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(120, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(DialogDessert);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(DialogDessert);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(120, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(DialogDessert);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(120, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        pushButton = new QPushButton(DialogDessert);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(60, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(DialogDessert);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(120, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_2);


        retranslateUi(DialogDessert);

        QMetaObject::connectSlotsByName(DialogDessert);
    } // setupUi

    void retranslateUi(QDialog *DialogDessert)
    {
        DialogDessert->setWindowTitle(QCoreApplication::translate("DialogDessert", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogDessert", "\320\235\320\260\320\267\320\262\320\260 \320\264\320\265\321\201\320\265\321\200\321\202\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("DialogDessert", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\272\320\260\320\273\320\276\321\200\321\226\320\271", nullptr));
        label_3->setText(QCoreApplication::translate("DialogDessert", "\320\222\320\274\321\226\321\201\321\202 \321\206\321\203\320\272\321\200\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("DialogDessert", "\320\206\320\275\320\263\321\200\320\265\320\264\321\226\321\224\320\275\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogDessert", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogDessert", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDessert: public Ui_DialogDessert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDESSERT_H
