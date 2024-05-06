#include "SavedGraph.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

WeightedGraph graph;

void SavedGraph::saveGraphToFile(const WeightedGraph& graph, const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing.";
        return;
    }

    QTextStream out(&file);


    const QVector<QString>& cities = graph.getCities();
    const QVector<QVector<int>>& matrix = graph.getMatrix();


    for (int i = 0; i < cities.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] != 0) {
                out << cities[i] << " " << cities[j] << " " << matrix[i][j] << "\n";
            }
        }
    }

    file.close();
    qDebug() << "Graph data saved to" << filename;
}
