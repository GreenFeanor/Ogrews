#include "mainwindow.hpp"




MainWindow::MainWindow() //: QWidget()

{
    setupUi(this);

//     QGraphicsView *zoneFile = new QGraphicsView;
//     zoneCentrale->addSubWindow(zoneFile);
     //QGraphicsScene *scene = new QGraphicsScene(this);

    //setFixedSize(1024, 768);


    m_layout = new QGridLayout;
        m_layout->setSizeConstraint(QLayout::SetFixedSize);
//    mainlayout = new QGridLayout(zoneFile);
//    mainlayout->setSizeConstraint(QLayout::SetFixedSize);

    m_box = new Box(this);
    m_box->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    m_box->setMaximumSize(100,100);
    m_box->setMinimumSize(100,100);

//    m_box->addInput("Input1");
//    m_box->addInput("Input2");
//    m_box->addInput("Input3");

//    m_box->addOutput("Output1");
//    m_box->addOutput("Output2");

//    m_box->PrintBox(m_layout, "RenderTarget");

mainlayout->addWidget(m_box);
//    mainlayout->addLayout(m_layout, 0, 0);
//    setLayout(mainlayout);

//    setCentralWidget(zoneCentrale);



}
