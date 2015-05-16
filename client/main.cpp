#include <QCoreApplication>
#include "client.h"
#include <QtPlugin>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Client client;
    client.connect();
    return a.exec();
}
