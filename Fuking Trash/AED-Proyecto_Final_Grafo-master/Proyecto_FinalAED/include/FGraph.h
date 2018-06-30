#ifndef FGRAPH_H
#define FGRAPH_H
#include "CGraph.h"
template <class N, class E>
class FGraph
{
    public:
        FGraph();
        void leer_txt(unsigned int);
        void mostrar(unsigned int);
        void menu(unsigned int);
        CGraph<N,E> grafo;

};

#endif // FGRAPH_H
