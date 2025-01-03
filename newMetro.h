#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "graph.h"
#include "dataStructures.h"
#include <tuple>

std::vector<std::vector<vertex>> criarRegioes(Graph &g);
std::tuple<std::vector<Edge*>, int,  std::unordered_map<vertex, std::tuple<std::vector<vertex>, std::vector<int>>>> escavacaoMetro(Graph& graph);

class Dijkstra {
public:
    static void cptDijkstraFast(vertex v0, vertex* parent, int* distance, Graph& graph);
};

class Kruskal {
public:
    static void mstKruskalFast(std::vector<Edge*>& mstEdges, Graph& graph);
};

#endif // DIJKSTRA_H