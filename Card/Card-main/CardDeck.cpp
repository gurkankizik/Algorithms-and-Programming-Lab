#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

CardDeck::CardDeck() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cards[13 * i + j].set(i, j);
		}
	}
	reset();
}

void CardDeck::reset() {
	this->currentCard = 52;
}

bool CardDeck::isEmpty() const {
	if (this->currentCard == 0) return true;
	else return false;
}

void CardDeck::dealNext() {
	if (isEmpty()) {
		cout << "Deck is empty" << endl;
	}
	cout << cards[--this->currentCard].toString() << endl;
}

void CardDeck::shuffle() {
	srand(time(0));
	int randomCard;

	Card temp;
	for (int i = 0; i < 52; i++) {
		randomCard = rand() % 52;
		temp = cards[i];
		cards[i] = cards[randomCard];
		cards[randomCard] = temp;
	}
}