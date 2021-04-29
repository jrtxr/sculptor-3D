/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEscultor;
    QAction *actionFechar;
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionSalvar;
    QWidget *centralWidget;
    QGroupBox *groupBoxPlanos;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QSlider *horizontalZ;
    QLCDNumber *lcdNumberZ;
    Plotter *widget;
    QGroupBox *groupBoxCor;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSlider *horizontalR;
    QLCDNumber *lcdNumberR;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSlider *horizontalG;
    QLCDNumber *lcdNumberG;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSlider *horizontalB;
    QLCDNumber *lcdNumberB;
    QGroupBox *groupBoxEsfera;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalRaioEsfera;
    QLCDNumber *lcdNumberRaioEsfera;
    QGroupBox *groupBoxEllipsoid;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalRaioXEllipsoid;
    QLCDNumber *lcdNumberRaioXElipse;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *horizontalRaioYEllipsoid;
    QLCDNumber *lcdNumberRaioYElipse;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *horizontalRaioZEllipsoid;
    QLCDNumber *lcdNumberRaioZElipse;
    QGroupBox *groupBoxCaixa;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *horizontalDimXCaixa;
    QLCDNumber *lcdNumberDimXCaixa;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *horizontalDimYCaixa;
    QLCDNumber *lcdNumberDimYCaixa;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSlider *horizontalDimZCaixa;
    QLCDNumber *lcdNumberDimZCaixa;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 682);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionEscultor = new QAction(MainWindow);
        actionEscultor->setObjectName(QString::fromUtf8("actionEscultor"));
        QFont font;
        font.setPointSize(12);
        actionEscultor->setFont(font);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        actionPutVoxel->setCheckable(true);
        actionPutVoxel->setChecked(false);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        actionCutVoxel->setCheckable(true);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        actionPutBox->setCheckable(true);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        actionCutBox->setCheckable(true);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        actionPutSphere->setCheckable(true);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        actionCutSphere->setCheckable(true);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        actionPutEllipsoid->setCheckable(true);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        actionCutEllipsoid->setCheckable(true);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(1300, 990));
        groupBoxPlanos = new QGroupBox(centralWidget);
        groupBoxPlanos->setObjectName(QString::fromUtf8("groupBoxPlanos"));
        groupBoxPlanos->setGeometry(QRect(0, 0, 271, 111));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(12);
        groupBoxPlanos->setFont(font1);
        groupBoxPlanos->setAlignment(Qt::AlignCenter);
        verticalLayout_6 = new QVBoxLayout(groupBoxPlanos);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(7);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_19 = new QLabel(groupBoxPlanos);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_20->addWidget(label_19);

        horizontalZ = new QSlider(groupBoxPlanos);
        horizontalZ->setObjectName(QString::fromUtf8("horizontalZ"));
        horizontalZ->setOrientation(Qt::Horizontal);

        horizontalLayout_20->addWidget(horizontalZ);

        lcdNumberZ = new QLCDNumber(groupBoxPlanos);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));
        lcdNumberZ->setLineWidth(1);
        lcdNumberZ->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_20->addWidget(lcdNumberZ);

        horizontalLayout_20->setStretch(1, 85);
        horizontalLayout_20->setStretch(2, 15);

        verticalLayout_6->addLayout(horizontalLayout_20);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 120, 1141, 461));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(555555, 555555));
        widget->setLayoutDirection(Qt::LeftToRight);
        groupBoxCor = new QGroupBox(centralWidget);
        groupBoxCor->setObjectName(QString::fromUtf8("groupBoxCor"));
        groupBoxCor->setGeometry(QRect(270, 0, 241, 111));
        groupBoxCor->setFont(font);
        groupBoxCor->setAlignment(Qt::AlignCenter);
        groupBoxCor->setFlat(false);
        verticalLayout_9 = new QVBoxLayout(groupBoxCor);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(groupBoxCor);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        horizontalR = new QSlider(groupBoxCor);
        horizontalR->setObjectName(QString::fromUtf8("horizontalR"));
        horizontalR->setMaximum(255);
        horizontalR->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalR);

        lcdNumberR = new QLCDNumber(groupBoxCor);
        lcdNumberR->setObjectName(QString::fromUtf8("lcdNumberR"));
        lcdNumberR->setMaximumSize(QSize(80, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        lcdNumberR->setFont(font2);
        lcdNumberR->setLineWidth(1);
        lcdNumberR->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_11->addWidget(lcdNumberR);

        horizontalLayout_11->setStretch(1, 70);
        horizontalLayout_11->setStretch(2, 30);

        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(7);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(groupBoxCor);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalG = new QSlider(groupBoxCor);
        horizontalG->setObjectName(QString::fromUtf8("horizontalG"));
        horizontalG->setMaximum(255);
        horizontalG->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalG);

        lcdNumberG = new QLCDNumber(groupBoxCor);
        lcdNumberG->setObjectName(QString::fromUtf8("lcdNumberG"));
        lcdNumberG->setMaximumSize(QSize(80, 40));
        lcdNumberG->setLineWidth(1);
        lcdNumberG->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_12->addWidget(lcdNumberG);

        horizontalLayout_12->setStretch(1, 70);
        horizontalLayout_12->setStretch(2, 30);

        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(7);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(groupBoxCor);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        horizontalB = new QSlider(groupBoxCor);
        horizontalB->setObjectName(QString::fromUtf8("horizontalB"));
        horizontalB->setMaximum(255);
        horizontalB->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalB);

        lcdNumberB = new QLCDNumber(groupBoxCor);
        lcdNumberB->setObjectName(QString::fromUtf8("lcdNumberB"));
        lcdNumberB->setMaximumSize(QSize(80, 40));
        lcdNumberB->setLineWidth(1);
        lcdNumberB->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcdNumberB);

        horizontalLayout_13->setStretch(1, 70);
        horizontalLayout_13->setStretch(2, 30);

        verticalLayout_4->addLayout(horizontalLayout_13);


        verticalLayout_9->addLayout(verticalLayout_4);

        groupBoxEsfera = new QGroupBox(centralWidget);
        groupBoxEsfera->setObjectName(QString::fromUtf8("groupBoxEsfera"));
        groupBoxEsfera->setGeometry(QRect(940, 0, 211, 111));
        groupBoxEsfera->setFont(font);
        groupBoxEsfera->setAlignment(Qt::AlignCenter);
        groupBoxEsfera->setFlat(false);
        layoutWidget = new QWidget(groupBoxEsfera);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 187, 48));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, 0, 10);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalRaioEsfera = new QSlider(layoutWidget);
        horizontalRaioEsfera->setObjectName(QString::fromUtf8("horizontalRaioEsfera"));
        horizontalRaioEsfera->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalRaioEsfera);

        lcdNumberRaioEsfera = new QLCDNumber(layoutWidget);
        lcdNumberRaioEsfera->setObjectName(QString::fromUtf8("lcdNumberRaioEsfera"));
        lcdNumberRaioEsfera->setMaximumSize(QSize(80, 40));
        lcdNumberRaioEsfera->setFrameShape(QFrame::Box);
        lcdNumberRaioEsfera->setFrameShadow(QFrame::Raised);
        lcdNumberRaioEsfera->setLineWidth(1);
        lcdNumberRaioEsfera->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumberRaioEsfera);

        horizontalLayout->setStretch(1, 68);
        groupBoxEllipsoid = new QGroupBox(centralWidget);
        groupBoxEllipsoid->setObjectName(QString::fromUtf8("groupBoxEllipsoid"));
        groupBoxEllipsoid->setGeometry(QRect(720, 0, 221, 111));
        groupBoxEllipsoid->setFont(font);
        groupBoxEllipsoid->setAlignment(Qt::AlignCenter);
        groupBoxEllipsoid->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBoxEllipsoid);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBoxEllipsoid);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalRaioXEllipsoid = new QSlider(groupBoxEllipsoid);
        horizontalRaioXEllipsoid->setObjectName(QString::fromUtf8("horizontalRaioXEllipsoid"));
        horizontalRaioXEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalRaioXEllipsoid);

        lcdNumberRaioXElipse = new QLCDNumber(groupBoxEllipsoid);
        lcdNumberRaioXElipse->setObjectName(QString::fromUtf8("lcdNumberRaioXElipse"));
        lcdNumberRaioXElipse->setMaximumSize(QSize(80, 40));
        lcdNumberRaioXElipse->setLineWidth(1);
        lcdNumberRaioXElipse->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberRaioXElipse);

        horizontalLayout_2->setStretch(1, 70);
        horizontalLayout_2->setStretch(2, 30);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBoxEllipsoid);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalRaioYEllipsoid = new QSlider(groupBoxEllipsoid);
        horizontalRaioYEllipsoid->setObjectName(QString::fromUtf8("horizontalRaioYEllipsoid"));
        horizontalRaioYEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalRaioYEllipsoid);

        lcdNumberRaioYElipse = new QLCDNumber(groupBoxEllipsoid);
        lcdNumberRaioYElipse->setObjectName(QString::fromUtf8("lcdNumberRaioYElipse"));
        lcdNumberRaioYElipse->setMaximumSize(QSize(80, 40));
        lcdNumberRaioYElipse->setLineWidth(1);
        lcdNumberRaioYElipse->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumberRaioYElipse);

        horizontalLayout_4->setStretch(1, 70);
        horizontalLayout_4->setStretch(2, 30);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBoxEllipsoid);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalRaioZEllipsoid = new QSlider(groupBoxEllipsoid);
        horizontalRaioZEllipsoid->setObjectName(QString::fromUtf8("horizontalRaioZEllipsoid"));
        horizontalRaioZEllipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalRaioZEllipsoid);

        lcdNumberRaioZElipse = new QLCDNumber(groupBoxEllipsoid);
        lcdNumberRaioZElipse->setObjectName(QString::fromUtf8("lcdNumberRaioZElipse"));
        lcdNumberRaioZElipse->setMaximumSize(QSize(80, 40));
        lcdNumberRaioZElipse->setLineWidth(1);
        lcdNumberRaioZElipse->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lcdNumberRaioZElipse);

        horizontalLayout_3->setStretch(1, 70);
        horizontalLayout_3->setStretch(2, 30);

        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBoxCaixa = new QGroupBox(centralWidget);
        groupBoxCaixa->setObjectName(QString::fromUtf8("groupBoxCaixa"));
        groupBoxCaixa->setGeometry(QRect(510, 0, 211, 111));
        groupBoxCaixa->setFont(font);
        groupBoxCaixa->setAlignment(Qt::AlignCenter);
        groupBoxCaixa->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(groupBoxCaixa);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBoxCaixa);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalDimXCaixa = new QSlider(groupBoxCaixa);
        horizontalDimXCaixa->setObjectName(QString::fromUtf8("horizontalDimXCaixa"));
        horizontalDimXCaixa->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalDimXCaixa);

        lcdNumberDimXCaixa = new QLCDNumber(groupBoxCaixa);
        lcdNumberDimXCaixa->setObjectName(QString::fromUtf8("lcdNumberDimXCaixa"));
        lcdNumberDimXCaixa->setMaximumSize(QSize(80, 40));
        lcdNumberDimXCaixa->setLineWidth(1);
        lcdNumberDimXCaixa->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumberDimXCaixa);

        horizontalLayout_5->setStretch(1, 70);
        horizontalLayout_5->setStretch(2, 30);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBoxCaixa);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalDimYCaixa = new QSlider(groupBoxCaixa);
        horizontalDimYCaixa->setObjectName(QString::fromUtf8("horizontalDimYCaixa"));
        horizontalDimYCaixa->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalDimYCaixa);

        lcdNumberDimYCaixa = new QLCDNumber(groupBoxCaixa);
        lcdNumberDimYCaixa->setObjectName(QString::fromUtf8("lcdNumberDimYCaixa"));
        lcdNumberDimYCaixa->setMaximumSize(QSize(80, 40));
        lcdNumberDimYCaixa->setLineWidth(1);
        lcdNumberDimYCaixa->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(lcdNumberDimYCaixa);

        horizontalLayout_6->setStretch(1, 70);
        horizontalLayout_6->setStretch(2, 30);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBoxCaixa);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalDimZCaixa = new QSlider(groupBoxCaixa);
        horizontalDimZCaixa->setObjectName(QString::fromUtf8("horizontalDimZCaixa"));
        horizontalDimZCaixa->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalDimZCaixa);

        lcdNumberDimZCaixa = new QLCDNumber(groupBoxCaixa);
        lcdNumberDimZCaixa->setObjectName(QString::fromUtf8("lcdNumberDimZCaixa"));
        lcdNumberDimZCaixa->setMaximumSize(QSize(80, 40));
        lcdNumberDimZCaixa->setLineWidth(1);
        lcdNumberDimZCaixa->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_7->addWidget(lcdNumberDimZCaixa);

        horizontalLayout_7->setStretch(1, 70);
        horizontalLayout_7->setStretch(2, 30);

        verticalLayout_3->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionFechar);
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addAction(actionEscultor);
        mainToolBar->addAction(actionPutVoxel);
        mainToolBar->addAction(actionCutVoxel);
        mainToolBar->addAction(actionPutBox);
        mainToolBar->addAction(actionCutBox);
        mainToolBar->addAction(actionPutSphere);
        mainToolBar->addAction(actionCutSphere);
        mainToolBar->addAction(actionPutEllipsoid);
        mainToolBar->addAction(actionCutEllipsoid);

        retranslateUi(MainWindow);
        QObject::connect(horizontalRaioEsfera, SIGNAL(valueChanged(int)), lcdNumberRaioEsfera, SLOT(display(int)));
        QObject::connect(horizontalRaioXEllipsoid, SIGNAL(valueChanged(int)), lcdNumberRaioXElipse, SLOT(display(int)));
        QObject::connect(horizontalRaioYEllipsoid, SIGNAL(valueChanged(int)), lcdNumberRaioYElipse, SLOT(display(int)));
        QObject::connect(horizontalRaioZEllipsoid, SIGNAL(valueChanged(int)), lcdNumberRaioZElipse, SLOT(display(int)));
        QObject::connect(horizontalDimXCaixa, SIGNAL(valueChanged(int)), lcdNumberDimXCaixa, SLOT(display(int)));
        QObject::connect(horizontalDimYCaixa, SIGNAL(valueChanged(int)), lcdNumberDimYCaixa, SLOT(display(int)));
        QObject::connect(horizontalDimZCaixa, SIGNAL(valueChanged(int)), lcdNumberDimZCaixa, SLOT(display(int)));
        QObject::connect(horizontalR, SIGNAL(valueChanged(int)), lcdNumberR, SLOT(display(int)));
        QObject::connect(horizontalG, SIGNAL(valueChanged(int)), lcdNumberG, SLOT(display(int)));
        QObject::connect(horizontalB, SIGNAL(valueChanged(int)), lcdNumberB, SLOT(display(int)));
        QObject::connect(horizontalZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));
        QObject::connect(actionFechar, SIGNAL(triggered(bool)), MainWindow, SLOT(close()));
        QObject::connect(actionPutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionPutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(actionCutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(capturaAcao(bool)));
        QObject::connect(horizontalG, SIGNAL(valueChanged(int)), widget, SLOT(mudaG(int)));
        QObject::connect(horizontalB, SIGNAL(valueChanged(int)), widget, SLOT(mudaB(int)));
        QObject::connect(actionSalvar, SIGNAL(triggered(bool)), widget, SLOT(salvaEscultor()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEscultor->setText(QCoreApplication::translate("MainWindow", "Escultor", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "PutVoxel", nullptr));
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "CutVoxel", nullptr));
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        groupBoxPlanos->setTitle(QCoreApplication::translate("MainWindow", "Planos", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBoxCor->setTitle(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBoxEsfera->setTitle(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        groupBoxEllipsoid->setTitle(QCoreApplication::translate("MainWindow", "Elips\303\263ide", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBoxCaixa->setTitle(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
