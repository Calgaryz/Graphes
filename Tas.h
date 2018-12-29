#ifndef DIJKSTRA_TAS_H
#define DIJKSTRA_TAS_H

#include <string>
#include <iostream>

using namespace std;

template <class T, int tailleMax>

class Tas{
    public:
        Tas();
        T Extraction();
        void Ajouter(T elem);
        bool Rechercher(T elem);
        string toString();


    private:
        T tab[tailleMax];
        int taille;
};

#endif //DIJKSTRA_TAS_H
