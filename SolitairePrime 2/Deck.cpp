// Carl Borillo
// CECS 282-01
// Prog 1- Solitaire Prime
// Due- February 8,2021
#include "Deck.h"
#include <iostream>
using namespace std;

Deck::Deck()
{	
	refreshDeck();
}

int Deck::cardsLeft() {
	return 51 - top;
}

void Deck::refreshDeck() {
	int lastCard = 0;
	for (int i = 0; i < 13; i++) {
		char rank;
		int value;
		if (i > 0 && i < 9) {
			rank = '0' + (i + 1);
			value = (i + 1);
		}
		else {
			if (i == 0) {
				rank = faces[i];
				value = 1;
			}
			else if (i == 9) {
				rank = 'T';
				value = 10;
			}
			else {
				rank = faces[i - 9];
				value = 10;
			}
		}
		for (int j = 0; j < 4; j++) {
			storage[lastCard] = Card(rank, suits[j]);
			storage[lastCard].setCard(value);
			lastCard++;
		}

	}
	cout << "Refreshing Deck..." << endl;
}

Card Deck::deal() {
	top++;
	return storage[top-1];
}

void Deck::display() {
	for (int i = 0; i < 4; i++) {
		for (int j = i; j < 52; j += 4) {
			Card c = storage[j];
			c.showCard();
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Deck::shuffle() {


	for (int i = 0; i < 127; i++) {
		int ran1 = rand() % 52;
		int ran2 = rand() % 52;

		Card temp = storage[ran1];
		storage[ran1] = storage[ran2];
		storage[ran2] = temp;
	}
}

bool Deck::isEmpty() {
	if (this->cardsLeft() < 1) {
		return true;
	}
	else {
		return false;
	}
}