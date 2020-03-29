//
// Created by albert on 29.03.2020.
//

#include "../include/Card.h"

Card::Card()
{}
Card::Card(int cardNumber,string cardSuit)
{
    number=cardNumber;
    suit=cardSuit;
}
int  Card::GetNumber()
{
    return number;
}
string Card::GetSuit()
{
    return suit;
}
