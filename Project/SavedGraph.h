#ifndef SAVEDGRAPH_H
#define SAVEDGRAPH_H

#include "graph.h"
#include <QString>

extern WeightedGraph graph;

class SavedGraph {
public:
    static void saveGraphToFile(const WeightedGraph& graph, const QString& filename);
};

#endif // SAVEDGRAPH_H


