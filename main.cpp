#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QThread>
#include <QSettings>

#include "core.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QGuiApplication::setOrganizationName(QStringLiteral("ifba"));
    QGuiApplication::setOrganizationDomain(QStringLiteral("ifba.edu.br"));
    QGuiApplication::setApplicationName(QStringLiteral("emile"));

    QQmlApplicationEngine engine;
    auto rootContext = engine.rootContext();
    rootContext->setContextProperty(QStringLiteral("core"), Core::instance());
    QSettings settings("ifba", "emile-cookies");;
    rootContext->setContextProperty(QStringLiteral("loginSettings"), &settings);

#ifdef Q_OS_ANDROID
    QThread::sleep(3);
#endif

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QGuiApplication::exec();
}
