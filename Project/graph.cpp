#include "graph.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <queue>

WeightedGraph::WeightedGraph() {}

WeightedGraph WeightedGraph::newGraph()
{
    WeightedGraph graph;
    return graph;
}

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

QString WeightedGraph::printGraph() {
    QString text = "";
    for (int i = 0; i < matrix.size(); ++i) // this loop prints the citys' names
    {
        text = text + "City " + cities[i] + " is connected to :\n";
        for (int j = 0; j < matrix[i].size(); ++j) // this loop prints the routes for each city
        {
            if (matrix[i][j])
                text = text + " city " + cities[j] + " with distance " + QString::number(matrix[i][j]) + "\n";
        }
    }
    return text;
}

void WeightedGraph::deleteCity(QString city)
{
    if (hasCity(city))
    {   int index = cities.indexOf(city);
        cities.erase(cities.begin() + index);
        for (int i =0;i<matrix.size();i++)
            matrix[i].erase(matrix[i].begin() + index);
        matrix.erase(matrix.begin() + index);
    }
}


vector<int> WeightedGraph::dijkstra(const QString& source, const QString& destination)
{
    int sourceIndex = cities.indexOf(source);
    int destinationIndex = cities.indexOf(destination);

    if (sourceIndex == -1 || destinationIndex == -1)
    {
        cerr << "Source or destination city not found in the graph." << endl;
        return {};
    }

    vector<int> dist(cities.size(), INT_MAX);
    vector<int> parent(cities.size(), -1);
    dist[sourceIndex] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, sourceIndex});

    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u])
            continue;

        for (int v = 0; v < cities.size(); ++v)
        {
            if (matrix[u][v] != 0 && d + matrix[u][v] < dist[v])
            {
                dist[v] = d + matrix[u][v];
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> path;
    int curr = destinationIndex;
    while (curr != -1)
    {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());
    return path;
}

bool WeightedGraph::hasCity(const QString& city) {
    // Check if the city exists in the cities vector
    return cities.contains(city);
}

void WeightedGraph::loadGraph()
{
    QFile file("C:\\Users\\Yara\\Desktop\\CSCE 1102\\Project\\CS-Lab-Project\\Project\\Save.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString line = in.readLine().trimmed();
        int size = line.toInt();

        for (int i=0;i<size;i++)
        {
            line = in.readLine().trimmed();
            cities.push_back(line);
        }
        QVector<int> temp;
        for (int i=0;i<size;i++)
        {
            matrix.push_back(temp);
            for (int j=0;j<size;j++)
            {
                line = in.readLine().trimmed();
                matrix[i].push_back(line.toInt());
            }
        }
        file.close();
    } else
    {
        return;
    }
}
