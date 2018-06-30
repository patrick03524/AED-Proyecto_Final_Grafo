#ifndef CGRAPH_H
#define CGRAPH_H
#include "CEdge.h"

template<class N, class E>
class CGraph
{
    public:
        typedef CGraph<N,E> Self;
        typedef CNode<Self> Node;
        typedef CEdge<Self> Edge;
        typedef N n;
        typedef E e;

        CGraph(){

        }
        bool find(N, int&);
        bool insertNode(N);
        bool insertEgde(Node *&, Node *&, E, bool);
        bool removeEdge(Node *, Node *, E);
        bool removeNode(Node *);
        void printCGraph();

        vector<Node *> g_nodes;
        bool dijkstra(Node* inicio, Node* final, vector<Node*> &ruta);
};

#endif // CGRAPH_H
