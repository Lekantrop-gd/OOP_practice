/********************************************************************************
** Form generated from reading UI file 'dialogdessertlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDESSERTLIST_H
#define UI_DIALOGDESSERTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogDessertList
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *DialogDessertList)
    {
        if (DialogDessertList->objectName().isEmpty())
            DialogDessertList->setObjectName("DialogDessertList");
        DialogDessertList->resize(261, 258);
        DialogDessertList->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));
        horizontalLayout = new QHBoxLayout(DialogDessertList);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(DialogDessertList);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        retranslateUi(DialogDessertList);

        QMetaObject::connectSlotsByName(DialogDessertList);
    } // setupUi

    void retranslateUi(QDialog *DialogDessertList)
    {
        DialogDessertList->setWindowTitle(QCoreApplication::translate("DialogDessertList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDessertList: public Ui_DialogDessertList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDESSERTLIST_H
