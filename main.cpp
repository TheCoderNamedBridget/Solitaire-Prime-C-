

//Name: Bridget Naylor
//Class: CECS 282 Sec 04
//Project Name: Proj 1 - Solitaire Prime
//Due Date: 9/3/2020
//
//I certify that this program is my own original work. I did not copy any part 
//this program from any other source. I further certify that I typed each
//and every line of code in this program

#include "Card.h"
#include "Deck.h"
#include <stdio.h>
#include <iostream>
using namespace std;

//Add these functions:
//4. Win/losss method/check

int main( int argc, char** argv)
{
    bool quit = false;
    int userInput;
   
    //while quit == false 
    while ( quit == false)
    {
        //main function menu
        cout<<"Welcome to Solitaire Prime!"<<endl;
        cout<<"1) New Deck"<<endl;
        cout<<"2) Display Deck"<<endl;
        cout<<"3) Shuffle Deck"<<endl;
        cout<<"4) Play Solitaire Prime"<<endl;
        cout<<"5) Exit"<<endl;
        
        cin>>userInput;
        Deck newDeck;
        //newDeck.shuffle();
        if ( userInput == 1 )
        {
            newDeck = Deck();
        }
        else if ( userInput == 2 )
        {
            newDeck.showDeck();
        }
        else if ( userInput == 3 )
        {
            //shuffle
        }
        else if ( userInput == 4 )
        {
            //play
        }
        else
        {
            quit = true;
        }
        
        
    }
    

    return 0;
}
