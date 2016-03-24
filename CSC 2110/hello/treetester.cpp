/*----- treetester.cpp -----------------------------------------------------
                Program for testing class template BST.
 ------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
   // Testing Constructor and empty()
   BST<int> intBST;            // test the class constructor
   cout << "Constructing empty BST...\n" << endl;
   //cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing inorder
   //cout << "Inorder Traversal of BST: \n";
   //intBST.inorder(cout);

   cout << "Welcome to my BST program!" << endl;
  
   char option;
   int number;
   while (true)
   {
	  // Menu options
      cout << endl << "Choose one of the following options:" << endl;
      cout << "0 - Exit Program" << endl;
      cout << "1 - Insert Values" << endl;
      cout << "2 - Search for Value" << endl;
      cout << "3 - Delete Value" << endl << endl;
      cout << "Option: ";
      cin >> option;

      switch (option)
	  {
		  case '0':
			  return 0;
		  case '1':
             for (;;)
             {
                cout << "Item to insert (-999 to stop): ";
                cin >> number;
                if (number == -999) break;
                intBST.insert(number);
             }
			 cout << "Resulting BST:" << endl;
             intBST.graph(cout);
			 break;

   //cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";
   //cout << "Inorder Traversal of BST: \n";
   //intBST.inorder(cout);
   //cout << endl;

		 case '2':
            for (;;)
            {
               cout << "Item to find (-999 to stop): ";
               cin >> number;
               if (number == -999) break;
               cout << (intBST.search(number) ? "Found" : "Not found") << endl;
            }
			break;

		 case '3':
            for (;;)
            {
                cout << "Item to remove (-999 to stop): ";
                cin >> number;
                if (number == -999) break;
                intBST.remove(number);
                intBST.graph(cout);
            }
   //cout << "\nInorder Traversal of BST: \n";
   //intBST.inorder(cout);
   //cout << endl;
      }
   }
   return 0;
}
