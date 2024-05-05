#include "add_edge.h"
#include "ui_add_edge.h"
#include "SavedGraph.h"

Add_Edge::Add_Edge(QString city, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Edge)
{
    ui->setupUi(this);
    City =city;
    ui->CityName->setText("Adding an edge from city " +  city);
}

Add_Edge::~Add_Edge()
{
    delete ui;
}

void Add_Edge::on_AddEdge_clicked()
{
    QString city2=ui->City2->text();
    int dis =ui->distance->text().toInt();
    graph.addRoute(City, city2, dis);
    ui->Confirmation->setText("Edge is now saved!");
}


void Add_Edge::on_OneMore_clicked()
{
    ui->Confirmation->setText("Edge not added yet");
}

