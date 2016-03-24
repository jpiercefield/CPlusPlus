// James Piercefield


/*-- List.cpp------------------------------------------------------------
 
   This file implements List member functions.

-------------------------------------------------------------------------*/

#include <cassert>
#include <new>
using namespace std;

#include "List.h"

//--- Definition of class constructor
List::List(int maxSize)
: mySize(0), myCapacity(maxSize)
{
   cout << "CONSTRUCTOR" << endl;
   myArrayPtr = new(nothrow) ElementType[maxSize];
   assert(myArrayPtr != 0);
}

//--- Definition of class destructor
List::~List()
{
   cout << "DESTRUCTOR" << endl;
   delete [] myArrayPtr;
}

//--- Definition of the copy constructor
List::List(const List & origList)
: mySize(origList.mySize), myCapacity(origList.myCapacity)
{
    cout << "COPY CONSTRUCTOR" << endl;
    myArrayPtr = new ElementType[origList.myCapacity];
    for(int i=0;i<origList.mySize;i++)
    {
        myArrayPtr[i] = origList.myArrayPtr[i];
    }
    
}

//--- Definition of the assignment operator
List & List::operator=(const List & origList)
{
    cout << "ASSIGNMENT OPERATOR" << endl;
    mySize = origList.mySize;
    myCapacity = origList.myCapacity;
    myArrayPtr = new ElementType[myCapacity];
    for(int i=0;i<mySize;i++)
    {
        myArrayPtr[i] = origList.myArrayPtr[i];
    }
    return *this;
}

//--- Definition of empty()
bool List::empty() const
{
   return mySize == 0;
}

//--- Definition of display()
void List::display(ostream & out) const
{
   for (int i = 0; i < mySize; i++)
     out << myArrayPtr[i] << "  ";
}

//--- Definition of output operator
ostream & operator<< (ostream & out, const List & aList)
{
   aList.display(out);
   return out;
}

//--- Definition of insert()
void List::insert(ElementType item, int pos)
{
   if (mySize == myCapacity)
   {
      cerr << "*** No space for list element -- terminating "
              "execution ***\n";
      exit(1);
   }
   if (pos < 0 || pos > mySize)
   {
      cerr << "*** Illegal location to insert -- " << pos 
           << ".  List unchanged. ***\n";
      return;
   }

   // First shift array elements right to make room for item

   for(int i = mySize; i > pos; i--)
      myArrayPtr[i] = myArrayPtr[i - 1];

   // Now insert item at position pos and increase list size  
   myArrayPtr[pos] = item;
   mySize++;
}

//--- Definition of erase()
void List::erase(int pos)
{
   if (mySize == 0)
   {
      cerr << "*** List is empty ***\n";
      return;
   }
  if (pos < 0 || pos >= mySize)
   {
      cerr << "Illegal location to delete -- " << pos
           << ".  List unchanged. ***\n";
      return;
   }

   // Shift array elements left to close the gap
   for(int i = pos; i < mySize; i++)
       myArrayPtr[i] = myArrayPtr[i + 1];

   // Decrease list size
    mySize--;
} 
