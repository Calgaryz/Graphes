//
// Created by calgary on 29/12/18.
//

#ifndef GRAPHES_GRAPHE_H
#define GRAPHES_GRAPHE_H

#include <vector>
#include <list>
#include <map>

using namespace std;

class Graphe{

private:
    map<char,list<char>> myList;
public:
    Graphe();
    void addVertice(char s);
    void delVertice(char s);
    void addEdge(char s1, char s2);
    void delEdge(char s1, char s2);
    void toString();
};


#endif //GRAPHES_GRAPHE_H
