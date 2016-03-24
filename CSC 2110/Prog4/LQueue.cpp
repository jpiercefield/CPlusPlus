
// James Piercefield
#include <new>
#include <vector>
#include <iomanip>
using namespace std;

#include "LQueue.h"

//--- Definition of Queue constructor
Queue::Queue()
: myFront(0), myBack(0)
{}

//--- Definition of Queue copy constructor
Queue::Queue(const Queue & original)
{
   if (!original.empty())
   {
      // Copy first node
      myFront = myBack = new Queue::Node(original.front());

      // Set pointer to run through original's linked list
      Queue::NodePointer origPtr = original.myFront->next;
      while (origPtr != 0)
      {
         myBack->next = new Queue::Node(origPtr->data);
         myBack = myBack->next;
         origPtr = origPtr->next;
      }
   }
}

//--- Definition of Queue destructor
Queue::~Queue()
{ 
  // Set pointer to run through the queue
  Queue::NodePointer prev = myFront,
                     ptr;
  while (prev != 0)
    {
      ptr = prev->next;
      delete prev;
      prev = ptr;
    }
}

//--- Definition of assignment operator
const Queue & Queue::operator=(const Queue & rightHandSide)
{
   if (this != &rightHandSide)         
   {
      this->~Queue();                  
      if (rightHandSide.empty())       
         myFront = myBack = 0;
      else
      {                                
         myFront = myBack = new Queue::Node(rightHandSide.front());

         Queue::NodePointer rhsPtr = rightHandSide.myFront->next;
         while (rhsPtr != 0)
         {
           myBack->next = new Queue::Node(rhsPtr->data);
           myBack = myBack->next;
           rhsPtr = rhsPtr->next;
         }
      }
   }
   return *this;
}

//--- Definition of empty()
bool Queue::empty() const
{ 
   return (myFront == 0); 
}

//--- Definition of enqueue()
void Queue::enqueue(const QueueElement & value)
{   
     Queue::NodePointer newptr = new Queue::Node(value);
     if(empty())
        myFront = myBack = newptr;
     else
     {
        myBack->next = newptr;
        myBack = newptr;
     }
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   Queue::NodePointer ptr;
   for (ptr = myFront; ptr != 0; ptr = ptr->next)
     out << ptr->data << "  ";
   out << endl;

}

//--- Definition of front()
QueueElement Queue::front() const
{
   if (!empty())
      return (myFront->data);
   else
   {
      cerr << "*** Queue is empty "
              " -- returning garbage ***\n";
      QueueElement * temp = new(QueueElement);  
      QueueElement garbage = *temp;     // "Garbage" value
      delete temp;
      return garbage;
   }
}

//--- Definition of dequeue()
void Queue::dequeue()
{
   if(myFront == 0)
   {
      	
   }
   else
   {
      Node *tmp;
      int value;
      value = myFront->data;
      tmp = myFront;
      myFront= myFront->next;
      delete tmp;
   }
   
} 

//Precondition: The four integer values must be entered from the main, then
//passed over to the function.
//Postcondition: Control is returned to the main where the end of the 
//program will commence. 
void Queue::simulation(int lengthOfSim, int avgTransaction, int numServers,
                     int avgTimeBetween)
{
   double totalWaitTime = 0.00;
   double numberOfCustomers = 0.00;
   vector<int> tellers(numServers, 0);
   Queue list;
   int k = 0;
   list.enqueue(k);
   numberOfCustomers++;
   int count = 0;
   
   for(int i = 0; i<lengthOfSim; i++)
   {
      if(i % avgTimeBetween == 0)
      {
         list.enqueue(k);
         count++;
         numberOfCustomers++;
      }
      for(int j=0;j<numServers;j++)
      {
         if(tellers[j] == 0 && !list.empty())
         {  
            tellers[j] = avgTransaction;
            list.dequeue();
            if(count != 0)
            {
               count--;
            }
         }
      }
      for(int m=0;m<numServers; m++)
      {
         if(tellers[m]!=0)
         {
            tellers[m]--;
         }
      }
      totalWaitTime += 1 * count;
      
   }
   double avgWaitTime = 0.00;
   avgWaitTime = totalWaitTime/numberOfCustomers;
   cout << "Your parameters are: " << "\nTotal length of sim: " << lengthOfSim << endl;
   cout << "Average Transaction Time: " << avgTransaction << endl;
   cout << "Number of servers/tellers: " << numServers << endl;
   cout << "Average time between arrival: " << avgTimeBetween << endl;
   cout << "There are " << count << " people left in the queue." << endl;
   cout << "The average wait time is: " << setprecision(2) << fixed << avgWaitTime;
   cout << endl << endl;
   
}
