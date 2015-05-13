#include "clientthread.h"
#include <QHostAddress>


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
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnectedNow()), Qt::DirectConnection);

    // We'll have multiple clients, we want to know which is which
    qDebug() << socketDescriptor << " Client connected";

    // make this thread a loop,
    // thread will stay alive so that signal/slot to function properly
    // not dropped out in the middle when thread dies

    exec();
}


std::string ClientThread::returnCurrentTimeAndDate()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);

    strftime (buffer,80,"%d_%m_%Y_%T",timeinfo);

    return buffer;
}


void ClientThread::readyRead()
{

    QHostAddress addr = socket->peerAddress();
    std::string ip = addr.toString().toStdString();
    qDebug() << "IP "<<ip.c_str();

    std::fstream file;

    std::string fileName = ip+returnCurrentTimeAndDate();

    file.open(fileName);

//    if (file.is_open())
//    {

//        qDebug()<<"Arquivo será gravado";

//    }
//    else
//    {
//         qDebug()<<"Erro ao abrir arquivo";
//    }

    while(socket->isOpen()){

         QString t = QString(socket->readAll());
         qDebug()<<t;
         std::string s = t.toStdString();
         file.open(fileName, std::fstream::app|std::fstream::out );
         file<<s+'\n';
         file.close();

         std::vector<std::string> data;

         data = split(s,'$');

         for(unsigned int i = 0;i < data.size();i++){
//             qDebug()<<data[i].c_str();
             if(data[i].find("cpu") != std::string::npos){
                 std::string newstr = data[i].substr(0,data[i].size()-3);
//                 qDebug() <<newstr.c_str();
                setCpu(newstr);
             }
             else if(data[i].find("mem") != std::string::npos){
                std::string newstr = data[i].substr(0,data[i].size()-3);
//                qDebug() <<newstr.c_str();
                setMem(newstr);
             }
             else if(data[i].find("disc") != std::string::npos){
                std::string newstr = data[i].substr(0,data[i].size()-4);
//                qDebug() <<newstr.c_str();
                setHd(newstr);
             }
             else if(data[i].find("in") != std::string::npos){
                std::string newstr = data[i].substr(0,data[i].size()-2);
//                qDebug() <<newstr.c_str();
                setIn(newstr);
             }
             else if(data[i].find("out") != std::string::npos){
                std::string newstr = data[i].substr(0,data[i].size()-3);
//                qDebug() <<newstr.c_str();
                setOut(newstr);
             }
         }


         socket->waitForReadyRead(3000);

    }

    file.close();
}

void ClientThread::disconnectedNow()
{
    qDebug() << socketDescriptor << " Disconnected";
    socket->close();
    socket->deleteLater();
    emit tabChanged(this->index);
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


std::vector<std::string> & ClientThread::split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        if(item.size() >= 1)
            elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> ClientThread::split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

