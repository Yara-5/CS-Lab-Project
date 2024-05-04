#include "gps_system.h"
#include "ui_gps_system.h"

GPS_System::GPS_System(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GPS_System)
{
    ui->setupUi(this);
}

GPS_System::~GPS_System()
{
    delete ui;
}

void GPS_System::on_AddGraphB_clicked()
{

}


void GPS_System::on_DisplayGraph_clicked()
{

}


void GPS_System::on_AdsCityB_clicked()
{

}


void GPS_System::on_DeleteCityB_clicked()
{

}

