#ifndef DEF_MAINWINDOW
#define DEF_MAINWINDOW



#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QLabel>
#include <QMdiArea>


#include "box.hpp"



class MainWindow : public QMainWindow

{

    public:

    MainWindow();




    private:

    QLCDNumber *m_lcd;
    QSlider *m_slider;
    QLabel *m_label;


    protected:
    QGridLayout *mainlayout;
    QGridLayout *m_layout, *m_layout2;




    Box *m_box, *m_box2;

};



#endif
