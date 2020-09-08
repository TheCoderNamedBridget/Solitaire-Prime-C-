

#include<iostream>
using namespace std;

class Deck
{
    public:
        Deck();//constructor which creates a deck of 52 cards. ace of spades on top followed by S,H,D,C
        void refreshDeck();//reset deck so that it looks like a new deck
        Card deal();//deal a card from the top of the deck
        void shuffle();//shuffle the cards in the deck
        int cardsLeft();//return number of cards left in deck
        void showDeck();//show all cards in the deck:13 col 4 rows
        
        //added methods
        void discardHand();//sets currentPileValue to 0
        bool isPrime();//checks if currentPileValue is prime then adds +1 to prime piles
        void sumCardValue();//adds deck[0].getvalue to currentPileValue
        bool winLossCheck();//return true if pile if decksize ==0 && currentPileValue is rime

    private:
        Card deck[52];
        int deckSize;
        int primePiles;
        int currentPileValue;
};
