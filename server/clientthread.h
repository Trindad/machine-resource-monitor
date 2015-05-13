#ifndef CLIENTTHREAD_H
#define CLIENTTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class ClientThread : public QThread
{
    Q_OBJECT
public:
    explicit ClientThread(qintptr ID, QObject *parent = 0);
    std::vector<std::string> & split(const std::string &,char, std::vector<std::string> &);
    std::vector<std::string> split(const std::string &,char);
    std::string returnCurrentTimeAndDate();
    int index;

    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);
    void cpuChanged(std::string,int);
    void memChanged(std::string,int);
    void hdChanged(std::string,int);
    void inChanged(std::string,int);
    void outChanged(std::string,int);
    void tabChanged(int);

public slots:
    void readyRead();
    void disconnectedNow();
    void setCpu(std::string);
    void setMem(std::string);
    void setHd(std::string);
    void setIn(std::string);
    void setOut(std::string);

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    std::string cpu;
    std::string hd;
    std::string mem;
    std::string in;
    std::string out;
};

#endif // CLIENTTHREAD_H

