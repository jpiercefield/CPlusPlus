#include <iostream>
#include <string>
#include <cstring>
#include <cctype> 

using namespace std;

void uppercase(char *ptr);
int counter(string sents);
string backwards(string orginal2);

int main()
{

int function, sentences;
string original, output1, string3, text3;
char text[250];
char *p;

cout << "String Manipulator Program \n";

cout << "\nSelect which function you want to test (by entering either '1','2', or '3'):\n\n";

cout << "1 - returns the content backward.\n";
cout << "2 - capitalizes/uppercases the first character of each sentence.\n";
cout << "3 - returns the number of sentences in the string.\n";
cin >> function;

cin.clear();
cin.ignore(3,'\n');
if (function==1)
	{
	cout << "Enter text:\n";
	getline(cin,original);
	output1 = backwards(original);
	cout << output1 << "\n";
	}
if (function==2)
	{
	cout << "Enter sentences:\n";
	cin.getline(text,250);
	p=text;
	uppercase(p);
	}
if(function==3)
	{
		cout <<"Enter sentences:\n";
		getline(cin,text3);
		sentences=counter(text3);
		cout << sentences << " sentences.\n";
	}
}


string backwards(string original2) 
	{ 
		string answer;
		int length = original2.length();
		for(int i =0; i<length; i++)
			{ 
				answer += original2.at(length-i-1);
			}
		return answer;
	}
void uppercase(char *ptr) 
	{
		int counter = 0;
		ptr[0]=toupper(ptr[0]);
		while(ptr[counter]!= '\0')
		{
			if(ptr[counter]=='.'||ptr[counter]=='?'||ptr[counter]=='!')
				{
					counter+=2;
					ptr[counter]=toupper(ptr[counter]);
				}
				counter++;
		}
		for(int i=0;i<strlen(ptr);i++)
		{
			cout << ptr[i];
		}
			
	
	}
int counter(string sents)
	{
		int length = sents.length();
		int counter = 0;
		for(int i=0;i<length;i++)
		{
			if(sents.at(i)=='.'||sents.at(i)=='?'||sents.at(i)=='!')
			{
			counter++;
			}
		
		}
		return counter;
		
	}
	