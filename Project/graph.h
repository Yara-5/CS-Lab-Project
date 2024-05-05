#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <QString>
#include <QVector>

using namespace std;

class WeightedGraph {
private:
    QVector<QString> cities;  // Vector of city names
    QVector<QVector<int>> matrix;  // Adjacency matrix

public:
    WeightedGraph();  // Constructor

    bool addCity(const QString& city); // function to add city
    bool addRoute(const QString& city1, const QString& city2, int distance); // function to add route
    void printGraph(); // function to print the graph ( the map )
};

#endif
