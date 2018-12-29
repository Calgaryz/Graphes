//
// Created by calgary on 29/12/18.
//
#include <iostream>
#include "Graphe.h"
using namespace std;

typedef Graphe<int> GrapheInt;

template<> GrapheInt::Graphe(){
    map<int, list<int>> null;
    this->myList = null;
}

template<> void GrapheInt::addVertice(int& s) {
    auto c = new list<int>();
    this->myList.insert(pair<int,list<int>>(s,*c));
}

template<> void GrapheInt::addEdge(int& s1, int& s2) {
    this->myList.at(s1).push_back(s2);
    this->myList.at(s2).push_back(s1);
    this->myList.at(s1).unique();
    this->myList.at(s2).unique();
}

template<> void GrapheInt::delEdge(int s1, int s2) {
    this->myList.at(s1).remove(s2);
    this->myList.at(s2).remove(s1);
}

template<> void GrapheInt::delVertice(int s) {
    myList.erase(s);
    for (auto &it : this->myList) {
        it.second.remove(s);
    }
}

template<> void GrapheInt::toString() {

    for (auto &it : this->myList) {
        cout<< it.first << endl;
        for (auto &ir : it.second) {
            cout<< " : " << ir << endl;
        }
    }
}

ostream &operator<<(ostream &os, const GrapheInt &g) {
    for (auto &it : g.myList) {
        for (auto &ir : it.second) {
            cout<< it.first << " --- " << ir << endl;
        }
    }
}

