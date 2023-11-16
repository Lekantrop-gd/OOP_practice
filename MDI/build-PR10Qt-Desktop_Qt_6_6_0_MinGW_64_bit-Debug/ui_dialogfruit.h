/********************************************************************************
** Form generated from reading UI file 'dialogfruit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFRUIT_H
#define UI_DIALOGFRUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogFruit
{
public:
    QFormLayout *formLayout;
    QLabel *typeLabel;
    QLineEdit *typeLineEdit;
    QLabel *caloriesLabel;
    QLabel *vitaminsLabel;
    QLineEdit *caloriesLineEdit;
    QLineEdit *vitaminsLineEdit;
    QLabel *tasteLabel;
    QLineEdit *tasteLineEdit;
    QPushButton *back;
    QPushButton *create;

    void setupUi(QDialog *DialogFruit)
    {
        if (DialogFruit->objectName().isEmpty())
            DialogFruit->setObjectName("DialogFruit");
        DialogFruit->resize(239, 254);
        DialogFruit->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(22, 22, 22)\n"
"}"));
        formLayout = new QFormLayout(DialogFruit);
        formLayout->setObjectName("formLayout");
        typeLabel = new QLabel(DialogFruit);
        typeLabel->setObjectName("typeLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        typeLineEdit = new QLineEdit(DialogFruit);
        typeLineEdit->setObjectName("typeLineEdit");
        typeLineEdit->setMinimumSize(QSize(120, 40));
        typeLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, typeLineEdit);

        caloriesLabel = new QLabel(DialogFruit);
        caloriesLabel->setObjectName("caloriesLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, caloriesLabel);

        vitaminsLabel = new QLabel(DialogFruit);
        vitaminsLabel->setObjectName("vitaminsLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, vitaminsLabel);

        caloriesLineEdit = new QLineEdit(DialogFruit);
        caloriesLineEdit->setObjectName("caloriesLineEdit");
        caloriesLineEdit->setMinimumSize(QSize(120, 40));
        caloriesLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, caloriesLineEdit);

        vitaminsLineEdit = new QLineEdit(DialogFruit);
        vitaminsLineEdit->setObjectName("vitaminsLineEdit");
        vitaminsLineEdit->setMinimumSize(QSize(120, 40));
        vitaminsLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, vitaminsLineEdit);

        tasteLabel = new QLabel(DialogFruit);
        tasteLabel->setObjectName("tasteLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, tasteLabel);

        tasteLineEdit = new QLineEdit(DialogFruit);
        tasteLineEdit->setObjectName("tasteLineEdit");
        tasteLineEdit->setMinimumSize(QSize(120, 40));
        tasteLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, tasteLineEdit);

        back = new QPushButton(DialogFruit);
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

        create = new QPushButton(DialogFruit);
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


        retranslateUi(DialogFruit);

        QMetaObject::connectSlotsByName(DialogFruit);
    } // setupUi

    void retranslateUi(QDialog *DialogFruit)
    {
        DialogFruit->setWindowTitle(QCoreApplication::translate("DialogFruit", "Dialog", nullptr));
        typeLabel->setText(QCoreApplication::translate("DialogFruit", "\320\235\320\260\320\267\320\262\320\260 \321\204\321\200\321\203\320\272\321\202\321\203", nullptr));
        caloriesLabel->setText(QCoreApplication::translate("DialogFruit", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\272\320\260\320\273\320\276\321\200\321\226\320\271", nullptr));
        vitaminsLabel->setText(QCoreApplication::translate("DialogFruit", "\320\222\321\226\321\202\320\260\320\274\321\226\320\275\320\270", nullptr));
        tasteLabel->setText(QCoreApplication::translate("DialogFruit", "\320\241\320\274\320\260\320\272", nullptr));
        back->setText(QCoreApplication::translate("DialogFruit", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        create->setText(QCoreApplication::translate("DialogFruit", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFruit: public Ui_DialogFruit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFRUIT_H
