#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <string>
#include "clientthread.h"

Q_DECLARE_METATYPE(std::string);

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    std::vector<std::string> & split(const std::string &,char, std::vector<std::string> &);
    std::vector<std::string> split(const std::string &,char);

    ~MainWindow();
public slots:
    void setCPULabel(std::string,int);
    void setDiscLabel(std::string,int);
    void setMemLabel(std::string,int);
    void setInLabel(std::string,int);
    void setOutLabel(std::string,int);
    void removeTab(int);

    void newTab(int,ClientThread*);

private:
    Ui::MainWindow *ui;
    int countClient;
};

#endif // MAINWINDOW_H


