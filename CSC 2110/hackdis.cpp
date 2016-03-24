#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   string word;
   cout << "Enter a key you'd like to find: ";
   cin >> word;
	int num = 0;
	int keep = 0;
	int wholetotal = 0;
	int totalPrime = 0;
	int total1 = 0;
	vector <char> v(25);
	for(int i=0;i<25;i++)
	{
	   char p;
	   p = word[i];
	   if(p == '2' || p == '3' || p == '4' || p == '5' || p == '6' ||
	      p == '7' || p == '8' || p == '9')
	   {
	      if(p == '2' || p == '3' || p == '5' || p == '7')
	      {
	         totalPrime += (int)p;
	      }
	      else
	      {
	         total1 += (int)p;
	      }
	   }
	   else
	   {
	      if(p != '1' || p!='0')
	      {
            char hold;
            int hold1;
            hold1 = (int)p;
            hold1++;
            hold = (char) hold1;
            v[keep] = hold;
            keep++;
         }
	   }
	         
	}
	cout << "\n\n\n\n";
	wholetotal = totalPrime * total1;
	for(int f=0;f<keep;f++)
	{
	   cout << v[f];
	}
	cout << wholetotal << endl;
}