#include "mainwindow.h"
#include <QApplication>
#include "server.h"
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Server server;

    server.startServer();

    qRegisterMetaType<std::string>();

    QObject::connect(&server, SIGNAL(clientConnect(int, ClientThread*)), &w, SLOT(newTab(int, ClientThread*)));

    return a.exec();
}
