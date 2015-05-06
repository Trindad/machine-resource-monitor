#include "clientthread.h"

ClientThread::ClientThread(qintptr ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
}

void ClientThread::run()
{
    // thread starts here
    qDebug() << " Thread started";

    socket = new QTcpSocket();

    // set the ID
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        // something's wrong, we just emit a signal
        emit error(socket->error());
        return;
    }

    // connect socket and signal
    // note - Qt::DirectConnection is used because it's multithreaded
    //        This makes the slot to be invoked immediately, when the signal is emitted.

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    // We'll have multiple clients, we want to know which is which
    qDebug() << socketDescriptor << " Client connected";

    // make this thread a loop,
    // thread will stay alive so that signal/slot to function properly
    // not dropped out in the middle when thread dies

    exec();
}

void ClientThread::readyRead()
{

    while(true){

         socket->waitForReadyRead(60000);

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

}

void ClientThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected";


    socket->deleteLater();
    exit(0);
}

void ClientThread::setCpu(std::string c){
    this->cpu = c;
    emit cpuChanged(c, this->index);
}

void ClientThread::setMem(std::string m){
    this->mem = m;
    emit memChanged(m, this->index);
}

void ClientThread::setHd(std::string h){
    this->hd = h;
    emit hdChanged(h, this->index);
}

void ClientThread::setIn(std::string i){
    this->in = i;
    emit inChanged(i, this->index);
}

void ClientThread::setOut(std::string o){
    this->out = o;
    emit outChanged(o, this->index);
}


