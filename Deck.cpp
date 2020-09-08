
#include "Card.h"
#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck()
{
    deckSize = 52;
    int newSet = 1;
    for (int i = 0; i < sizeof(deck)/sizeof(deck[0]); i++)//iterate 52 times 
    {
        
        char newCardValue = 'n';
        
        if ( newSet == 1 )
        {
            newCardValue = 'A';
        }
        else if ( newSet == 10 )
        {
            newCardValue = 'T';
        }
        else if ( newSet == 11 )
        {
            newCardValue = 'J';
        }
        else if ( newSet == 12 )
        {
            newCardValue = 'Q';
        }
        else if ( newSet == 13 )
        {
            newCardValue = 'K';
        }
        else
        {
            
            newCardValue = '0' + newSet;
        }
        // //spades
        if ( i < 13 )//for #s 0-12 in deck
        {
            deck[i].setCard(newCardValue,'S');
        }
        // //hearts
        else if ( i > 12 && i < 26 )//for #s 13-25 in deck
        {
            deck[i].setCard(newCardValue,'H');
        }
        // //diamonds
        else if (  i > 25 && i < 39  )//for #s 26-38 in deck
        {
            deck[i].setCard(newCardValue,'D');
        }
        // //clubs
        else //for #s 39-51 in deck
        {
            deck[i].setCard(newCardValue,'C');
        }
        //cout<<"Newcardset:"<<newSet<<endl;
        //cout<<"Newcardvalue:"<<newCardValue<<endl;
        newSet +=1;
        if ( newSet == 14 )
        {
            newSet = 1;
        }
    }
}

void Deck::refreshDeck()
{
    Deck();
}

Card Deck::deal()
{
    deckSize -=1;
    return deck[0];
}

void Deck::shuffle()
{
    //select a random card and switch it with another random cards
    int cardPicked;
    for (int i = 0; i < deckSize; i++)
    {
        int firstCardIndex = rand() % 52;
        int secondCardIndex = rand() % 52;
        cout<<"first index: "<<firstCardIndex<<" second index: "<<secondCardIndex<<endl;
        while ( firstCardIndex == secondCardIndex )
        {
            secondCardIndex = rand() % 52;
        }
        Card first = deck[firstCardIndex];
        Card second = deck[secondCardIndex];
        deck[firstCardIndex] = second;
        deck[secondCardIndex] = first;
        
    }
}

int Deck::cardsLeft()
{
    return deckSize;
}

void Deck::showDeck()
{
    for (int i = 0; i < deckSize; i++)
    {
        deck[i].showCard();
        if ( i == 12 || i == 25 || i == 38 || i == 51 )//12, 25, 38, 51
        {
            cout<<endl;
        }
    }
}

//Added methods

void Deck::discardHand()
{
    currentPileValue = 0;
}

bool Deck::isPrime(int value)//TODO finish this method
{
    if ( currentPileValue%2 == 0 )
    {
        return false;
    }
    return true;
}

void Deck::sumCardValue()
{
    currentPileValue += deck[0];
}

bool Deck::winLossCheck()
{
    if ( isPrime(currentPileValue) )
    {
        return true;
    }
    return false;
}









