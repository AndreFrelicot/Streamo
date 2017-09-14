/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

#include <QGuiApplication>
#include <QQuickView>

#include <QOSC/oscqml/osc_receiver.h> // add
#include <QOSC/oscqml/osc_sender.h>   // add



int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QQuickView view;

    qmlRegisterType<OSCReceiver>("OSC", 1, 0, "OSCReceiver"); // add
    qmlRegisterType<OSCSender>("OSC", 1, 0, "OSCSender");     // add

    view.resize(500, 500);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}
