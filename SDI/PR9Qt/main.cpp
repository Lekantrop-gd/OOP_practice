#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Black Fox");
    w.resize(w.minimumWidth(), w.minimumHeight());
    w.show();
    return a.exec();
}
