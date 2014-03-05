#include <QtGui/QGuiApplication>
#include <QQmlContext>
#include "qtquick2applicationviewer.h"
#include "loginservice.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("mainWindow", &viewer);
    viewer.rootContext()->setContextProperty("loginService", new LoginService());
    viewer.setMainQmlFile(QStringLiteral("qml/lawal-desktop/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
