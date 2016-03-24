/*-- DStack.cpp----------------------------------------------------------
 
   This file implements Stack member functions.

-------------------------------------------------------------------------*/
 
#include <iostream>
#include <cassert>
#include <new>
using namespace std;

#include "DStack.h"

//--- Definition of Stack constructor
Stack::Stack(int numElements)
{
   assert (numElements > 0);  // check precondition
   myCapacity = numElements;  // set stack capacity
                     // allocate array of this capacity
   myArray = new(nothrow) StackElement[myCapacity];
   if (myArray != 0)          // memory available
      myTop = -1;
   else
   {
      cerr << "Inadequate memory to allocate stack \n"
              " -- terminating execution\n";
      exit(1);
   }               // or assert(myArray != 0);
}

//--- Definition of Stack copy constructor
Stack::Stack(const Stack & original)
: myCapacity(original.myCapacity), myTop(original.myTop)
{
   //--- Get new array for copy
   myArray = new(nothrow) StackElement[myCapacity];   
                                     // allocate array in copy

   if (myArray != 0)                 // check if memory available
      // copy original's array member into this new array
      for (int pos = 0; pos < myCapacity; pos++) 
         myArray[pos] = original.myArray[pos];
   else
   {
      cerr << "*Inadequate memory to allocate stack ***\n";
      exit(1);
   }
}

//--- Definition of Stack destructor
Stack::~Stack()
{ 
   delete [] myArray;
}

//--- Definition of assignment operator
Stack & Stack::operator=(const Stack & original)
{
  if (this != &original)                   // check that not st = st
   {
     //-- Allocate a new array if necessary
      if (myCapacity != original.myCapacity) 
      {
	delete[] myArray;                  // destroy previous array

	myCapacity = original.myCapacity;  // copy myCapacity
         myArray = new StackElement[myCapacity]; 
         if (myArray == 0)                  // check if memory available
         {
	   cerr << "*** Inadequate memory ***\n";
            exit(1);
         }
       }
      //--- Copy original's array into this myArray
      for (int pos = 0; pos < myCapacity; pos++) 
         myArray[pos] = original.myArray[pos];

      myTop = original.myTop;              // copy myTop member
   }
   return *this;
}

//--- Definition of empty()
bool Stack::empty() const
{ 
   return (myTop == -1); 
}

//--- Definition of push()
void Stack::push(const StackElement & value)
{
   if (myTop < myCapacity - 1) //Preserve stack invariant
   { 
      ++myTop;
      myArray[myTop] = value;
   }
   else
   {
      cerr << "*** Stack full -- can't add new value ***\n"
              "Must increase value of stack capacity in DStack.h\n";
      exit(1);
   }
}




//--- Definition of display()
void Stack::display(ostream & out) const
{
   for (int i = myTop; i >= 0; i--) 
      out << myArray[i] << endl;
}

//--- Definition of top()
StackElement Stack::top() const
{
   if ( !empty() ) 
      return (myArray[myTop]);
   else
   {
      cerr << "*** Stack is empty "
              " -- returning garbage value ***\n";
      return *(new StackElement);
   }
}

//--- Definition of pop()
void Stack::pop()
{

}
