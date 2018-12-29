#include "Tas.h"

template <class T, int tailleMax>
Tas<T, tailleMax>::Tas(){
    taille = 0;
}

template <class T, int tailleMax>
T Tas<T, tailleMax>::Extraction(){

    return NULL;
}

template <class T, int tailleMax>
void Tas<T, tailleMax>::Ajouter(T elem){

    if(tab[0] == NULL) {
        tab[0] = elem;
        taille++;
    }
    else{
        if(taille < tailleMax){

            //Ajout au dernier emplacement libre
            int indexElem = taille;
            tab[indexElem] = elem;
            taille++;

            //Tant que c'est pas la racine et qu'il est plus petit que son pere
            while(indexElem != 0 && elem < tab[(indexElem-1)/2]){
                T temp = tab[(indexElem-1)/2];
                tab[(indexElem-1)/2] = elem;
                tab[indexElem] = temp;
            }
        }
    }
}

template <class T, int tailleMax>
bool Tas<T, tailleMax>::Rechercher(T elem){

    return false;
}

template <class T, int tailleMax>
string Tas<T, tailleMax>::toString(){
    string result = "";

    for(int i = 0; i < taille; i++){
        result += tab[i];
    }

    return result;
}