/*
						Avery Jacobson	
						  James Polzin	
						     csci 1111


Assignment 6:                Given: 02/25/14     Due: 03/06/14
------------                                  Points: 10
Purpose: Simulate the dealing of a card using rand().

Description:

  Write the following functions related to simulating the dealing 
  of a card from a deck of playing cards:
    - int random(int n); - This function will return a single 
      integer value between 0 and n-1. In this program you will 
      pass 52 to the function so that it returns one of 52 
      different values (0-51) representing one of the 52 cards 
      in a deck of playing cards.
      
    - void displayCard(int); - This function will be passed an 
      integer value between 0 and 51 and will display the face 
      value and suit of one of the 52 cards in a deck of playing 
      cards.
  
  
  Exercise the functions with code that does the following:
      1) Prints all 52 cards in the deck by explicitly 
         calling displayCard( ) with the values 0-51.
      
      2) Print a hand of 5 cards by calling the random(52) 
         function 5 times and passing the result to displayCard( )
         to show each of the five cards dealt.
        
  Ex:
    Deck:
    ----
          Card = 0 King Hearts
          Card = 1 Ace Hearts
          Card = 2 2 Hearts
          Card = 3 3 Hearts
          Card = 4 4 Hearts
          Card = 5 5 Hearts
          Card = 6 6 Hearts
          Card = 7 7 Hearts
          Card = 8 8 Hearts
          Card = 9 9 Hearts
          Card = 10 10 Hearts
          Card = 11 Jack Hearts
          Card = 12 Queen Hearts
          Card = 13 King Diamonds
          Card = 14 Ace Diamonds
          Card = 15 2 Diamonds
          
                   ...
                   
          Card = 44 5 Spades
          Card = 45 6 Spades
          Card = 46 7 Spades
          Card = 47 8 Spades
          Card = 48 9 Spades
          Card = 49 10 Spades
          Card = 50 Jack Spades
          Card = 51 Queen Spades
    Hand:
    ----
          Card = 41 2 Spades
          Card =  7 7 Hearts
          Card = 42 3 Spades
          Card = 32 6 Clubs
          Card = 33 7 Clubs
    
    

  Notes:
  -----
  - Seeding the random number generator is optional. However,
    do not seed it within your random( ) function. Seeding 
    should only occur one time during the run of a program.
    Seeding it within random( ) will cause it to re-seed 
    every time you generate a number.
  - No inputs are necessary.
  - Gradually develop your program in steps
  
  
  - There is a "Supplement" posted on Otto that discusses
    the rand( ) function and there are "Random_.c examples
    in the examples directory. There are also examples in the
    "Supplement" that show how to simulate a deck of cards.


*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int random(int n);
void displayCard(int);


int main()
{
	int i, value;

	for(i = 0; i<52; i++)
		displayCard(i);


 
    printf("\nFive card hand\n");
    for(i = 0; i <5; i++)
    {
       	value = random(52);
    	displayCard(value);
    }


    printf("\n");
    system("pause");

	return 0;

}


int random(int n)
{
	int value;

	value = rand( )%n; 

	return value;
}



void displayCard(int value)
{
	char suits [4][9] = { "Hearts",
                      "Diamonds",
                      "Clubs",
                      "Spades" };


 	printf("Card = %2d %s\n", value%13, suits[value/13]);
}



