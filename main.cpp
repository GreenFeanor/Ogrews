#include "mainwindow.hpp"
#include <QApplication>
#include <QWidget>
#include <QLabel>
//#include <QtGUI>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    w.show();

    return app.exec();
}
