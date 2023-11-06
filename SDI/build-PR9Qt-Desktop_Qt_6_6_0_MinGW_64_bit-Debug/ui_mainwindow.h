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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *IdLabel;
    QLineEdit *IdLine;
    QLabel *ModelLabel;
    QLineEdit *ModelLine;
    QLabel *YearLabel;
    QLineEdit *YearLine;
    QLabel *PriceLabel;
    QLineEdit *PriceLine;
    QLabel *RegistrationNumberLabel;
    QLineEdit *RegistrationNumberLine;
    QLabel *VinLabel;
    QLineEdit *VinLine;
    QLabel *SeatsLabel;
    QLineEdit *SeatsLine;
    QLabel *DoorsLabel;
    QLineEdit *DoorsLine;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(880, 542);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(22, 22, 22)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light Condensed")});
        font1.setPointSize(16);
        font1.setBold(false);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
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
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
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
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(0, QFormLayout::FieldRole, verticalSpacer_3);

        IdLabel = new QLabel(centralwidget);
        IdLabel->setObjectName("IdLabel");
        QFont font2;
        font2.setPointSize(12);
        IdLabel->setFont(font2);
        IdLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        IdLabel->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, IdLabel);

        IdLine = new QLineEdit(centralwidget);
        IdLine->setObjectName("IdLine");
        IdLine->setMinimumSize(QSize(100, 40));
        IdLine->setFont(font2);
        IdLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, IdLine);

        ModelLabel = new QLabel(centralwidget);
        ModelLabel->setObjectName("ModelLabel");
        ModelLabel->setFont(font2);
        ModelLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        ModelLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, ModelLabel);

        ModelLine = new QLineEdit(centralwidget);
        ModelLine->setObjectName("ModelLine");
        ModelLine->setMinimumSize(QSize(100, 40));
        ModelLine->setFont(font2);
        ModelLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, ModelLine);

        YearLabel = new QLabel(centralwidget);
        YearLabel->setObjectName("YearLabel");
        YearLabel->setFont(font2);
        YearLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        YearLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, YearLabel);

        YearLine = new QLineEdit(centralwidget);
        YearLine->setObjectName("YearLine");
        YearLine->setMinimumSize(QSize(100, 40));
        YearLine->setFont(font2);
        YearLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, YearLine);

        PriceLabel = new QLabel(centralwidget);
        PriceLabel->setObjectName("PriceLabel");
        PriceLabel->setFont(font2);
        PriceLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        PriceLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, PriceLabel);

        PriceLine = new QLineEdit(centralwidget);
        PriceLine->setObjectName("PriceLine");
        PriceLine->setMinimumSize(QSize(100, 40));
        PriceLine->setFont(font2);
        PriceLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, PriceLine);

        RegistrationNumberLabel = new QLabel(centralwidget);
        RegistrationNumberLabel->setObjectName("RegistrationNumberLabel");
        RegistrationNumberLabel->setFont(font2);
        RegistrationNumberLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        RegistrationNumberLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, RegistrationNumberLabel);

        RegistrationNumberLine = new QLineEdit(centralwidget);
        RegistrationNumberLine->setObjectName("RegistrationNumberLine");
        RegistrationNumberLine->setMinimumSize(QSize(100, 40));
        RegistrationNumberLine->setFont(font2);
        RegistrationNumberLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, RegistrationNumberLine);

        VinLabel = new QLabel(centralwidget);
        VinLabel->setObjectName("VinLabel");
        VinLabel->setFont(font2);
        VinLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        VinLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, VinLabel);

        VinLine = new QLineEdit(centralwidget);
        VinLine->setObjectName("VinLine");
        VinLine->setMinimumSize(QSize(100, 40));
        VinLine->setFont(font2);
        VinLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, VinLine);

        SeatsLabel = new QLabel(centralwidget);
        SeatsLabel->setObjectName("SeatsLabel");
        SeatsLabel->setFont(font2);
        SeatsLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        SeatsLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, SeatsLabel);

        SeatsLine = new QLineEdit(centralwidget);
        SeatsLine->setObjectName("SeatsLine");
        SeatsLine->setMinimumSize(QSize(100, 40));
        SeatsLine->setFont(font2);
        SeatsLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, SeatsLine);

        DoorsLabel = new QLabel(centralwidget);
        DoorsLabel->setObjectName("DoorsLabel");
        DoorsLabel->setFont(font2);
        DoorsLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #FFF;\n"
"}"));
        DoorsLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, DoorsLabel);

        DoorsLine = new QLineEdit(centralwidget);
        DoorsLine->setObjectName("DoorsLine");
        DoorsLine->setMinimumSize(QSize(100, 40));
        DoorsLine->setFont(font2);
        DoorsLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #FFF;\n"
"	border: 1px solid rbg(255, 255, 255);	\n"
"	border-radius: 20%;	\n"
"	background-color: rgb(27, 27, 27);\n"
"}"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, DoorsLine);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(80, 40));
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
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

        formLayout_2->setWidget(9, QFormLayout::LabelRole, pushButton_5);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 40));
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
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

        formLayout_2->setWidget(9, QFormLayout::FieldRole, pushButton_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(10, QFormLayout::FieldRole, verticalSpacer_4);


        horizontalLayout->addLayout(formLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 880, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Black Fox", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\276\320\261\321\200\320\260\320\267\320\270\321\202\320\270 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\270\320\271 \320\276\320\261'\321\224\320\272\321\202", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        IdLabel->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        ModelLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        YearLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\321\226\320\272 \320\262\320\270\320\277\321\203\321\201\320\272\321\203", nullptr));
        PriceLabel->setText(QCoreApplication::translate("MainWindow", "\320\246\321\226\320\275\320\260", nullptr));
        RegistrationNumberLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\320\271\320\275\320\270\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        VinLabel->setText(QCoreApplication::translate("MainWindow", "Vin-\320\275\320\276\320\274\320\265\321\200", nullptr));
        SeatsLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\321\226\321\201\321\206\321\214", nullptr));
        DoorsLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
