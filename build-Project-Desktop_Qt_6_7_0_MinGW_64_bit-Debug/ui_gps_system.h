/********************************************************************************
** Form generated from reading UI file 'gps_system.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPS_SYSTEM_H
#define UI_GPS_SYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPS_System
{
public:
    QWidget *centralwidget;
    QPushButton *AddGraphB;
    QPushButton *DisplayGraphB;
    QGroupBox *Add;
    QPushButton *AdsCityB;
    QLineEdit *newCityL;
    QGroupBox *Delete;
    QPushButton *DeleteCityB;
    QLineEdit *CityToDel;
    QLabel *label;
    QLabel *GraphData;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *SaveB;
    QGroupBox *AddingSource;
    QPushButton *picksource;
    QLineEdit *newCityL_3;
    QGroupBox *AddDestination;
    QPushButton *adddestination;
    QLineEdit *newCityL_5;
    QLabel *ShortestPath;
    QLabel *ShortestPathLabel;
    QLabel *ShortestPathLabel_2;
    QMenuBar *menubar;
    QMenu *menuGPS_System;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GPS_System)
    {
        if (GPS_System->objectName().isEmpty())
            GPS_System->setObjectName("GPS_System");
        GPS_System->resize(800, 600);
        centralwidget = new QWidget(GPS_System);
        centralwidget->setObjectName("centralwidget");
        AddGraphB = new QPushButton(centralwidget);
        AddGraphB->setObjectName("AddGraphB");
        AddGraphB->setGeometry(QRect(210, 10, 91, 31));
        DisplayGraphB = new QPushButton(centralwidget);
        DisplayGraphB->setObjectName("DisplayGraphB");
        DisplayGraphB->setGeometry(QRect(530, 30, 111, 31));
        Add = new QGroupBox(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(20, 70, 231, 80));
        AdsCityB = new QPushButton(Add);
        AdsCityB->setObjectName("AdsCityB");
        AdsCityB->setGeometry(QRect(140, 40, 80, 24));
        newCityL = new QLineEdit(Add);
        newCityL->setObjectName("newCityL");
        newCityL->setGeometry(QRect(10, 40, 113, 24));
        Delete = new QGroupBox(centralwidget);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(20, 170, 231, 80));
        DeleteCityB = new QPushButton(Delete);
        DeleteCityB->setObjectName("DeleteCityB");
        DeleteCityB->setGeometry(QRect(140, 40, 80, 24));
        CityToDel = new QLineEdit(Delete);
        CityToDel->setObjectName("CityToDel");
        CityToDel->setGeometry(QRect(10, 40, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 171, 51));
        label->setWordWrap(true);
        GraphData = new QLabel(centralwidget);
        GraphData->setObjectName("GraphData");
        GraphData->setGeometry(QRect(270, 130, 241, 401));
        GraphData->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 20, 161, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 270, 101, 16));
        SaveB = new QPushButton(centralwidget);
        SaveB->setObjectName("SaveB");
        SaveB->setGeometry(QRect(160, 270, 80, 24));
        AddingSource = new QGroupBox(centralwidget);
        AddingSource->setObjectName("AddingSource");
        AddingSource->setGeometry(QRect(20, 320, 241, 80));
        picksource = new QPushButton(AddingSource);
        picksource->setObjectName("picksource");
        picksource->setGeometry(QRect(140, 40, 80, 24));
        newCityL_3 = new QLineEdit(AddingSource);
        newCityL_3->setObjectName("newCityL_3");
        newCityL_3->setGeometry(QRect(10, 40, 113, 24));
        AddDestination = new QGroupBox(centralwidget);
        AddDestination->setObjectName("AddDestination");
        AddDestination->setGeometry(QRect(20, 410, 231, 80));
        adddestination = new QPushButton(AddDestination);
        adddestination->setObjectName("adddestination");
        adddestination->setGeometry(QRect(140, 40, 80, 24));
        newCityL_5 = new QLineEdit(AddDestination);
        newCityL_5->setObjectName("newCityL_5");
        newCityL_5->setGeometry(QRect(10, 40, 113, 24));
        ShortestPath = new QLabel(centralwidget);
        ShortestPath->setObjectName("ShortestPath");
        ShortestPath->setGeometry(QRect(530, 130, 241, 401));
        ShortestPath->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        ShortestPathLabel = new QLabel(centralwidget);
        ShortestPathLabel->setObjectName("ShortestPathLabel");
        ShortestPathLabel->setGeometry(QRect(610, 90, 111, 20));
        ShortestPathLabel_2 = new QLabel(centralwidget);
        ShortestPathLabel_2->setObjectName("ShortestPathLabel_2");
        ShortestPathLabel_2->setGeometry(QRect(360, 90, 111, 20));
        GPS_System->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GPS_System);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuGPS_System = new QMenu(menubar);
        menuGPS_System->setObjectName("menuGPS_System");
        GPS_System->setMenuBar(menubar);
        statusbar = new QStatusBar(GPS_System);
        statusbar->setObjectName("statusbar");
        GPS_System->setStatusBar(statusbar);

        menubar->addAction(menuGPS_System->menuAction());

        retranslateUi(GPS_System);

        QMetaObject::connectSlotsByName(GPS_System);
    } // setupUi

    void retranslateUi(QMainWindow *GPS_System)
    {
        GPS_System->setWindowTitle(QCoreApplication::translate("GPS_System", "GPS_System", nullptr));
        AddGraphB->setText(QCoreApplication::translate("GPS_System", "Add Graph", nullptr));
        DisplayGraphB->setText(QCoreApplication::translate("GPS_System", "Display Graph", nullptr));
        Add->setTitle(QCoreApplication::translate("GPS_System", "Add a new city", nullptr));
        AdsCityB->setText(QCoreApplication::translate("GPS_System", "Add City", nullptr));
        Delete->setTitle(QCoreApplication::translate("GPS_System", "Delete a city", nullptr));
        DeleteCityB->setText(QCoreApplication::translate("GPS_System", "Delete City", nullptr));
        label->setText(QCoreApplication::translate("GPS_System", "Create a new graph : (Deletes the previous one)", nullptr));
        GraphData->setText(QString());
        label_3->setText(QCoreApplication::translate("GPS_System", "Display the graph data", nullptr));
        label_2->setText(QCoreApplication::translate("GPS_System", "Save graph data :", nullptr));
        SaveB->setText(QCoreApplication::translate("GPS_System", "Save Graph", nullptr));
        AddingSource->setTitle(QCoreApplication::translate("GPS_System", "Pick a source city", nullptr));
        picksource->setText(QCoreApplication::translate("GPS_System", "Pick City", nullptr));
        AddDestination->setTitle(QCoreApplication::translate("GPS_System", "Pick a destination", nullptr));
        adddestination->setText(QCoreApplication::translate("GPS_System", "Pick City", nullptr));
        ShortestPath->setText(QString());
        ShortestPathLabel->setText(QCoreApplication::translate("GPS_System", "Shortest Path", nullptr));
        ShortestPathLabel_2->setText(QCoreApplication::translate("GPS_System", "Graph Data", nullptr));
        menuGPS_System->setTitle(QCoreApplication::translate("GPS_System", "GPS System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPS_System: public Ui_GPS_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPS_SYSTEM_H
