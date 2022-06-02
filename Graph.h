#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph {
    struct Edge {
        int to, from;
        Edge(int _to, int _from) {to = _to; from = _from;}
    };
public:
    int numVertices;
    vector<vector<int>> adjList;

    Graph(const vector<Edge>& edges, int vertices);
    void bfs(const Graph& graph, int src);
    void dfs(const Graph& graph, int src);
    void insertEdge(int from, int to);
    vector<int> getAdjacent(int vertex);
};