#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <string>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->countClient = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCPULabel(std::string s,int index) {

    qDebug()<<"Entra aqui";
    std::string str = ui->tab->tabText(ui->tab->currentIndex()).toStdString();
    qDebug()<<"Entra aqui client "<<str.c_str();
    std::vector<std::string> client = split(str,' ');
    qDebug()<<"Entra aqui 2";
    int indexClient = atoi(client[client.size()-1].c_str())-1;
    qDebug()<<"Entra aqui 3";

    if(indexClient != index)
    {
        return;
    }

    ui->cpu->setText(QString::fromStdString(s));

    this->repaint();
}


void MainWindow::setDiscLabel(std::string s, int index) {

    std::string str = ui->tab->tabText(ui->tab->currentIndex()).toStdString();

    std::vector<std::string> client = split(str,' ');

    int indexClient = atoi(client[client.size()-1].c_str())-1;

    if(indexClient != index)
    {
        return;
    }

    ui->disc->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setMemLabel(std::string s,int index) {

    std::string str = ui->tab->tabText(ui->tab->currentIndex()).toStdString();

    std::vector<std::string> client = split(str,' ');

    int indexClient = atoi(client[client.size()-1].c_str())-1;

    if(indexClient != index)
    {
        return;
    }

    ui->mem->setText(QString::fromStdString(s));

    this->repaint();
}



void MainWindow::setInLabel(std::string s,int index) {

    std::string str = ui->tab->tabText(ui->tab->currentIndex()).toStdString();

    std::vector<std::string> client = split(str,' ');

    int indexClient = atoi(client[client.size()-1].c_str())-1;

    if(indexClient != index)
    {
        return;
    }

    ui->in->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setOutLabel(std::string s,int index) {

    std::string str = ui->tab->tabText(ui->tab->currentIndex()).toStdString();

    std::vector<std::string> client = split(str,' ');

    int indexClient = atoi(client[client.size()-1].c_str())-1;


    if(indexClient != index)
    {
        return;
    }
    ui->out->setText(QString::fromStdString(s));

    this->repaint();
}


void MainWindow::removeTab(int index) {

    for(int i = 0; i < ui->tab->count();i++){

        std::string str = ui->tab->tabText(i).toStdString();

        std::vector<std::string> client = split(str,' ');

        int indexClient = atoi(client[client.size()-1].c_str())-1;


        if(indexClient == index)
        {
             ui->tab->removeTab(i);
             break;
        }

    }




    if(ui->tab->count() == 0)
    {
        ui->cpu->setText("");
        ui->disc->setText("");
        ui->in->setText("");
        ui->out->setText("");
        ui->mem->setText("");
    }

    this->repaint();
}
void MainWindow::newTab(int index, ClientThread *client) {

    const QString str = "Client "+ QString::number(index+1);
    ui->tab->addTab(new QWidget(),str);

    QObject::connect(client, SIGNAL(cpuChanged(std::string,int)), this, SLOT(setCPULabel(std::string,int)));
    QObject::connect(client, SIGNAL(memChanged(std::string,int)), this, SLOT(setMemLabel(std::string,int)));
    QObject::connect(client, SIGNAL(hdChanged(std::string,int)), this, SLOT(setDiscLabel(std::string,int)));
    QObject::connect(client, SIGNAL(inChanged(std::string,int)), this, SLOT(setInLabel(std::string,int)));
    QObject::connect(client, SIGNAL(outChanged(std::string,int)), this, SLOT(setOutLabel(std::string,int)));

    QObject::connect(client, SIGNAL(tabChanged(int)), this, SLOT(removeTab(int)));
}


std::vector<std::string> & MainWindow::split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        if(item.size() >= 1)
            elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> MainWindow::split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

