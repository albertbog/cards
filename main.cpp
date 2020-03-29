
#include "include/Deck.h"

using namespace std;


int main()

{
    char ch;
    Deck deck(54);
    deck.printDeck();
    cin>>ch;
    deck.shuffle();
    deck.printDeck();

    return 0;
}

