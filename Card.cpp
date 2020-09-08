

#include <iostream>
#include "Card.h"
using namespace std;
//r = value, s = suit
Card::Card() 
{
    cardValue;
    suit;
}

Card::Card(char r, char s)
{
    cardValue = r;
    suit = s;
}

void Card::setCard(char r, char s)
{
    cardValue = r;
    suit = s;
}

int Card::getValue()
{
    if ( cardValue == 'J' || cardValue == 'Q' || cardValue == 'K')//for kings, queens and jacks
    {
        return 10;
    }
    else if ( cardValue == 'A' )//for aces
    {
        return 1;
    }
    else//for numbered cards 2-10
    {
        return cardValue - 48;//48 is the ascii value of 0
    }

    
}

void Card::showCard()
{
    if ( cardValue == 'A' )
    {
        cout <<"A"<<suit<<" ";
    }
    else if ( cardValue == 'T' )
    {
        cout <<10<<suit<<" ";
    }
    else if ( cardValue == 'J' )
    {
        cout <<"J"<<suit<<" ";
    }
    else if ( cardValue == 'Q' )
    {
        cout <<"Q"<<suit<<" ";
    }
    else if ( cardValue == 'K' )
    {
        cout <<"K"<<suit<<" ";
    }
    else 
    {
        cout <<getValue()<<suit<<" ";
    }
    
}



