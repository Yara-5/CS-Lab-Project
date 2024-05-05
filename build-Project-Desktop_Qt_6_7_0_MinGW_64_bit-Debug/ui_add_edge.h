/********************************************************************************
** Form generated from reading UI file 'add_edge.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EDGE_H
#define UI_ADD_EDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Edge
{
public:
    QLineEdit *City2;
    QPushButton *AddEdge;
    QPushButton *OneMore;
    QLabel *label;
    QLabel *CityName;
    QLabel *label_2;
    QLineEdit *distance;
    QLabel *Confirmation;

    void setupUi(QWidget *Add_Edge)
    {
        if (Add_Edge->objectName().isEmpty())
            Add_Edge->setObjectName("Add_Edge");
        Add_Edge->resize(400, 300);
        City2 = new QLineEdit(Add_Edge);
        City2->setObjectName("City2");
        City2->setGeometry(QRect(110, 70, 113, 24));
        AddEdge = new QPushButton(Add_Edge);
        AddEdge->setObjectName("AddEdge");
        AddEdge->setGeometry(QRect(20, 160, 80, 24));
        OneMore = new QPushButton(Add_Edge);
        OneMore->setObjectName("OneMore");
        OneMore->setGeometry(QRect(20, 260, 121, 24));
        label = new QLabel(Add_Edge);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 91, 16));
        CityName = new QLabel(Add_Edge);
        CityName->setObjectName("CityName");
        CityName->setGeometry(QRect(10, 20, 49, 16));
        label_2 = new QLabel(Add_Edge);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 120, 71, 16));
        distance = new QLineEdit(Add_Edge);
        distance->setObjectName("distance");
        distance->setGeometry(QRect(110, 120, 113, 24));
        Confirmation = new QLabel(Add_Edge);
        Confirmation->setObjectName("Confirmation");
        Confirmation->setGeometry(QRect(20, 210, 111, 16));

        retranslateUi(Add_Edge);

        QMetaObject::connectSlotsByName(Add_Edge);
    } // setupUi

    void retranslateUi(QWidget *Add_Edge)
    {
        Add_Edge->setWindowTitle(QCoreApplication::translate("Add_Edge", "Form", nullptr));
        AddEdge->setText(QCoreApplication::translate("Add_Edge", "Add Edge", nullptr));
        OneMore->setText(QCoreApplication::translate("Add_Edge", "Add One More Edge", nullptr));
        label->setText(QCoreApplication::translate("Add_Edge", "Adjacent City :", nullptr));
        CityName->setText(QString());
        label_2->setText(QCoreApplication::translate("Add_Edge", "Distance :", nullptr));
        Confirmation->setText(QCoreApplication::translate("Add_Edge", "Edge not added yet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Edge: public Ui_Add_Edge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EDGE_H
