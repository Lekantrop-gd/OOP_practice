/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *mainWindow;
    QPushButton *addFuit;
    QPushButton *addDessert;
    QPushButton *listFruits;
    QPushButton *listDesserts;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(337, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(22, 22, 22)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainWindow = new QLabel(centralwidget);
        mainWindow->setObjectName("mainWindow");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWindow->sizePolicy().hasHeightForWidth());
        mainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("French Script MT")});
        font.setPointSize(72);
        mainWindow->setFont(font);
        mainWindow->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF\n"
"}"));
        mainWindow->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mainWindow);

        addFuit = new QPushButton(centralwidget);
        addFuit->setObjectName("addFuit");
        addFuit->setMinimumSize(QSize(0, 40));
        addFuit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(addFuit);

        addDessert = new QPushButton(centralwidget);
        addDessert->setObjectName("addDessert");
        addDessert->setMinimumSize(QSize(0, 40));
        addDessert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(addDessert);

        listFruits = new QPushButton(centralwidget);
        listFruits->setObjectName("listFruits");
        listFruits->setMinimumSize(QSize(0, 40));
        listFruits->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(listFruits);

        listDesserts = new QPushButton(centralwidget);
        listDesserts->setObjectName("listDesserts");
        listDesserts->setMinimumSize(QSize(0, 40));
        listDesserts->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(listDesserts);

        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setMinimumSize(QSize(0, 40));
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 337, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mainWindow->setText(QCoreApplication::translate("MainWindow", "Restaurant", nullptr));
        addFuit->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\204\321\200\321\203\320\272\321\202", nullptr));
        addDessert->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\265\321\201\320\265\321\200\321\202", nullptr));
        listFruits->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \321\204\321\200\321\203\320\272\321\202\321\226\320\262", nullptr));
        listDesserts->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \320\264\320\265\321\201\320\265\321\200\321\202\321\226\320\262", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
