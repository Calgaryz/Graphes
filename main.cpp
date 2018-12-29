#include <iostream>
#include "Graphe.h"

int main() {
    auto g = new Graphe();
    g->addVertice('a');
    g->addVertice('b');
    g->addVertice('c');
    g->addEdge('a','b');
    g->addEdge('a','c');
    g->toString();
    return 0;
}