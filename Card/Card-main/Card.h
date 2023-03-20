#ifndef CARD_H
#define CARD_H
using namespace std;

class Card {
private:
	int suitValue;
	int faceValue;
	const static string suit[4];
	const static string face[13];
public:
	void set(int suitValue, int faceValue) {
		this->suitValue = suitValue;
		this->faceValue = faceValue;
	}

	string toString() {
		return Card::face[this->faceValue] + " of " + Card::suit[this->suitValue];
	}
};

#endif