#ifndef SERVER_H
#define SERVER_H
#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <string>
#include <vector>
#include <sstream>

class Server: public QObject
{
Q_OBJECT
public:
  explicit Server(QObject *parent = 0);

signals:

    void cpuChanged(std::string);
    void memChanged(std::string);
    void hdChanged(std::string);
    void inChanged(std::string);
    void outChanged(std::string);

public slots:
  void connection();

  void setCpu(std::string);
  void setMem(std::string);
  void setHd(std::string);
  void setIn(std::string);
  void setOut(std::string);

private:
  QTcpServer *server;
  std::string cpu;
  std::string hd;
  std::string mem;
  std::string in;
  std::string out;
};

#endif // SERVER_H
