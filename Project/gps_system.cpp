#include "gps_system.h"
#include "ui_gps_system.h"
#include "graph.h"
#include "SavedGraph.h"
#include "add_edge.h"
#include <QFile>

GPS_System::GPS_System(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GPS_System)
{
    ui->setupUi(this);
    // this->setStyleSheet("background-color: #F0EFEB;");
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
    //QString currentDir = QCoreApplication::applicationDirPath();
    //QString filePath = currentDir + "/Saved.txt";
    QFile file("C:\\Users\\Yara\\Desktop\\CSCE 1102\\Project\\CS-Lab-Project\\Project\\Save.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out<<graph.getCities().size()<<"\n";
        for (int i=0;i<graph.getCities().size();i++)
        {
            out<<graph.getCities()[i]<<"\n";
        }
        for (int i=0;i<graph.getMatrix().size();i++)
        {
            for (int j=0; j<graph.getMatrix().size();j++)
            {
                out<<graph.getMatrix()[i][j]<<"\n";
            }
        }
        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
        return;
    }
}


void GPS_System::on_computeB_clicked()
{
    // Now that both source and destination are specified, you can compute the shortest path here
    QString source =ui->Source->text();
    QString destination = ui->Destination->text();
    if (graph.hasCity(source) && graph.hasCity(destination))
    {
        vector<int> path = graph.dijkstra(source, destination);
        QString shortestPathStr;
        const QVector<QString>& cities = graph.getCities();
        for (int distance : path)
            shortestPathStr += cities[distance] + " "; // Assuming you want to separate distances by a space
        ui->ShortestPath->setText(shortestPathStr);
        // You can use the shortestPath vector as needed, for example, to update some UI elements or perform further operations
        int dist =0;
        for (int i = 1; i < path.size(); i++)
        {
            dist+= graph.getMatrix()[path[i-1]][path[i]];
        }
        ui->Distance->setText(QString::number(dist));
    }
}

