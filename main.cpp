#include <iostream>
#include "Graphe.h"
#include "Tas.h"

int main() {
    auto g = new Graphe<int>();
    int a = 1;
    int b = 1;
    int c = 1;
    g->addVertice(a);
    g->addVertice(b);
    g->addVertice(c);
    g->addEdge(a,b);
    g->addEdge(a,c);
    cout << *g << endl;

    Tas

    return 0;
}