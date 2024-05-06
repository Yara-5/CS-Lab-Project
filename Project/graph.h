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
    QVector<QString> cities;  // Vector of city names

public:
    WeightedGraph();  // Constructor

    WeightedGraph newGraph();
    bool addCity(const QString& city); // function to add city
    bool addRoute(const QString& city1, const QString& city2, int distance); // function to add route
    QString printGraph(); // function to print the graph ( the map )
    void deleteCity(QString city);
    void displayPath(const QString& source, const QString& destination);
    vector<int> dijkstra(const QString& source, const QString& destination);
    bool hasCity(const QString& city);

    // Accessor methods
    const QVector<QString>& getCities() const { return cities; } // Getter for city names
    const QVector<QVector<int>>& getMatrix() const { return matrix; } // Getter for adjacency matrix
};

#endif // GRAPH_H
