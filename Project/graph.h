#ifndef GRAPH_H
#define GRAPH_H

#include <QString>
#include <QVector>
#include <queue>
#include <vector>

using namespace std;

class WeightedGraph {
private:
    QVector<QVector<int>> matrix;  // Adjacency matrix

public:
    QVector<QString> cities;  // Vector of city names

    WeightedGraph();  // Constructor

    WeightedGraph newGraph();
    bool addCity(const QString& city); // function to add city
    bool addRoute(const QString& city1, const QString& city2, int distance); // function to add route
    QString printGraph(); // function to print the graph ( the map )
    void deleteCity(QString);
    void displayPath(const QString& source, const QString& destination);
    // Function to compute the shortest path
    vector<int> dijkstra(const QString& source, const QString& destination);

    // Function to check if a city exists in the graph
    bool hasCity(const QString& city);
};

#endif
