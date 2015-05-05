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
    QObject::connect(&server, SIGNAL(cpuChanged(std::string)), &w, SLOT(setCPULabel(std::string)));
    QObject::connect(&server, SIGNAL(memChanged(std::string)), &w, SLOT(setMemLabel(std::string)));
    QObject::connect(&server, SIGNAL(hdChanged(std::string)), &w, SLOT(setDiscLabel(std::string)));
    QObject::connect(&server, SIGNAL(inChanged(std::string)), &w, SLOT(setInLabel(std::string)));
    QObject::connect(&server, SIGNAL(outChanged(std::string)), &w, SLOT(setOutLabel(std::string)));

    return a.exec();
}
