#include"card.h"

//Here we have the class for Deck in the private we have the head for 
// card that's going to set a starting point for the list.
//This also contains the public functions that are going to add, replace
//remove, display, and consolidate the cards.


class Deck
{

public:
	Deck();
	~Deck();
	void add(Card* val);
	void remove(Card*);
	void replace(Card* val,Card* pos);
	bool consolidate();
	void display();
	
private:
	Card* head;
	
	//helper function
	bool consolidatable(Card*, Card*);
};