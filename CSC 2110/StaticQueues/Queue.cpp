/*-- Queue.cpp-----------------------------------------------------------
 
   This file implements Queue member functions.

-------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "Queue.h"

//--- Definition of Queue constructor
Queue::Queue()
: myFront(0), myBack(0)
{}

//--- Definition of empty()
bool Queue::empty() const
{ 
   return (myFront == myBack); 
}

//--- Definition of enqueue()
void Queue::enqueue(const QueueElement & value)
{
   int tempBack = (myBack + 1) % QUEUE_CAPACITY;    //Rest of myback's might need tempback
   if(tempBack != myFront)
   {
      myArray[myBack] = value;
      myBack (myBack + 1) % QUEUE_CAPACITY;
   }
   else
      cerr << "Queue full!" << endl;
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   for (int i = myFront; i != myBack; i = (i + 1)%QUEUE_CAPACITY) 
      out << myArray[i] << "  ";
   cout << endl;
}

//--- Definition of front()
QueueElement Queue::front() const
{
   if ( !empty() ) 
      return (myArray[myFront]);
   else
   {
      cerr << "*** Queue is empty "
              " -- returning garbage value ***\n";
      return myArray[QUEUE_CAPACITY-1]; // "Garbage" value
   }
}

//--- Definition of dequeue()
void Queue::dequeue()
{
   if(!empty())
   {
      myFront = (myFront +1) % QUEUE_CAPACITY;
   }
   else
      cerr << "Queue is empty!" << endl;
} 
