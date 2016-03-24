#include "class.h"
char ch;
int main()
{
   stack o;
   int d1,i,ch1;
   string card1;
   bool found1;
   bool name1;
   do
   {
      card1 = false;
      found1 = false;
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
               cout<<"\nEnter degree num: ";
               cin>>d1;
               cout << "Enter name (0 or 1)";
               cin >> name1;
               cout << "Enter 1 or 0: ";
               cin >> found1;
               cin.ignore();
               cout << "Enter string: ";
               getline(cin, card1);
               o.push(d1, name1, found1, card1);
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
            cout<< o.pop() <<" is poped\n";
            o.dis();
            break; 
         case 4:
            o.dis();
            break; 
         case 5:
            return(0);
            break;
      }
   }while(ch!=5);
}


