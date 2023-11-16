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
    QLabel *typeLabel;
    QLineEdit *typeLineEdit;
    QLabel *caloriesLabel;
    QLabel *sugarLabel;
    QLineEdit *caloriesLineEdit;
    QLabel *ingridientsLabel;
    QLineEdit *sugarLineEdit;
    QLineEdit *ingridientsLineEdit;
    QPushButton *back;
    QPushButton *create;

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
        typeLabel = new QLabel(DialogDessert);
        typeLabel->setObjectName("typeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        typeLineEdit = new QLineEdit(DialogDessert);
        typeLineEdit->setObjectName("typeLineEdit");
        typeLineEdit->setMinimumSize(QSize(120, 40));
        typeLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, typeLineEdit);

        caloriesLabel = new QLabel(DialogDessert);
        caloriesLabel->setObjectName("caloriesLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, caloriesLabel);

        sugarLabel = new QLabel(DialogDessert);
        sugarLabel->setObjectName("sugarLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, sugarLabel);

        caloriesLineEdit = new QLineEdit(DialogDessert);
        caloriesLineEdit->setObjectName("caloriesLineEdit");
        caloriesLineEdit->setMinimumSize(QSize(120, 40));
        caloriesLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, caloriesLineEdit);

        ingridientsLabel = new QLabel(DialogDessert);
        ingridientsLabel->setObjectName("ingridientsLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, ingridientsLabel);

        sugarLineEdit = new QLineEdit(DialogDessert);
        sugarLineEdit->setObjectName("sugarLineEdit");
        sugarLineEdit->setMinimumSize(QSize(120, 40));
        sugarLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sugarLineEdit);

        ingridientsLineEdit = new QLineEdit(DialogDessert);
        ingridientsLineEdit->setObjectName("ingridientsLineEdit");
        ingridientsLineEdit->setMinimumSize(QSize(120, 40));
        ingridientsLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ingridientsLineEdit);

        back = new QPushButton(DialogDessert);
        back->setObjectName("back");
        back->setMinimumSize(QSize(60, 40));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        formLayout->setWidget(4, QFormLayout::LabelRole, back);

        create = new QPushButton(DialogDessert);
        create->setObjectName("create");
        create->setMinimumSize(QSize(120, 40));
        create->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, create);


        retranslateUi(DialogDessert);

        QMetaObject::connectSlotsByName(DialogDessert);
    } // setupUi

    void retranslateUi(QDialog *DialogDessert)
    {
        DialogDessert->setWindowTitle(QCoreApplication::translate("DialogDessert", "Dialog", nullptr));
        typeLabel->setText(QCoreApplication::translate("DialogDessert", "\320\235\320\260\320\267\320\262\320\260 \320\264\320\265\321\201\320\265\321\200\321\202\321\203", nullptr));
        caloriesLabel->setText(QCoreApplication::translate("DialogDessert", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\272\320\260\320\273\320\276\321\200\321\226\320\271", nullptr));
        sugarLabel->setText(QCoreApplication::translate("DialogDessert", "\320\222\320\274\321\226\321\201\321\202 \321\206\321\203\320\272\321\200\321\203", nullptr));
        ingridientsLabel->setText(QCoreApplication::translate("DialogDessert", "\320\206\320\275\320\263\321\200\320\265\320\264\321\226\321\224\320\275\321\202\320\270", nullptr));
        back->setText(QCoreApplication::translate("DialogDessert", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        create->setText(QCoreApplication::translate("DialogDessert", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDessert: public Ui_DialogDessert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDESSERT_H
