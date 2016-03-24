#include "deck.h"

//Constructor
Deck::Deck()
{
	head = NULL;
}

//Destructor
Deck::~Deck()
{
	/*if(head !=NULL)
		delete head;
	head = NULL;*/
}

//This adds a card to the deck
void Deck::add(Card* val)
{
	if(head == NULL)
	{
		head = val;
	}
	else
	{
		val->setNext(head);
		head = val;
	}
}

//This is the remove function for removing a card from the line after being
//replaced.
 void Deck::remove(Card* pos)
 {
 	Card* temp = head;
 	if(pos == head)
 	{
 	   head = head->getNext();
 	   delete temp;
 	}
 	else
 	{
 	   while(temp->getNext() != pos) temp = temp->getNext();
 	   temp->setNext(pos->getNext());
 	   delete pos;
 	}
 }

//This is the replace function used when the card is consolidated, therefore
// replaced.
void Deck::replace(Card* pos, Card* val)
{
	val->setRank(pos->getRank()); //3rd index might be messed up
	val->setSuit(pos->getSuit());
}

//Checks to see if the card is consolidatable or not returning a true/false false
bool Deck::consolidatable(Card *right, Card *left)
{
	if(*right==*left) return true;
	else return false;
}


//This performs the actual consolidation for the deck
bool Deck::consolidate()
{
	if(head == NULL)
	{
		return false;
	}
	if(head->getNext()== NULL)
	{
		return false;
	}
	Card* third;
	int cnt=1;
	for(Card* pos = head; pos->getNext() != NULL; pos = pos->getNext())
	{
      cnt = 1;
      third =  pos->getNext();
		while( third->getNext() != NULL )
		{
			third = third->getNext();
			cnt++;
			if(cnt == 3) break;
		}
		if(consolidatable(pos,pos->getNext()))
		{
			//replace and remove
			replace(pos, pos->getNext());
			remove(pos);
			return true;
		}
		if(cnt==3)
		{  //cout << pos->getSuit() << "---" << third->getSuit() << endl;
		   if(consolidatable(pos,third))
		   {
		      //cout << pos->getSuit() << "---" << third->getSuit() << endl;
			   //replace and remove
			   replace(pos, third); //i+3
			   remove(pos);
			   return true;
		   }
		}
	}
	return false;
}

//Here we have the display functions, when called will display
//the cards that are currently being played.
void Deck::display()
{
	Card* cur = head;
	while(cur!=NULL)
	{
		cout << *cur; //cout << *cur
		cur = cur->getNext();
	}
}