//
// Created by calgary on 29/12/18.
//
#include <iostream>
#include "Graphe.h"
using namespace std;
Graphe::Graphe(){
    map<char, list<char>> null;
    this->myList = null;
}

void Graphe::addVertice(char s) {
    auto c = new list<char>();
    this->myList.insert(pair<char,list<char>>(s,*c));
}

void Graphe::addEdge(char s1, char s2) {
    this->myList.at(s1).push_back(s2);
    this->myList.at(s2).push_back(s1);
    this->myList.at(s1).unique();
    this->myList.at(s2).unique();
}

void Graphe::delEdge(char s1, char s2) {
    this->myList.at(s1).remove(s2);
    this->myList.at(s2).remove(s1);
}

void Graphe::delVertice(char s) {
    myList.erase(s);
    for (auto &it : this->myList) {
        it.second.remove(s);
    }
}

void Graphe::toString() {

    for (auto &it : this->myList) {
        cout<< it.first << endl;
        for (auto &ir : it.second) {
            cout<< " : " << ir << endl;
        }
    }
}

