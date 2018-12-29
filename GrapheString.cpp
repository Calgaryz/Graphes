//
// Created by calgary on 29/12/18.
//

//
// Created by calgary on 29/12/18.
//
#include <iostream>
#include "Graphe.h"
using namespace std;

typedef Graphe<string> GrapheString;

template<> GrapheString::Graphe(){
    map<string, list<string>> null;
    this->myList = null;
}

template<> void GrapheString::addVertice(string s) {
    auto c = new list<string>();
    this->myList.insert(pair<string,list<string>>(s,*c));
}

template<> void GrapheString::addEdge(string s1, string s2) {
    this->myList.at(s1).push_back(s2);
    this->myList.at(s2).push_back(s1);
    this->myList.at(s1).unique();
    this->myList.at(s2).unique();
}

template<> void GrapheString::delEdge(string s1, string s2) {
    this->myList.at(s1).remove(s2);
    this->myList.at(s2).remove(s1);
}

template<> void GrapheString::delVertice(string s) {
    myList.erase(s);
    for (auto &it : this->myList) {
        it.second.remove(s);
    }
}

template<> void GrapheString::toString() {

    for (auto &it : this->myList) {
        cout<< it.first << endl;
        for (auto &ir : it.second) {
            cout<< " : " << ir << endl;
        }
    }
}

ostream &operator<<(ostream &os, const GrapheString &g) {
    for (auto &it : g.myList) {
        for (auto &ir : it.second) {
            cout<< it.first << " --- " << ir << endl;
        }
    }
}

