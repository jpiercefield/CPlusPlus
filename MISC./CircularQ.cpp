#include <iostream>
using namespace std;

typedef struct KBD_buffer {
   int numItems;
   char KBD_array[128];
   int head;
   int tail;
} KBD_buffer;

KBD_buffer KBD_enqueue(KBD_buffer KBD, char theChar)
{
   if(KBD.numItems == 0)
   {
      KBD.KBD_array[KBD.head] = theChar;
      KBD.numItems++;
   } else {
      KBD.KBD_array[KBD.tail+1] = theChar;
      KBD.tail++;
      KBD.numItems++;
   }
   return KBD;
}

KBD_buffer KBD_dequeue(KBD_buffer KBD)
{
   if(KBD.numItems == 0)
   {
      return KBD;
   } else {
      char displayChar = KBD.KBD_array[KBD.head];
      KBD.KBD_array[KBD.head] = '\0';
      KBD.numItems--;
      if(KBD.numItems == 0)
      {

      } else {
         KBD.head++;
      }
      cout << displayChar;
      return KBD;
   }
}

void display(KBD_buffer KBD)
{

}

struct KBD_buffer MyKBD_Buf = { .numItems = 0, .head = 0, .tail = 0 };
int main()
{
   int choice;
   bool hello = true;
   while(hello == true)
   {
      cout << "\n1 - Enqueue";
      cout << "\n2 - Dequeue";
      cout << "\n3 - Display Queue";
      cout << "\n4 - Exit\n";
      cout << "Enter: ";
      cin >> choice;
      switch(choice)
      {
      case 1:
         char let;
         cout << "\n\nEnter char to Enqueue: ";       
         cin >> let;
         KBD_enqueue(MyKBD_Buf, let);
         break;
      case 2:
         cout << "\nLetter dequeued: ";
         MyKBD_Buf = KBD_dequeue(MyKBD_Buf);
         cout << endl;
         break;
      case 3:
         display(MyKBD_Buf);
         break;
      case 4:
         hello = false;
      default:
         cout << "Press any key?" << endl;
      }
   }
   return 0;
}







