#include "class.h"

bool stack::traverse_maze()
{  
      while(true)
      {
      
         if(pop()== 0)
         {
            return false;
         }
         dis();
         node *v = top;
         if(v == NULL)
         {
            //return false;
            break;
         }
         else
         {
            traverse_maze();
         }
      }
      cout << "\ntedsdvsdvshf\n";
      return false;
}


int stack::pop()
{
   node *temp=top;
   if(temp->next == NULL)
   {
      return 0;
   }
   else 
   {
      node *p=top;
      top=top->next;
      bool w = p->found;
      string v = p->CardinalDirection;
      int x = p->d;
      bool y = p->name;
      delete p;
      return x;
   } 
}
void stack::push(int d1, bool name1, bool found1, string card1)
{
   node *p=new node(d1, name1, found1, card1);
   p->next=top;
   top=p; 
}

void stack::dis()
{ 
   if(emp() == 1)
   {
      cout << "Shit.";
   }
   node *p=top; 
   //while(p!=NULL)
   //{ //It will move SLL until It doesn't found NULL 
   if(p->CardinalDirection == "straight")
   {
      cout << "Continue to walk Straight.\n" << endl;
   } 
   else if(p->CardinalDirection == "left")
   {
      cout << "Turn right 90 degrees, Proceed to walk.\n" << endl;
   }
   else if(p->CardinalDirection == "right")
   {
      cout << "Turn left 90 degrees, Proceed to walk.\n" << endl;;
   }
   else
   {
      cout << "\nWelcome Crap, Looks like your battery is dying or something. \n";
      cout << "**********Your Computer Has Fallen Asleep********-wink-*\n";
   
   }
    //cout << p->CardinalDirection << "\n";
   //p=p->next;
}

int stack::emp()
{
   if(top==NULL)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

