//
// Created by calgary on 29/12/18.
//

#ifndef GRAPHES_GRAPHE_H
#define GRAPHES_GRAPHE_H

#include <vector>
#include <list>
#include <map>

using namespace std;

template<typename T> class Graphe{

private:
    map<T,list<T>> myList;
public:
    Graphe();
    void addVertice(T& s);
    void delVertice(T s);
    void addEdge(T& s1, T& s2);
    void delEdge(T s1, T s2);
    void toString();
    friend ostream& operator<< (ostream& os, const Graphe& g);
};


#endif //GRAPHES_GRAPHE_H
