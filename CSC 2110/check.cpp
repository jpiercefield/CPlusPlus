#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string word;
   cout << "Enter a key you'd like to find a word for: ";
   cin >> word;
   ifstream file("wordlist.txt");
	while(!file.eof()) //file.is_open()
	{ 
	   int num = 0;
		string temp;
		file >> temp;
		num = temp.length();
		if(word.length() == temp.length()) // while loop?
		{
		   int i = 0;
         int k = 0;
         while(k<num)
         {
            if(word[i] == temp[k])
            {
               i++;
               k = 0;
            }
            else
            {
               k++;
            }
         }
         if(i == num)
         {
            cout << temp << endl;
         }
      }
   }
}