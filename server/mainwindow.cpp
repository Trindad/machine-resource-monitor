#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCPULabel(std::string s) {

    ui->cpu->setText(QString::fromStdString(s));

    this->repaint();
}


void MainWindow::setDiscLabel(std::string s) {

    ui->disc->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setMemLabel(std::string s) {

    ui->mem->setText(QString::fromStdString(s));

    this->repaint();
}


void MainWindow::setInLabel(std::string s) {

    ui->in->setText(QString::fromStdString(s));

    this->repaint();
}

void MainWindow::setOutLabel(std::string s) {
    qDebug() << "OUT " << s.c_str();
    ui->out->setText(QString::fromStdString(s));

    this->repaint();
}
