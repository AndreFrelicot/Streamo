/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

#include <QGuiApplication>
#include <QQuickView>
//#include <QQmlApplicationEngine>

#include <QOSC/oscqml/osc_receiver.h> // add
#include <QOSC/oscqml/osc_sender.h>   // add



int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QQuickView view;

    //QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    qmlRegisterType<OSCReceiver>("OSC", 1, 0, "OSCReceiver"); // add
    qmlRegisterType<OSCSender>("OSC", 1, 0, "OSCSender");     // add

    view.resize(540, 960);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}
