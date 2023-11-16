#ifndef CUSTOMMESSAGEHANDLER_H
#define CUSTOMMESSAGEHANDLER_H

#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QtDebug>

class CustomMessageHandler
{
public:
    CustomMessageHandler();

    static void handleError(QtMsgType errorType, const QMessageLogContext& context, const QString& errorMessage);
};

#endif // CUSTOMMESSAGEHANDLER_H
