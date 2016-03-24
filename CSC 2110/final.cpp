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
		string temp;
		file >> temp;
		if(word.length() == temp.length()) // while loop?
		{
		   int num = 0;
		   num = word.length();
		   int k = 0;
		   for(int i = 0; i < num; i++)
		   {
		      k = 0;
		      do{
		         if(word[i] == temp[k])
		         {
		            if(i == num-1)
		            {
		               cout << temp << endl;
		               return(0);
		            }
		            else
		            {
		               i++;
		            }
		         }
		         else
		         {
		            k++;
		         }
		      
		      }
		      while(k != num);
		      break;
		      
		   }
		
		}
	}
	file.close();
	

}  

int i = 0;
int k =0;
while(k<num)

if(temp[i] == word[k])
{
   i++;
}
else
{
   k++;
}
}

if(k == num)
{
   
}
else
{
   cout << temp;
}




