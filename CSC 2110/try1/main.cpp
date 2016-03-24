//James Piercefield
#include <iostream>
using namespace std;
bool traverse_maze();
int main()
{
   
   if(traverse_maze())
       cout << "You found it!" << endl;
   else
      cout << "You are lost.";
   return 0;
   
}

bool traverse_maze()
{
   string question, question2;
   bool found;
   int i;
   cout << "Step forward & write your name on the ground." << endl;
   cout << "Have you found the tapestry? [Yes or No]: " << endl;
   cin >> question;
   if(question == "Yes" || question == "yes" || question == "YES")
   {
      found = true;
   }
   if(found)
   {
      cout << "Pick up the tapestry and take a step backward.\n";
   }
   else
   {
      cout << "Please turn left 90 degrees." << endl;
      for(i = 1; i <=3; i++)
      {
         if(!found)
         {
            cout << "Are you facing a wall? [Yes or No]: " << endl;
            cin >> question;
            if(question == "No" || question == "no" || question == "NO")
            {
               cout << "Is your name written on the ground? [Yes or No]: ";
               cin >> question2;
            }
         }
         
         if( !found && (question == "no" || question == "No")&&(question2 == "No" || 
                        question2 == "no" || question2 == "NO"))
            found = traverse_maze();
         
         cout << "Please turn right 90 degrees." << endl;
      }
      cout << "Please step forward, then turn 180 degrees.\n";
   } 
   return found;  
}
