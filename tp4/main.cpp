//
// Created by adrie on 03/03/2022.
//
#include "iostream"
#include "CBasePile.h"
#include "CPileFifo.h"
#include "CPileLifo.h"


int main(){
    CBasePile* ptPile ;
    CPileFifo fifo ; // pile First In First Out
    CPileLifo lifo ; // pile Last In First Out
    ptPile = &fifo; // ptPile pointe vers la pile FIFO
    *ptPile < 0 < 1; // on empile 0 puis 1
    std::cout << "pile=" << *ptPile ; // à l’écran : pile=0 1
    int i;
    *ptPile > i ; // dépile dans i
    std::cout << "pile=" << *ptPile << "i=" << i << std::endl; // à l’écran : pile=1 i=0
    ptPile = &lifo ; // ptPile pointe vers la pile LIFO
    *ptPile < 0 < 1 ; // on empile 0 puis 1

    std::cout << "pile=" << *ptPile ; // à l’écran : pile=0 1
    *ptPile > i ; // dépile dans i
    std::cout << "pile=" << *ptPile << "i=" << i ; // à l’écran : pile=0 i=1
//Fonctionement :
// LIFO ET FIFO je remplica de la meme facon:
// LIFO se vide en commencant pas le dernier element du vect
// FIFO se vide en commencant par le premier element  du vect
}