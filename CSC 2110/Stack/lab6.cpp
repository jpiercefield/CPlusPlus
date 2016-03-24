#include <iostream>
#include <sstream>

using namespace std;

#include "Stack.h"

int main() 
{
   string line;
   getline(cin, line);

   // Create a string stream that will read from "line"
   stringstream ss(line,stringstream::in);
  
   // While there are more tokens...
   Stack myStack; 
   int final;
   
   while (!ss.eof()) 
   {
      string token;
      ss >> token;
  
      //display token for testing
      cout << token << endl;
      
      int num1 = atoi(token.c_str());
      int prev;
      int prevprev;
      
      if(token == "+" || token == "-" || token == "*" || token == "/")
      {
         if(token == "+")
         {
            prev = myStack.top();
            myStack.pop();
            prevprev = myStack.top();
            final = prevprev + prev;
         }
         if(token == "-")
         {
            prev = myStack.top();
            myStack.pop();
            prevprev = myStack.top();
            final = prevprev - prev;
         }
         if(token == "*")
         {
            prev = myStack.top();
            myStack.pop();
            prevprev = myStack.top();
            final = prev * prevprev;
         }
         if(token == "/")
         {
            prev = myStack.top();
            myStack.pop();
            prevprev = myStack.top();
            final = prevprev / prev;
         }
         myStack.pop();
         myStack.push(final);
      }
      else
      {
         myStack.push(num1);
      }
      
      // Put your code for evaluating the expression here!

   }; //end while

   // The should be one and only one item left on the stack
   // print the item at the top of the stack
   cout << myStack.top() << endl;
   
   return 0;
}
