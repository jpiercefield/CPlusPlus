
#include <iostream>
using namespace std;

#define CLASS_FUNC

typedef int StackElement;

class Stack
{
 public:
  Stack();

  Stack(const Stack & original);

  ~Stack(); 

  Stack & operator= (const Stack & original);

  bool empty() const;

  void push(const StackElement & value);

  void display(ostream & out) const;

  StackElement top() const;


  void pop();
 
 private:
    /*** Node class ***/
   class Node
   {
    public:
      StackElement data;
      Node * next;
      //--- Node constructor
      Node(StackElement value, Node * link = 0)
      { data = value; next = link; }

  };

  typedef Node * NodePointer;

  NodePointer myTop;      

}; 


