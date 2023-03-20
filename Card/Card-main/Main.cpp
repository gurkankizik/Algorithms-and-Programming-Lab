#include <iostream>
#include "Card.h"
#include "CardDeck.h"
using namespace std;


int main() {
	CardDeck deck;

	for (int i = 0; i < 5; i++) {
		deck.dealNext();
	}
	deck.reset();
	cout << endl;

	deck.shuffle();
	for (int i = 0; i < 5; i++) {
		deck.dealNext();
	}

	return 0;
}