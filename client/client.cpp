#include "client.h"

Client::~Client()
{

}

Client::Client(QObject *parent) :
    QObject(parent)
{
}

void Client::connect()
{
    socket = new QTcpSocket(this);
    socket->connectToHost("localhost",32000);

    if(socket->waitForConnected(3000))
    {

        while (true) {


            std::string c = cpu();
            std::string hd = disc();
            std::string mem = memory();
            network();

            std::string data = c+"$"+hd+"$"+mem+"$"+this->in+"$"+this->out+"$";
           // qDebug()<<data.c_str();
            socket->write(data.c_str());


            socket->waitForBytesWritten(3000);


            std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        }


//        socket->close();
    }


}

std::vector<std::string> & Client::split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        if(item.size() >= 1)
            elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> Client::split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}


std::string Client::cpu() {

        FILE *in;

        in = popen("mpstat -P ALL","r");
        char buff[5000];
        std::string  c = "all";
        std::vector<std::string> s;

        while(fgets(buff, sizeof(buff), in) != NULL){

               std::string line = buff;

               if(line.find(c) != std::string::npos){

                   s = split(line,' ');
               }
               qDebug() << buff;

        }
         pclose(in);

        if(s.size() >= 1){
            double use = stod(s[s.size()-1]);
            use = 100-use;



            c = "use "+std::to_string(use) +"\% "+"cpu";
            return c;
        }

        return NULL;
}

std::string Client::disc() {
    FILE *in;

    in = popen("df -h","r");
    char buff[5000];
    std::string  hd = "/dev/sda";
    std::vector<std::string> s;

    while(fgets(buff, sizeof(buff), in) != NULL){

           std::string line = buff;

           if(line.find(hd) != std::string::npos){

               s = split(line,' ');

//                       for(unsigned int i = 0; i < s.size();i++ ) {
//                           std::string temp = s[i];
//                           qDebug() << temp.c_str();
//                       }
                     qDebug() << buff;
           }

    }
     pclose(in);

    if(s.size() >= 1){
        std::string disc = s[2]+" of "+s[1]+" "+"disc";
        return disc;
    }

    return NULL;

}


std::string Client::memory() {
    FILE *in;

    in = popen("free -m","r");
    char buff[5000];
    std::string  mem = "Mem:";
    std::vector<std::string> s;

    while(fgets(buff, sizeof(buff), in) != NULL){

           std::string line = buff;

           if(line.find(mem) != std::string::npos){

               s = split(line,' ');
           }
            qDebug() << buff;

    }

     pclose(in);

    if(s.size() >= 1){
        std::string m = s[2]+" of "+s[1]+" "+"mem";
        return m;
    }

    return NULL;

}

void Client::network() {
    FILE *f;

    f = popen("ifstat -i wlan0 1 1","r");
    char buff[5000];

    std::vector<std::string> s;

    int count = 0;

    while(fgets(buff, sizeof(buff), f) != NULL){

           std::string line = buff;

           count++;

           if(count == 3){

               s = split(line,' ');
               break;
           }
            qDebug() << buff;

    }

     pclose(f);


    if(s.size() >= 1){

        this->in = s[0]+" KB/s"+" "+"in";
        s[1].erase(std::remove(s[1].begin(),s[1].end(),'\n'),s[1].end());
        this->out = s[1]+" KB/s"+" "+"out";
    }

}

