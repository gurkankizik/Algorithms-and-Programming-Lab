#ifndef CARDDECK_H
#define CARDDECK_H
using namespace std;

class CardDeck {
private:
	Card cards[52];
	int currentCard;
public:
	CardDeck();
	void dealNext();
	void reset();
	void shuffle();
	bool isEmpty() const;
};

#endif
