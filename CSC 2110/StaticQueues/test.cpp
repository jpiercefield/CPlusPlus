/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;
	
#include "Queue.h"

void print(Queue q)
{ q.display(cout); }

int main()
{
   Queue q1;
   cout << "Queue created.  Empty? " << boolalpha << q1.empty() << endl;

   cout << "How many elements to add to the queue? ";
   int numItems;
   cin >> numItems;
   for (int i = 1; i <= numItems; i++) 
      q1.enqueue(100*i);

   cout << "Contents of queue:\n";
   print(q1);
   cout << endl;

   cout << "Front value in queue: " << q1.front() << endl;

   while (!q1.empty())
   {
      cout << "Remove front -- Queue contents: ";
      q1.dequeue();
      q1.display(cout);
   }

   cout << "Queue empty? " << boolalpha << q1.empty() << endl;
   cout << "Front value in queue?" << endl << q1.front() << endl;
   cout << "Trying to remove front of queue: " << endl;
   q1.dequeue();

   cout << "... end of test driver" << endl;
} 
