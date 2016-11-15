#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T21:47:05
#
#-------------------------------------------------

QT       += core gui

QT       += widgets

TARGET = Compositor_Editor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    box.cpp \
    node.cpp

HEADERS  += \
    box.hpp \
    mainwindow.hpp \
    node.h

FORMS    += mainwindow.ui
