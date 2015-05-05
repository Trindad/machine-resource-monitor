#ifndef CLIENT_H
#define CLIENT_H
#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <chrono>
#include <thread>
#include <string>
#include <vector>
#include <sstream>

class Client: public  QObject
{
    Q_OBJECT
public:

    ~Client();

    explicit Client(QObject *parent = 0);
    std::vector<std::string> &split(const std::string &, char, std::vector<std::string> &);
    std::vector<std::string> split(const std::string &, char);
    std::string disc();
    std::string cpu();
    std::string memory();
    void network();
    void connect();

    signals:

public slots:

private:
    QTcpSocket *socket;
    std::string in;
    std::string out;
};

#endif // CLIENT_H
