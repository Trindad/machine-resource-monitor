#-------------------------------------------------
#
# Project created by QtCreator 2015-05-04T11:40:32
#
#-------------------------------------------------

QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

TARGET = server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    server.cpp \
    clientthread.cpp

HEADERS  += mainwindow.h \
    server.h \
    clientthread.h

FORMS    += mainwindow.ui
