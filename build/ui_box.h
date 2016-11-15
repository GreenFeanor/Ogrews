/********************************************************************************
** Form generated from reading UI file 'box.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOX_H
#define UI_BOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Box
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;

    void setupUi(QWidget *Box)
    {
        if (Box->objectName().isEmpty())
            Box->setObjectName(QString::fromUtf8("Box"));
        Box->resize(100, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Box->sizePolicy().hasHeightForWidth());
        Box->setSizePolicy(sizePolicy);
        Box->setMinimumSize(QSize(100, 100));
        Box->setMaximumSize(QSize(100, 100));
        gridLayout = new QGridLayout(Box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Box);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(3);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Box);

        QMetaObject::connectSlotsByName(Box);
    } // setupUi

    void retranslateUi(QWidget *Box)
    {
        Box->setWindowTitle(QApplication::translate("Box", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Box: public Ui_Box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOX_H
