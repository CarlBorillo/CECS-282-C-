// Carl Borillo
// CECS 282-01
// Prog 1- Solitaire Prime
// Due- February 8,2021
#ifndef CARD_H
#define CARD_H
#ifndef PILE_H 
#define PILE
#include <iostream>
using namespace std;
class Card
{
private:
	char rank;
	char suit;
	int value;
	bool faceUp;

public:
	Card();
	Card(char r, char s);
	char getRank();
	char getSuit();
	bool isFaceUp();
	void setCard(int n);
	int getValue();
	void showCard();


};
#endif
class Pile
{
private:
	int sum;
	int numOfCards = 0;
	Card cards[52];

public:
	Pile();
	int getTotal();
	int getNumOfCards();
	bool isPrime();
	void addCard(Card);
	void displayPile();
	void displayLastPile();
};

#endif