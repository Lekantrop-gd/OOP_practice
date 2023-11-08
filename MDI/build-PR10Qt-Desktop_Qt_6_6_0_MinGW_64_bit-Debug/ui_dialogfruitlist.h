/********************************************************************************
** Form generated from reading UI file 'dialogfruitlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFRUITLIST_H
#define UI_DIALOGFRUITLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFruitList
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *DialogFruitList)
    {
        if (DialogFruitList->objectName().isEmpty())
            DialogFruitList->setObjectName("DialogFruitList");
        DialogFruitList->resize(276, 272);
        DialogFruitList->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: rgb(27, 27, 27)\n"
"}"));
        horizontalLayout = new QHBoxLayout(DialogFruitList);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(DialogFruitList);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        retranslateUi(DialogFruitList);

        QMetaObject::connectSlotsByName(DialogFruitList);
    } // setupUi

    void retranslateUi(QDialog *DialogFruitList)
    {
        DialogFruitList->setWindowTitle(QCoreApplication::translate("DialogFruitList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFruitList: public Ui_DialogFruitList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFRUITLIST_H
