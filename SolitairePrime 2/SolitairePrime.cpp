// Carl Borillo
// CECS 282-01
// Prog 1- Solitaire Prime
// Due- February 8,2021
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;


int main() {
	// Create a deck
	Deck d1;
	int selection;
	int nextPile;
	int lastTotal;
	bool playing = true;

	while (playing) {
		cout << "♥♦♠♣ WELCOME TO SOLITAIRE PRIME ♥♦♠♣\n" << endl;
		cout << "1.) New Deck\n2.) Display Deck\n3.) Shuffle Deck\n4.) Play SOLITAIRE PRIME\n5.) Exit\n";

		// Create piles
		Pile piles[50];
		while (true) {
			cout << "What would you like to do?: ";
			cin >> selection;
				if ((selection > 0) && (selection < 6) && cin.good()) {
					break;
				}
				
		}
		// selection
		switch (selection) {
		case 1:
			d1 = Deck();
			break;
		case 2:
			d1.display();
			break;
		case 3:
			d1.shuffle();
			d1.display();
			break;
		case 4:
			cout << "♥♦♠♣♥♦♠♣ SOLITAIRE PRIME ♥♦♠♣♥♦♠♣" << endl;
			lastTotal = 0;
			nextPile = 0;
			while (!d1.isEmpty()) {
				while (!piles[nextPile].isPrime() && !d1.isEmpty()) {
						piles[nextPile].addCard(d1.deal());					
				}
				if (!d1.isEmpty()) {
					piles[nextPile].displayPile();
					cout << endl;
					nextPile++;
				}
			

			}
			piles[nextPile].displayLastPile();
			cout << (nextPile+1) << " piles" << endl;

			break;
		case 5:
      cout << "♥♦♠♣ THANK YOU FOR PLAYING ♥♦♠♣" << endl;
			return 0;
		}
	}

	cin.get();
	return(0);
}
