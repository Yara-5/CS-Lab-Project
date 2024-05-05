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
    QGroupBox *ShortestDistance;
    QLabel *label_2;
    QPushButton *SaveB;
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
        AddGraphB->setGeometry(QRect(180, 10, 80, 24));
        DisplayGraphB = new QPushButton(centralwidget);
        DisplayGraphB->setObjectName("DisplayGraphB");
        DisplayGraphB->setGeometry(QRect(170, 400, 80, 24));
        Add = new QGroupBox(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(20, 60, 231, 80));
        AdsCityB = new QPushButton(Add);
        AdsCityB->setObjectName("AdsCityB");
        AdsCityB->setGeometry(QRect(140, 40, 80, 24));
        newCityL = new QLineEdit(Add);
        newCityL->setObjectName("newCityL");
        newCityL->setGeometry(QRect(10, 40, 113, 24));
        Delete = new QGroupBox(centralwidget);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(20, 160, 231, 80));
        DeleteCityB = new QPushButton(Delete);
        DeleteCityB->setObjectName("DeleteCityB");
        DeleteCityB->setGeometry(QRect(140, 40, 80, 24));
        CityToDel = new QLineEdit(Delete);
        CityToDel->setObjectName("CityToDel");
        CityToDel->setGeometry(QRect(10, 40, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 141, 31));
        label->setWordWrap(true);
        GraphData = new QLabel(centralwidget);
        GraphData->setObjectName("GraphData");
        GraphData->setGeometry(QRect(20, 430, 231, 221));
        GraphData->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 400, 141, 16));
        ShortestDistance = new QGroupBox(centralwidget);
        ShortestDistance->setObjectName("ShortestDistance");
        ShortestDistance->setGeometry(QRect(20, 300, 231, 80));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 260, 101, 16));
        SaveB = new QPushButton(centralwidget);
        SaveB->setObjectName("SaveB");
        SaveB->setGeometry(QRect(160, 260, 80, 24));
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
        label->setText(QCoreApplication::translate("GPS_System", "Create a new graph :(Deletes the previous one)", nullptr));
        GraphData->setText(QCoreApplication::translate("GPS_System", "Graph data here", nullptr));
        label_3->setText(QCoreApplication::translate("GPS_System", "Display the graph data :", nullptr));
        ShortestDistance->setTitle(QCoreApplication::translate("GPS_System", "Shortest Distance", nullptr));
        label_2->setText(QCoreApplication::translate("GPS_System", "Save graph data :", nullptr));
        SaveB->setText(QCoreApplication::translate("GPS_System", "Save Graph", nullptr));
        menuGPS_System->setTitle(QCoreApplication::translate("GPS_System", "GPS System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPS_System: public Ui_GPS_System {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPS_SYSTEM_H
