//
// Created by albert on 29.03.2020.
//

#ifndef CARDS_CARD_H
#define CARDS_CARD_H
#include <string>
using namespace std;

class Card {
public:
    Card(int  CardNumber, string CardSuit);
    Card();
    int GetNumber();
    string GetSuit();
string print();
private:
    int number;
    string suit;
};


#endif //CARDS_CARD_H
