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
    this->setStyleSheet("background-color: #F0EFEB;");
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


void GPS_System::on_picksource_clicked()
{
    QString source = ui->newCityL_3->text(); // Assuming you have a QLineEdit widget named sourceLineEdit for user input
    if (graph.hasCity(source)) { // Assuming WeightedGraph has a function named hasCity to check if the city exists
        ui->newCityL_3->setReadOnly(true); // Make the source line edit read-only
        ui->picksource->setEnabled(false); // Disable the button to prevent changing the source city
    } else {
        qDebug() << "Invalid source city.";
    }
}

void GPS_System::on_adddestination_clicked()
{
    QString destination = ui->newCityL_5->text(); // Assuming you have a QLineEdit widget named newCityL_5 for user input
    if (graph.hasCity(destination)) { // Assuming WeightedGraph has a function named hasCity to check if the city exists
        ui->newCityL_5->setReadOnly(true); // Make the destination line edit read-only
        ui->adddestination->setEnabled(false); // Disable the button to prevent changing the destination city

        // Now that both source and destination are specified, you can compute the shortest path here
        QString source = ui->newCityL_3->text(); // Assuming you have a QLineEdit widget named newCityL_3 for user input
        vector<int> shortestPath = graph.dijkstra(source, destination);
        QString shortestPathStr;
        for (int distance : shortestPath) {
            shortestPathStr += graph.cities[distance] + " "; // Assuming you want to separate distances by a space
        ui->ShortestPath->setText(shortestPathStr);
        }

        // You can use the shortestPath vector as needed, for example, to update some UI elements or perform further operations
    } else {
        qDebug() << "Invalid destination city.";
    }
}


void GPS_System::on_Shortestdistance_linkActivated(const QString &link)
{

}

