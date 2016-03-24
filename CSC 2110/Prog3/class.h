#include <iostream>
#include <cstdlib>
using namespace std;
//d = data  degree
//


class node
{ 
   public: 
      bool found;
      string CardinalDirection;
      int d;
      bool name;
      node *next;
      node(int data, bool name, bool found, string cardinal)
      { //Constructor 
         next=NULL;
         found = found;
         CardinalDirection = cardinal;
         d=data;
         name = name;
      }
};


class stack
{
   node *top; 
   public:
   stack()
   {
      top=NULL; 
   }
   void push(int, bool, bool, string); 
   int pop(); 
   void dis(); 
   int emp();
   bool traverse_maze();
};

