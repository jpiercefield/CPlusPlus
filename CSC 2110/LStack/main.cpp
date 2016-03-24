
//Stack By Gopal Tathe 
#include<iostream>
using namespace std;
char ch;
class node
{ //Class Node Which Will Act as Node Of SLL
   public: 
      int d;
      node *next;
      node(int data)
      { //Parametric Constructor 
         next=NULL;
         d=data;
      }
};


class stack
{
   node *top; //Create hn & cn objects of node class
   public:
   stack()
   {
      top=NULL; //Make hn as Null
   }
   void push(int); //To Create SLL
   int pop(); 
   void dis(); //To display SLL
   int emp();
};


   int stack :: pop()
   {
      if(emp()==1)
      {
         cout<<"\nUnderflow";
         return -1;
      }
      else 
      {
         node *p=top;
         top=top->next;
         int x=p->d;
         delete p;
         return x;
      } 
   }
void stack :: push(int d1)
{
   node *p=new node(d1);
   p->next=top;
   top=p; 
}

void stack :: dis()
{ 
   node *p=top; 
   while(p!=NULL)
   { //It will move SLL until It doesn't found NULL 
      cout<<p->d<<"\n";
      p=p->next;
   }
}

int stack :: emp()
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

int main()
{
   stack o;
   int d1,i,ch1;
   do
   {
      cout<<"\n1:Create Stack";
      cout<<"\n2:Empty";
      cout<<"\n3:Pop(Delete)";
      cout<<"\n4:Print";
      cout<<"\n5:Exit";
      cout<<"\nEnter U R Choice";
      cin>>ch1;
      switch(ch1)
      {
         case 1:
            do
            {
               cout<<"\nEnter Data";
               cin>>d1;
               o.push(d1);
               cout<<"\nDO U WANT TO CONTINUE...Enter Your Choice y OR Y \n";
               cin>>ch;
            }while(ch=='y' || ch=='Y');
            cout<<"\n";
            o.dis();
            break; 
            case 2:
            if(o.emp()==1)
            {
               cout<<"\nEmpty Stack";
            }
            else{
                  cout<<"\nNot Empty";
                } 
            break; 
         case 3:
            cout<<o.pop()<<" is poped\n";
            o.dis();
            break; 
         case 4:
            o.dis();
            break; 
         case 5:
            break;
      }
   }while(ch!=5);
   return(0);
}


