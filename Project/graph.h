#ifndef GRAPH_H
#define GRAPH_H

#include <QString>
#include <QVector>

using namespace std;

class WeightedGraph {
private:
    QVector<QString> cities;  // Vector of city names
    QVector<QVector<int>> matrix;  // Adjacency matrix

public:
    WeightedGraph();  // Constructor

    WeightedGraph newGraph();
    bool addCity(const QString& city); // function to add city
    bool addRoute(const QString& city1, const QString& city2, int distance); // function to add route
    QString printGraph(); // function to print the graph ( the map )
    void deleteCity(QString);
};

#endif
