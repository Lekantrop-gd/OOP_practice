QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogdessert.cpp \
    dialogdessertlist.cpp \
    dialogfruit.cpp \
    dialogfruitlist.cpp \
    main.cpp \
    mainwindow.cpp \
    Food.cpp \
    Fruit.cpp \
    Dessert.cpp \

HEADERS += \
    dialogdessert.h \
    dialogdessertlist.h \
    dialogfruit.h \
    dialogfruitlist.h \
    mainwindow.h \
    Food.h \
    Fruit.h \
    Dessert.h \

FORMS += \
    dialogdessert.ui \
    dialogdessertlist.ui \
    dialogfruit.ui \
    dialogfruitlist.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
