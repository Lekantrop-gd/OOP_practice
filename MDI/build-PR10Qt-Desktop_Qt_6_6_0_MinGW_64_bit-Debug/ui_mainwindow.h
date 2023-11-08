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
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("French Script MT")});
        font.setPointSize(72);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
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

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 40));
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

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid rbg(100, 100, 100);	\n"
"	border-radius: 20%;	\n"
"	color: #FFF;\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"}"));

        verticalLayout->addWidget(pushButton_5);

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
        label->setText(QCoreApplication::translate("MainWindow", "Restaurant", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\204\321\200\321\203\320\272\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\265\321\201\320\265\321\200\321\202", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \321\204\321\200\321\203\320\272\321\202\321\226\320\262", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\262\320\265\321\201\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \320\264\320\265\321\201\320\265\321\200\321\202\321\226\320\262", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
