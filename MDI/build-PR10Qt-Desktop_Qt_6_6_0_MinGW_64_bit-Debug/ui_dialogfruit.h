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
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

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
        label = new QLabel(DialogFruit);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(DialogFruit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(120, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(DialogFruit);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(DialogFruit);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(DialogFruit);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(120, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(DialogFruit);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(120, 40));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(DialogFruit);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(DialogFruit);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(120, 40));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        pushButton = new QPushButton(DialogFruit);
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

        pushButton_2 = new QPushButton(DialogFruit);
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


        retranslateUi(DialogFruit);

        QMetaObject::connectSlotsByName(DialogFruit);
    } // setupUi

    void retranslateUi(QDialog *DialogFruit)
    {
        DialogFruit->setWindowTitle(QCoreApplication::translate("DialogFruit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogFruit", "\320\235\320\260\320\267\320\262\320\260 \321\204\321\200\321\203\320\272\321\202\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("DialogFruit", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\272\320\260\320\273\320\276\321\200\321\226\320\271", nullptr));
        label_3->setText(QCoreApplication::translate("DialogFruit", "\320\222\321\226\321\202\320\260\320\274\321\226\320\275\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("DialogFruit", "\320\241\320\274\320\260\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogFruit", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogFruit", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFruit: public Ui_DialogFruit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFRUIT_H
