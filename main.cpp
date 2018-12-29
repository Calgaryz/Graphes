#include <iostream>
#include "Graphe.h"

int main() {
    auto g = new Graphe<int>();
    g->addVertice(1);
    g->addVertice(2);
    g->addVertice(3);
    g->addEdge(1,2);
    g->addEdge(1,3);
    cout << *g << endl;
    return 0;
}