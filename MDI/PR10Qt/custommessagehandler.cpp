#include "custommessagehandler.h"
#include <QDateTime>
#include <QDebug>

CustomMessageHandler::CustomMessageHandler()
{

}

void CustomMessageHandler::handleError(QtMsgType errorType, const QMessageLogContext& context, const QString& errorMessage)
{
    QFile logFile("log.txt");
    if (logFile.open(QIODevice::Append)) {
        QTextStream stream(&logFile);

        switch (errorType) {
        case QtInfoMsg:
            stream << "Info: ";
            break;
        case QtDebugMsg:
            stream << "Debug: ";
            break;
        case QtWarningMsg:
            stream << "Warning: ";
            break;
        case QtCriticalMsg:
            stream << "Critical: ";
            break;
        case QtFatalMsg:
            stream << "Fatal: ";
            break;
        }

        stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " +
                  errorMessage << " (" << context.file << ":" << context.line << ", " << context.function << ")\n";
        logFile.close();
    }
}

