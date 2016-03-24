//-- try-catch example

#include <iostream>
#include <new>

using namespace std;

int main()

{

   const int NUM_ARRAYS = 1000000; // NOTE: On Windows, this value may be too large

   cout << "How large should the arrays of doubles be? ";

   int capacity;

   cin >> capacity;

   double * arrayPtr[NUM_ARRAYS];

   int i;

   try
   {
      for (i = 0; i < NUM_ARRAYS; i++)
      {
         arrayPtr[i] = new double [capacity];
		 cout << "Allocated " << capacity 
		      << " doubles for i = " << i << endl;
      }

   }

   catch (<??? what goes here???>)
   {
      <??? what goes in here ???>
   }

   cout << "All " << NUM_ARRAYS << " arrays of "
        << capacity << " doubles were allocated successfully." << endl;
}