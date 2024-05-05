#include "gps_system.h"
#include "ui_gps_system.h"
#include "graph.h"
#include "SavedGraph.h"
#include "add_edge.h"

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
    graph=graph.newGraph();
}


void GPS_System::on_DisplayGraphB_clicked()
{
    ui->GraphData->setText(graph.printGraph());
}


void GPS_System::on_AdsCityB_clicked()
{
    QString city=ui->newCityL->text();
    graph.addCity(city);
    Add_Edge* window =new Add_Edge(city);
    window->show();
}


void GPS_System::on_DeleteCityB_clicked()
{
    QString city=ui->CityToDel->text();
    graph.deleteCity(city);
}


void GPS_System::on_SaveB_clicked()
{
    // WRITE data into the file
    // Save the currnt graph into the file
    // It's better to empty the file and fil it from the bigining
}

