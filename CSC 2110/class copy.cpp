#include <iostream>
using namespace std;

void BinarySearch(vector<t> &v, t item, bool &found, t &item);


int main()
{
   
     

}

void BinarySearch(vector<t> &v, t item, bool &found, t &item)
{
   found = false;
   int pos = -1;
   int loc = v.size()/2;
   while(loc>=0 && loc<=(v.size()-1))
   {
      if(v[loc] == item)
      {
         found = true;
         post = loc;
         break;
      }
      if(item < v[loc])
      {
         loc = loc/2;
      }
      else
      {
         loc = (v.size()-(loc/2));
      }
   }

}

