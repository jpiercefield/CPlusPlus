/*--- SortLibrary.h ------------------------------------------------
  This is a collection  of various sorting function templates.
 
  Lab #10
                                                          
 James Piercefield
  Add your name here and other info requested by your instructor.

--------------------------------------------------------------------*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

template <typename ElementType>
inline void interchange(ElementType & a, ElementType & b)
/*------------------------------------------------------------
   Precondition:  ElementType is a type parameter.
   Postcondition: Values of a and b have been interchanged.
 -------------------------------------------------------------*/
{
   ElementType temp = a;
   a = b;
   b = temp;
}


//-- FIRST VERSION OF BUBBLE SORT -----------------------------
//   Precondition:  ElementType is a type parameter.
//   Postcondition: x has been sorted in ascending order.
//-------------------------------------------------------------
/*template <class ElementType>
void bubbleSort(vector<ElementType> & x)
{  int counter = 0;
   int numElements = x.size();
   for (int listEnd = numElements-1; listEnd > 0; listEnd--)
      for (int j = 0; j < listEnd; j++)
         if (x[j] > x[j+1])
            interchange(x[j], x[j+1]);
      
   cout << "\n" << counter << endl;
}*/



///*** SECOND VERSION OF BUBBLE SORT BEGINS HERE

//-- Second (improved) version -- ----------------------------
//   Precondition:  ElementType is a type parameter.
//   Postcondition: x has been sorted so its elements are in 
//       ascending order.
//------------------------------------------------------------

template <class ElementType>
void bubbleSort(vector<ElementType> & x)
{
   int numCompares = x.size() - 1;
   int counter = 0;
   //  The number of pairs to be compared on the current pass 

   while (numCompares != 0)
   {  
      int last = 0;  
      // The location of the last element involved in an interchange

      for (int i = 0; i < numCompares; i++)
         if (x[i] > x[i+1])
         {
            interchange(x[i], x[i+1]);
            last = i+1;
         }
      numCompares = last;
      counter++;
   }
   cout << "\n" << counter << endl;
   
}
//*** SECOND VERSION OF BUBBLE SORT ENDS HERE ***/



//===================(insertion sort)====================

// Write Code here
template <class ElementType>
void insertionSort(vector<ElementType> & x)
{ 
   ElementType nextElement;
   int n = x.size();
   for (int i = 1; n - 1; i++)
   {
      nextElement = x[i];
      int j=i;
      while(j>0 && nextElement < x[j-i])
      {
         x[j] = x[j-1];
         j--;
      }
      x[j] = nextElement;
   }
      
}

/*intVecOrig.push_back(10);  intVecOrig.push_back(7); 
   intVecOrig.push_back(2);   intVecOrig.push_back(5);
   intVecOrig.push_back(11);*/