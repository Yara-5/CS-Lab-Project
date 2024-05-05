#include "graph.h"
#include <iostream>

WeightedGraph::WeightedGraph() {}

bool WeightedGraph::addCity(const QString& city) {
    if (!cities.contains(city)) // this line checks if the city already exisit in the map
    {
        cities.push_back(city); // adds a city to the cities vector
        int newSize = cities.size();
         // resizes each current row to accommodate one more city
        for (int i = 0; i < matrix.size(); ++i) {
            matrix[i].resize(newSize);
        }
         // adds a new row for the new city to the matrix
        matrix.push_back(QVector<int>(newSize, 0));  // initializing with 0 for the routes
        return true; // indicating the citiy has been added successfully
    }
    return false; // indicating that the city already exsists
}

bool WeightedGraph::addRoute(const QString& city1, const QString& city2, int distance) {
    int index1 = cities.indexOf(city1);
    int index2 = cities.indexOf(city2);

    if (index1 == -1 || index2 == -1 || index1 == index2) // this condition checks if the two cities exisit and they are not the same city
    {
      return false; // the addition operation was not succeful
    }

    // Add the route in both directions because it's an undirected graph
    matrix[index1][index2] = distance;
    matrix[index2][index1] = distance;
    return true;
}

void WeightedGraph::printGraph() {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < matrix.size(); ++i) // this loop prints the citys' names
    {
        cout << cities[i].toStdString() << ": ";
        for (int j = 0; j < matrix[i].size(); ++j) // this loop prints the routes for each city
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
