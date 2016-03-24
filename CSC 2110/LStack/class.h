
#include <iostream>
using namespace std;

#define CLASS_FUNC

typedef bool AreWeThere; //AreWeThere = StackElement

Card& Card::operator= (const Card& other)
{
	rank = other.rank;
	suit = other.suit;
	next = other.next;
	
	return *this;
}

class Stack
{
 public:
  Stack();

  Stack(const Stack & original);

  ~Stack(); 

  Stack & operator= (const Stack & original);

  bool empty() const;

  void push(const AreWeThere & value, string & CardinalDirection,
            int & direction);

  void display(ostream & out) const;

  AreWeThere top() const;


  void pop();
 
 private:
    /*** Node class ***/
   class Node
   {
    public:
      AreWeThere Tapestry; //data = Tapestry
      string CardinalDirection;
      int direction;
      Node * next;
      //--- Node constructor
      Node(AreWeThere value = 0, string CardinalDirection = " ", 
           int direction = 0, Node * link = 0)
      { Tapestry = value; next = link; }

  };

  typedef Node * NodePointer;

  NodePointer myTop;      

}; 


