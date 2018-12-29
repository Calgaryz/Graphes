//
// Created by calgary on 29/12/18.
//

//
// Created by calgary on 29/12/18.
//
#include <iostream>
#include "Graphe.h"
using namespace std;

typedef Graphe<char> GrapheChar;

template<> GrapheChar::Graphe(){
    map<char, list<char>> null;
    this->myList = null;
}

template<> void GrapheChar::addVertice(char& s) {
    auto c = new list<char>();
    this->myList.insert(pair<char,list<char>>(s,*c));
}

template<> void GrapheChar::addEdge(char& s1, char& s2) {
    this->myList.at(s1).push_back(s2);
    this->myList.at(s2).push_back(s1);
    this->myList.at(s1).unique();
    this->myList.at(s2).unique();
}

template<> void GrapheChar::delEdge(char s1, char s2) {
    this->myList.at(s1).remove(s2);
    this->myList.at(s2).remove(s1);
}

template<> void GrapheChar::delVertice(char s) {
    myList.erase(s);
    for (auto &it : this->myList) {
        it.second.remove(s);
    }
}

template<> void GrapheChar::toString() {

    for (auto &it : this->myList) {
        cout<< it.first << endl;
        for (auto &ir : it.second) {
            cout<< " : " << ir << endl;
        }
    }
}

ostream &operator<<(ostream &os, const GrapheChar &g) {
    for (auto &it : g.myList) {
        for (auto &ir : it.second) {
            cout<< it.first << " --- " << ir << endl;
        }
    }
}



