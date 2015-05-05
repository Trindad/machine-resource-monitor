#include "server.h"

Server::Server(QObject *parent) :
    QObject(parent)
{
    server = new QTcpServer(this);
    server->setMaxPendingConnections(200);

    connect(server, SIGNAL(newConnection()), this, SLOT(connection()));

    if(!server->listen(QHostAddress::Any, 32000))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }
}

void Server::connection()
{
    qDebug()<<"WTF";
    QTcpSocket *socket = server->nextPendingConnection();

//    socket->write("hello client\r\n");
//        socket->flush();

//        socket->waitForBytesWritten(3000);

    while(true){

         socket->waitForReadyRead(60000);
// qDebug() << socket->readAll();

         QString t = QString(socket->readAll());
         qDebug()<<t;
         std::string s = t.toStdString();
         int n = s.size();

         if(s.find("cpu") != std::string::npos){
             std::string newstr = s.substr(0,n-3);
             qDebug() <<newstr.c_str();
            setCpu(newstr);
         }
         else if(s.find("mem") != std::string::npos){
            std::string newstr = s.substr(0,n-3);
            qDebug() <<newstr.c_str();
            setMem(newstr);
         }
         else if(s.find("disc") != std::string::npos){
            std::string newstr = s.substr(0,n-4);
            qDebug() <<newstr.c_str();
            setHd(newstr);
         }
         else if(s.find("in") != std::string::npos){
            std::string newstr = s.substr(0,n-2);
            qDebug() <<newstr.c_str();
            setIn(newstr);
         }
         else if(s.find("out") != std::string::npos){
            std::string newstr = s.substr(0,n-3);
            qDebug() <<newstr.c_str();
            setOut(newstr);
         }
    }

//    socket->close();
}


//void  Server::getCpu(){

//    emit valueChanged( QString::fromStdString(this->cpu) );
//}


void Server::setCpu(std::string c){
    this->cpu = c;
    emit cpuChanged(c);
}

void Server::setMem(std::string m){
    this->mem = m;
    emit memChanged(m);
}

void Server::setHd(std::string h){
    this->hd = h;
    emit hdChanged(h);
}

void Server::setIn(std::string i){
    this->in = i;
    emit inChanged(i);
}

void Server::setOut(std::string o){
    this->out = o;
    emit outChanged(o);
}
