#include "box.hpp"

Box::Box(QWidget * parent) :
    QWidget(parent)
{
    setupUi(this);

     // DEFINI LES IMAGES
//    Downbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/Down");
//    Upbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/Up2.png");
//    Rightbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/Right");
//    Leftbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/Left");
//    LDownbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/LDown");
//    RDownbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/RDown");
//    RUpbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/RUp2");
//    LUpbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/LUp2");
//    Centerbox_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/box96px_splited/Center");

//    Connector_img = new QPixmap("C:/Users/ProUser/Documents/Compositor_Editor/Connector.png");




    // CREATION DES LABELS

//    Downbox_    = new QLabel();
//    Upbox_      = new QLabel();
//    Rightbox_   = new QLabel();
//    Leftbox_    = new QLabel();
//    LDownbox_   = new QLabel();
//    RDownbox_   = new QLabel();
//    RUpbox_     = new QLabel();
//    LUpbox_     = new QLabel();
//    Centerbox_  = new QLabel();

//    Text_ = new QLabel();



    // CHARGE IMAGE DANS LABEL

//    Downbox_->setPixmap(*Downbox_img);
//    Upbox_->setPixmap(*Upbox_img);
//    Rightbox_->setPixmap(*Rightbox_img);
//    Leftbox_->setPixmap(*Leftbox_img);
//    LDownbox_->setPixmap(*LDownbox_img);
//    RDownbox_->setPixmap(*RDownbox_img);
//    RUpbox_->setPixmap(*RUpbox_img);
//    LUpbox_->setPixmap(*LUpbox_img);
//    Centerbox_->setPixmap(*Centerbox_img);


    // RECUPERE LEUR LARGEUR/HAUTEUR

//    widthInitDown = Downbox_img->width(),      heightInitDown = Downbox_img->height();
//    widthInitUp = Upbox_img->width(),          heightInitUp = Upbox_img->height();
//    widthInitRight = Rightbox_img->width(),    heightInitRight = Rightbox_img->height();
//    widthInitLeft = Leftbox_img->width(),      heightInitLeft = Leftbox_img->height();
//    widthInitLDown = LDownbox_img->width(),    heightInitLDown = LDownbox_img->height();
//    widthInitRDown = RDownbox_img->width(),    heightInitRDown = RDownbox_img->height();
//    widthInitRUp = RUpbox_img->width(),        heightInitRUp = RUpbox_img->height();
//    widthInitLUp = LUpbox_img->width(),        heightInitLUp = LUpbox_img->height();
//    widthInitCenter = Centerbox_img->width(),  heightInitCenter = Centerbox_img->height();

}

Box::~Box()
{



}



void Box::addInput(QString nom)
{
    Input_.append( nom);

}



void Box::addOutput(QString nom)
{
    Output_.append( nom);
}


void Box::PrintBox(QGridLayout *layout, QString Titre)//, QWidget widget)
{


    const int FontSize = 9;

    Text_->setText(Titre);
    Text_->setFont(QFont("Arial", FontSize, QFont::Bold, false ));
    Text_->setAlignment(Qt::AlignCenter);
    Text_->setStyleSheet("color: #FFFFFF;");
    //Text_->setPalette(QPalette(QColor(0,255,255)));


    int LARGEUR_BOX=FontSize*Titre.size()+32; // Taille Police x nb Caratere + Largeur Minimum
    int HAUTEUR_BOX=16+(16+16);


    // CALCUL DES DIMENSIONS DE LA HAUTEUR/LARGEUR SANS LES COINS

     int LargeurTotMiddle = LARGEUR_BOX-(widthInitLUp+widthInitRUp); // on enleve la largeur des cotés
     int HauteurTotMiddle = HAUTEUR_BOX-(heightInitLUp+heightInitLDown); // on enleve la largeur des cotés


    // SCALES POUR REDIMENSIONNER EN FONCTION DE LA LARGEUR/HAUTEUR DEMANDEE

    Upbox_->setPixmap(Upbox_img->scaled(LargeurTotMiddle,heightInitUp));
    Downbox_->setPixmap(Downbox_img->scaled(LargeurTotMiddle,heightInitDown));
    Leftbox_->setPixmap(Leftbox_img->scaled(widthInitLeft,HauteurTotMiddle));
    Rightbox_->setPixmap(Rightbox_img->scaled(widthInitRight,HauteurTotMiddle));



    // CREATION ET REPARTITION DANS LA GRILLE

    layout->setVerticalSpacing(0);
    layout->setHorizontalSpacing(0);

    layout->addWidget(LUpbox_, 0, 0);
    layout->addWidget(Upbox_, 0, 1);
    layout->addWidget(Text_, 0, 1); // Texte
    layout->addWidget(RUpbox_, 0, 2);


    int i=1;

    /// CREATION DES ENTREES
    for (QStringList::iterator it = Input_.begin(); it != Input_.end(); ++it)
    {
        QString current = *it;

        QLabel *Connector_ = new QLabel();
                Connector_->setPixmap(*Connector_img);

        QLabel *LLeft_ = new QLabel();
                LLeft_->setPixmap(*Leftbox_img);

        QLabel *LCenter = new QLabel();
                LCenter->setPixmap(*Centerbox_img);

        QLabel *LRight = new QLabel();
                LRight->setPixmap(*Rightbox_img);

        QLabel *LInput = new QLabel();
                LInput->setText(current);
                LInput->setFont(QFont("Arial", 9, QFont::Normal, true ));
                LInput->setAlignment(Qt::AlignLeft);
                LInput->setStyleSheet("color: #FFFFFF;");



        layout->addWidget(LCenter,i,1);
        layout->addWidget(LLeft_, i, 0);
        layout->addWidget(Connector_, i, 0);
        layout->addWidget(LCenter, i, 1);
        LCenter->setPixmap(Centerbox_img->scaled(LargeurTotMiddle,HauteurTotMiddle));
        layout->addWidget(LInput,i,1);
        layout->addWidget(LRight, i, 2);

        i++;
    }

    /// CREATION DES SORTIES
    for (QStringList::iterator it = Output_.begin(); it != Output_.end(); ++it)
    {

        QString current = *it;

        QLabel *Connector_ = new QLabel();
                Connector_->setPixmap(*Connector_img);

        QLabel *LLeft_ = new QLabel();
                LLeft_->setPixmap(*Leftbox_img);

        QLabel *LCenter = new QLabel();
                LCenter->setPixmap(*Centerbox_img);

        QLabel *LRight = new QLabel();
                LRight->setPixmap(*Rightbox_img);

        QLabel *LInput = new QLabel();
                LInput->setText(current);
                LInput->setFont(QFont("Arial", 9, QFont::Normal, true ));
                LInput->setAlignment(Qt::AlignRight);
                LInput->setStyleSheet("color: #FFFFFF;");


        layout->addWidget(LCenter,i,1);
        layout->addWidget(LLeft_, i, 0);

        layout->addWidget(LCenter, i, 1);
        LCenter->setPixmap(Centerbox_img->scaled(LargeurTotMiddle,HauteurTotMiddle));
        layout->addWidget(LInput,i,1);
        layout->addWidget(LRight, i, 2);
        layout->addWidget(Connector_, i, 2);

        i++;
    }

    // fermeture de la box
    layout->addWidget(LDownbox_, 2+i, 0);
    layout->addWidget(Downbox_, 2+i, 1);
    layout->addWidget(RDownbox_, 2+i, 2);


}
