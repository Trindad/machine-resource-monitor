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

    if(ui->tab->currentIndex() != index)
    {
        return;
    }
    ui->cpu->setText(QString::fromStdString(s));

    this->repaint();
}


void MainWindow::setDiscLabel(std::string s, int index) {

    if(ui->tab->currentIndex() != index)
    {
        return;
    }
    ui->disc->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setMemLabel(std::string s,int index) {

    if(ui->tab->currentIndex() != index)
    {
        return;
    }

    ui->mem->setText(QString::fromStdString(s));

    this->repaint();
}



void MainWindow::setInLabel(std::string s,int index) {

    if(ui->tab->currentIndex() != index)
    {
        return;
    }
    ui->in->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setOutLabel(std::string s,int index) {
    if(ui->tab->currentIndex() != index)
    {
        return;
    }
    ui->out->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::newTab(int indice, ClientThread *client) {

    const QString str = "Client "+ QString::number(indice+1);
    ui->tab->addTab(new QWidget(),str);

    QObject::connect(client, SIGNAL(cpuChanged(std::string,int)), this, SLOT(setCPULabel(std::string,int)));
    QObject::connect(client, SIGNAL(memChanged(std::string,int)), this, SLOT(setMemLabel(std::string,int)));
    QObject::connect(client, SIGNAL(hdChanged(std::string,int)), this, SLOT(setDiscLabel(std::string,int)));
    QObject::connect(client, SIGNAL(inChanged(std::string,int)), this, SLOT(setInLabel(std::string,int)));
    QObject::connect(client, SIGNAL(outChanged(std::string,int)), this, SLOT(setOutLabel(std::string,int)));
}
