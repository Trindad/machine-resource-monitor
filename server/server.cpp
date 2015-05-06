#include "server.h"
#include "clientthread.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
//    server = new QTcpServer(this);
//    server->setMaxPendingConnections(200);

//    connect(server, SIGNAL(newConnection()), this, SLOT(connection()));

//    if(!server->listen(QHostAddress::Any, 32000))
//    {
//        qDebug() << "Server could not start!";
//    }
//    else
//    {
//        qDebug() << "Server started!";
//    }
}

void Server::startServer()
{
    int port = 32000;

    if(!this->listen(QHostAddress::Any, port))
    {
        qDebug() << "Could not start server";
    }
    else
    {
        qDebug() << "Listening to port " << port << "...";
    }
}


void Server::incomingConnection(qintptr socketDescriptor)
{
    // We have a new connection
    qDebug() << socketDescriptor << " Connecting...";

    // Every new connection will be run in a newly created thread
    ClientThread *thread = new ClientThread(socketDescriptor, this);

    // connect signal/slot
    // once a thread is not needed, it will be beleted later
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));

    thread->index = client.size();
    client.push_back(thread);

    emit clientConnect(thread->index, thread);

    thread->start();
}

