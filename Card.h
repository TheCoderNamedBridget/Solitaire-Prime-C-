

// #ifndef "Card.h"
// #define "Card.h"
#include <iostream>
using namespace std;

class Card
{
    public:
        Card();//create blank card
        Card(char r, char s);//constructor to create card set rank and suit
        void setCard(char r, char s);//set an existing blank card to a particular value
        int getValue();//returns point value of the card
        void showCard();//display the card using two fields AS 10H
    
    private:
        int cardValue;
        char suit;
};

// #endif
