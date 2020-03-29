//
// Created by albert on 29.03.2020.
//

#ifndef CARDS_DECK_H
#define CARDS_DECK_H
#include<iostream>
#include <ctime>
#include "Card.h"

using namespace std;

class Deck {
public:
    Deck();
    Deck(int);
    void shuffle();
    void printDeck();
    ~Deck();

private:
    Card *deckPointer;
    int numOfCards;

};


#endif //CARDS_DECK_H
