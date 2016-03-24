#include "class.h"
//adding degree in a counter and if it equals 180 "backwards" tell them
bool creative = false;
int main()
{
   stack List;
   bool hello = 0;
   string card1;
   bool found1;
   bool name1;
   int d1;
   char choice;
   cout << "\nWelcome to the Maze.........\n" << endl;
   while(hello == 0)
   {
      cout << "You've walked forward, writing your name on the ground. \n" << endl;
      cout << "Have you found the magical tapestry? (y/Y or N/n): ";
      cin >> choice;
      if(choice == 'y' || choice == 'Y')
      {
         cout << "You - Woooooooooooh, This tapestry is soooo magical! " << endl;
         cout << "Creator - Nooooooo my tapestryyyyyy! " << endl;
         cout << "You - Oh crap! I better run..." << endl;
         cout << "Computer - Have no fear, I have the directions back!" << endl;
         cout << "\nTurn around 180 degrees and walk forward.\n" << endl;
         //card1 = "straight";
         found1 = true;
         //name1 = false;
         //d1 = 0;
         //List.push(d1, name1, found1, card1);
         List.traverse_maze();
         //return 1;
         hello = 1;
      }
      else
      {
         char wall;
         char choice;
         char second;
         char third;
         cout << "Is there a wall in front of you? (y/Y or N/n): ";
         cin >> wall;
         if(wall == 'y' || wall == 'Y')
         {
            cout << "Cool there's a wall there, don't run into it." << endl;
            cout << "Please turn 90 degrees to the left." << endl;
            cout << "Is there a wall in front of you? (y/Y or N/n): ";
            cin >> wall;
            if(wall == 'y' || wall == 'Y')
            {  
               cout << "Cool there's a wall there, don't run into it." << endl;
               cout << "Please turn 180 degrees to the right." << endl;
               cout << "Is there a wall in front of you? (y/Y or N/n): ";
               cin >> wall;
               if(wall == 'y' || wall == 'Y')
               {
                  cout << "\nTime to go back home... There's no where to move.";
                  List.traverse_maze();
                  hello = 1;
               }
               else
               {
                  cout << "Writing your name on my grid, I'll remember.\n";
                  card1 = "right";
                  name1 = true;
                  found1 = false;
                  d1 = 180;
                  List.push(d1, name1, found1, card1);
               }
            }
            else
            {
               card1 = "left";
               name1 = true;
               found1 = false;
               d1 = 90;
               List.push(d1, name1, found1, card1);
            }
         }
         else
         {
            card1 = "straight";
            name1 = true;
            found1 = false;
            d1 = 0;
            List.push(d1, name1, found1, card1);
         }
      }
   }
   return 0;
}