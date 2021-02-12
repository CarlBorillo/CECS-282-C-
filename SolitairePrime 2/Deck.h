// Carl Borillo
// CECS 282-01
// Prog 1- Solitaire Prime
// Due- February 8,2021
#ifndef DECK
#define DECK
#include "Card.h"
using namespace std;

class Deck
{
private:
	Card storage[52];
	char suits[4] = { 'S', 'H', 'D', 'C' };
	char faces[4] = { 'A', 'J', 'Q', 'K' };
	int top = 0;


public:
	Deck();
	void shuffle();
	Card deal();
	void refreshDeck();
	void display();
	int cardsLeft();
	bool isEmpty();
};

#endif