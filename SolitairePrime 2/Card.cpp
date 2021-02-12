// Carl Borillo
// CECS 282-01
// Prog 1- Solitaire Prime
// Due- February 8,2021
#include "Card.h"
#include <iomanip>

Card::Card() {};
Card::Card(char r, char s)
{
	rank = r;
	suit = s;
	faceUp = false;
}
char Card::getRank() {
	return rank;
}


char Card::getSuit() {
	return suit;
}

bool Card::isFaceUp() {
	return faceUp;
}

void Card::setCard(int n) {
	value = n;
}
int Card::getValue() {
	return value;
}

void Card::showCard() {
	if (getRank() == 'T') {
		cout << "10";
	}
	else {
		cout << setfill(' ') << setw(2) << getRank();
	}
	cout << getSuit();
}
Pile::Pile()
{
}


int Pile::getNumOfCards() {
	return numOfCards;
}
void Pile::addCard(Card c) {
	cards[numOfCards] = c;
	numOfCards++;
}
int Pile::getTotal() {
	sum = 0;
	for (int i = 0; i < this->getNumOfCards(); i++) {
		sum += cards[i].getValue();
	}
	return sum;
}
bool Pile::isPrime() {
	if (numOfCards > 0) {
		int s = this->getTotal();
		if (s != 1) {
			for (int i = 2; i < s - 1; i++) {
				if (s%i == 0) {
					return false;
				}
			}
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

void Pile::displayPile() {
	cout << "New Pile: ";
	for (int i = 0; i < numOfCards; i++) {
		cards[i].showCard();
		cout << ", ";
	}
	if (sum > 1) {
		cout << "Prime: " << sum << endl;
	}
	else {

	}
}

void Pile::displayLastPile() {
	cout << "Your Final Pile: ";
	for (int i = 0; i < numOfCards; i++) {
		cards[i].showCard();
		cout << ", ";
	}
	if (isPrime()) {
	    cout << "Prime: " << sum;
		cout << "\nWINNER: IN ";
	}
	else {
		cout << "\nLOSER: IN ";
	}
}