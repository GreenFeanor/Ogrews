#include "mainwindow.hpp"
#include <QApplication>
#include <QtWidgets>
#include <QLabel>
#include <QtGUI>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    w.show();

    return app.exec();
}
