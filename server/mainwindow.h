#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void setCPULabel(std::string);
    void setDiscLabel(std::string);
    void setMemLabel(std::string);
    void setInLabel(std::string);
    void setOutLabel(std::string);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
