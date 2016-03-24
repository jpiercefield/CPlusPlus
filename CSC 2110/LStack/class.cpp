
 
#include <new>
using namespace std;

#include "class.h"

Stack::Stack()
: myTop(0)
{}

Stack::Stack(const Stack & original)
{
   myTop = 0;
   if (!original.empty())
   {
      myTop = new Stack::Node(original.top());

      Stack::NodePointer lastPtr = myTop,
                         origPtr = original.myTop->next;

      while (origPtr != 0)
      {
         lastPtr->next = new Stack::Node(origPtr->Tapestry, origPtr->CardinalDirection,
         origPtr->direction);
         lastPtr = lastPtr->next;
         origPtr = origPtr->next;
      }
   }
}

Stack::~Stack()
{     
   Stack::NodePointer currPtr = myTop,  
                      nextPtr;          
   while (currPtr != 0)
   {
      nextPtr = currPtr->next;
      delete currPtr;
      currPtr = nextPtr;
   }
}

Stack & Stack::operator=(const Stack & original)
{
   myTop = 0;
   if (original.empty()) return *this;

   if (this != &original)     
   {
      this->~Stack();         
 
      myTop = new Stack::Node(original.top());

      Stack::NodePointer lastPtr = myTop,
                         origPtr = original.myTop->next;

      while (origPtr != 0)
        {
          lastPtr->next = new Stack::Node(origPtr->Tapestry, origPtr->CardinalDirection,
                                          origPtr->direction);
          lastPtr = lastPtr->next;
          origPtr = origPtr->next;
        } 
   }
   return *this;
}

bool Stack::empty() const
{ 
   return (myTop == 0); 
}

void Stack::push(const AreWeThere & value, const string & CardinalDirection,
                 const int & direction)
{
   Stack::NodePointer ptr = new Node(value);
   ptr->next = myTop;
   myTop = ptr;
}

void Stack::display(ostream & out) const
{
   Stack::NodePointer ptr;
   for (ptr = myTop; ptr != 0; ptr = ptr->next)
      out << ptr->Tapestry << endl;
}

AreWeThere Stack::top() const
{
   if (!empty())
      return (myTop->Tapestry, myTop->CardinalDirection,
               myTop->direction);
   else
   {
      cerr << "*** Stack is empty "
              " -- returning garbage ***\n";
      return *(new AreWeThere, new string, new int);  
   }
}

void Stack::pop()
{
   if (!empty())
   {
      Stack::NodePointer ptr = myTop;
      myTop = myTop->next;
      delete ptr;
   }   
   else
      cerr << "*** Stack is empty -- can't remove a value ***\n";
} 
