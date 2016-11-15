#ifndef BOX_HPP
#define BOX_HPP

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QStringList>
#include <QGridLayout>

class Box
{



public:
    Box();
    ~Box();


    void PrintBox(QGridLayout *layout, QString Titre);
    void addInput(QString nom);
    void addOutput(QString nom);


private:

    QPixmap *Downbox_img;
    QPixmap *Upbox_img;
    QPixmap *Rightbox_img;
    QPixmap *Leftbox_img;
    QPixmap *LDownbox_img;
    QPixmap *RDownbox_img;
    QPixmap *RUpbox_img;
    QPixmap *LUpbox_img;
    QPixmap *Centerbox_img;
    QPixmap *Connector_img;


    QLabel *Downbox_;
    QLabel *Upbox_;
    QLabel *Rightbox_;
    QLabel *Leftbox_;
    QLabel *LDownbox_;
    QLabel *RDownbox_;
    QLabel *RUpbox_;
    QLabel *LUpbox_;
    QLabel *Centerbox_;

    QLabel *Text_;
    QStringList Input_, Output_;


    // Pour recuperer les dimensions des images
    int widthInitDown,      heightInitDown;
    int widthInitUp,          heightInitUp;
    int widthInitRight,    heightInitRight;
    int widthInitLeft,      heightInitLeft;
    int widthInitLDown,    heightInitLDown;
    int widthInitRDown,    heightInitRDown;
    int widthInitRUp,        heightInitRUp;
    int widthInitLUp,        heightInitLUp;
    int widthInitCenter,  heightInitCenter;


};

#endif // BOX_HPP
