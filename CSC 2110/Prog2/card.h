#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


//This is the class for card, in the private it contains the rank, suit, 
// and a pointer for the next card in the list. All necessary functions
// are included in the public.
class Card
{
	public:
		Card();
		Card(int val,char face);
		~Card();
		friend istream& operator>>(istream& in, Card& card);
		friend ostream& operator<<(ostream& out, Card& card);
		friend bool operator== (Card&, Card&);
		Card& operator=(const Card&);
		void setRank(int val);
		void setSuit(char val);
		void setNext(Card* val);
		int getRank();
		char getSuit();
		Card* getNext();
		
	private:
		int rank;
		string ranked;
		char suit;
		Card* next;
};