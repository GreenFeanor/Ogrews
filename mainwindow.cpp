#include "mainwindow.hpp"




MainWindow::MainWindow() //: QWidget()

{

     QMdiArea *zoneCentrale = new QMdiArea;
     QGraphicsView *zoneFile = new QGraphicsView;
     QMdiSubWindow *ss_fenetre = zoneCentrale->addSubWindow(zoneFile);
     //QGraphicsScene *scene = new QGraphicsScene(this);

    //setFixedSize(1024, 768);

    m_layout = new QGridLayout;
    mainlayout = new QGridLayout(zoneFile);
    mainlayout->setSizeConstraint(QLayout::SetFixedSize);

    m_box = new Box();

    m_box->addInput("Input1");
    m_box->addInput("Input2");
    m_box->addInput("Input3");

    m_box->addOutput("Output1");
    m_box->addOutput("Output2");

    m_box->PrintBox(m_layout, "RenderTarget");


    mainlayout->addLayout(m_layout, 0, 0);
    setCentralWidget(zoneCentrale);



}
