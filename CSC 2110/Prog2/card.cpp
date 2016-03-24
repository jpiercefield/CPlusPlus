#include "card.h"

//Constructor

Card::Card()
{
	rank = 0;
	suit = 0;
	next = NULL;
}

Card::Card(int val,char face)
{
	rank = val;
	suit = face;
	next = NULL;
}

//DESTRUCTOR
Card::~Card()
{
	
	Card* temp;
	while(temp != NULL)
	{
		Card* iterate = temp->next;
		delete temp;
		temp = iterate;
	}
	temp = NULL;
}

//Sets the rank of the current card
void Card::setRank(int val)
{
	rank =val;
}

//Sets the suit of the current card
void Card::setSuit(char val)
{
	suit = val;
}

//Sets the *next for a card
void Card::setNext(Card* val)
{
	next = val;
}

//Returns Rank of the card
int Card::getRank()
{
	return rank;
}

//Returns Suit of the Card
char Card::getSuit()
{
	return suit;
}

//Returns Next Card
Card* Card::getNext()
{
	return next;
}

//== Operator overload
bool operator==(Card &first, Card &other)
{
	if((first.getRank() == other.getRank())||(first.getSuit() == other.getSuit()))
		return true;
	return false;
}

//Assignment operator overload
Card& Card::operator= (const Card& other)
{
	rank = other.rank;
	suit = other.suit;
	next = other.next;
	
	return *this;
}

//This parses the suit checking if there are 2 or 3 values in the string
//if there are 2nd index 2 values it'll take the first index
char parse4Suit(string in)
{
	char letter = (in.size()==3) ? in[2]: in[1];
	return letter;
}


//Parsing the rank from the string, this returns 11-14 for J-A, 10 if size is 3
// or the number in the '0' index if default
int parse4Rank(string in)
{
	if(in.size()==3)
	{
		return 10;
	}
	else
	{
		switch(in[0])
		{
			case 'A':
				return 14;
			case 'K':
				return 13;
			case 'Q':
				return 12;
			case 'J':
				return 11;
			default:
				return atoi(&in[0]);
		}
	}
}

/*{
		switch(card.suit)
		{
			case 14:
				return 'A';
			case 13:
				return 'K';
			case 12:
				return 'Q';
			case 11:
				return 'J';
			default:
				break;
		}
}*/

//>> Overload
istream& operator>>(istream& in, Card& card)
{
	string temp;
	while(temp.empty())
		in >> temp;
	card.suit = parse4Suit(temp);
	card.rank = parse4Rank(temp);
	card.ranked = temp;
	
	return in;
}


//<< Overload
ostream& operator<<(ostream& out, Card &card)
{
	out << card.ranked;
	out << " ";
	return out;
}

