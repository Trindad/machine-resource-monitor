/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *in;
    QLabel *out;
    QLabel *cpu;
    QLabel *mem;
    QLabel *disc;
    QTabWidget *tab;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(770, 435);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(34, 34, 34, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(51, 51, 51, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(42, 42, 42, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(17, 17, 17, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(22, 22, 22, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(47, 116, 237, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        MainWindow->setPalette(palette);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 91, 31));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(47, 116, 237)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 70, 171, 41));
        QFont font2;
        font2.setPointSize(28);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:rgb(47, 116, 237)"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 70, 151, 41));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:rgb(47, 116, 237)"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 190, 651, 181));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        groupBox->setPalette(palette1);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"color: rgb(47, 116, 237)\n"
"\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 90, 91, 41));
        QFont font3;
        font3.setPointSize(25);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color:rgb(47, 116, 237)"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 90, 141, 41));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color:rgb(47, 116, 237)"));
        in = new QLabel(groupBox);
        in->setObjectName(QStringLiteral("in"));
        in->setGeometry(QRect(150, 90, 151, 31));
        QFont font4;
        font4.setPointSize(20);
        in->setFont(font4);
        in->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        out = new QLabel(groupBox);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(460, 90, 171, 31));
        out->setFont(font4);
        out->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        cpu = new QLabel(centralWidget);
        cpu->setObjectName(QStringLiteral("cpu"));
        cpu->setGeometry(QRect(70, 130, 181, 41));
        cpu->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        mem = new QLabel(centralWidget);
        mem->setObjectName(QStringLiteral("mem"));
        mem->setGeometry(QRect(290, 130, 181, 41));
        mem->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        disc = new QLabel(centralWidget);
        disc->setObjectName(QStringLiteral("disc"));
        disc->setGeometry(QRect(510, 130, 201, 41));
        disc->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        tab = new QTabWidget(centralWidget);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(0, 0, 771, 41));
        tab->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"background:#2c2c2c;\n"
"border: none;\n"
"border-bottom: 1px solid #111;\n"
"}\n"
"QTabBar {\n"
"border: none;\n"
"}\n"
"QTabBar::tab{\n"
"color: #888;\n"
"background: #303030;\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"color:#e0e0e0;\n"
"background: #555;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        label_2->raise();
        label_3->raise();
        cpu->raise();
        mem->raise();
        disc->raise();
        groupBox->raise();
        tab->raise();

        retranslateUi(MainWindow);

        tab->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Machine Resource Monitor", 0));
        label->setText(QApplication::translate("MainWindow", "CPU", 0));
        label_2->setText(QApplication::translate("MainWindow", "Memory", 0));
        label_3->setText(QApplication::translate("MainWindow", "Disk", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Network", 0));
        label_4->setText(QApplication::translate("MainWindow", "Input:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Output:", 0));
        in->setText(QString());
        out->setText(QString());
        cpu->setText(QString());
        mem->setText(QString());
        disc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
