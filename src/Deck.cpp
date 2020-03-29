//
// Created by albert on 29.03.2020.
//

#include "../include/Deck.h"
#include "../include/Card.h"
using namespace std;

Deck::Deck()
{
    int numbers[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    string suits[]={"Heart","Diamonds","Clubs","Spades","Joker"};
    numOfCards=52;
    deckPointer = new Card[numOfCards];
    for (int i = 0; i < numOfCards; ++i) {
        deckPointer[i]=Card(numbers[i%13],suits[i/13]);
    }
}
Deck::Deck(int numOfCards)
{
    this->numOfCards=numOfCards;
    int numbers[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    string suits[]={"Heart","Diamonds","Clubs","Spades","Joker"};
    deckPointer = new Card[this->numOfCards];

    if(this->numOfCards==24)
    {
        for (int i = 0; i < this->numOfCards; ++i) {
            deckPointer[i] = Card(numbers[(i%6)+8], suits[(i / 6)]);
            if(numbers[(i%6)+8]==14)
            {
                deckPointer[i]=Card(numbers[0], suits[(i / 6)]);
            }

        }
    }
    else {
        for (int i = 0; i < this->numOfCards; ++i) {
            deckPointer[i] = Card(numbers[i % 13], suits[i / 13]);
        }
        if (this->numOfCards == 54) {
            deckPointer[52] = deckPointer[53] = Card(numbers[13], suits[4]);
        }
    }

}

void Deck::shuffle() {
    for (int first = 0; first < numOfCards ; first++) {

        int second = (rand()+ time(0)) % numOfCards;
        Card temp = deckPointer [first];
        deckPointer[first]=deckPointer[second];
        deckPointer[second]=temp;

    }
}

void Deck::printDeck() {

    for (int i = 0; i < numOfCards ; i++) {
        cout<<deckPointer[i].GetNumber()<<deckPointer[i].GetSuit()<<' ';
        if((i+1)%4==0)
            cout<<endl;
    }
}
Deck::~Deck() {
    delete [] deckPointer;
}