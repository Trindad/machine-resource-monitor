#ifndef SERVER_H
#define SERVER_H
#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <string>
#include <vector>
#include <sstream>
#include <clientthread.h>

class Server: public QTcpServer
{
Q_OBJECT
public:
  explicit Server(QObject *parent = 0);
  void startServer();
  std::vector<ClientThread*> client;

signals:
       void clientConnect(int, ClientThread*);

protected:
    void incomingConnection(qintptr socketDescriptor);

private:
  QTcpServer *server;

};

#endif // SERVER_H
