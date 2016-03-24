//James Piercefield
#include <iostream>
#include <string>
using namespace std;
string contentBackwards(int length, string  str1, string backWards);
void capitalize(char *p);
int sentenceCounter(int counter,char *p2);
int main()
{
	cout << "\n\nWelcome To The String Manipulator!" << endl;
	int choice;
	cout << "--Enter which type of function you'd like to use--" << endl;
	cout << "(1) Returning String Backwards" << endl;
	cout << "(2) Capitalizes First Character In Sentences" << endl;
	cout << "(3) Returns The Number Of Sentences" << endl;
	cin >> choice;
	cin.ignore();
	switch(choice)
	{
		case 1:	
		{
			string str1;
			string backWards;
			cout << "Enter the word to be reversed: ";
			cin >> str1;
			int length = str1.length();
			cout << "\nYour word reversed: " << contentBackwards(length, str1, backWards);
			cout << endl;
			break;
		}
		
		case 2:	
		{
			char sentence[250];
			cout << "Type sentences for first letter to be capitalized:" << endl;
			cin.getline(sentence,250);
			char *p;
			p=sentence;
			capitalize(p);
			break;
		}
		
		case 3:	
		{
			char sentence2[250];
			cout << "Type sentences to get a sentence count:" << endl;
			cin.getline(sentence2,250);
			char *p2;
			p2=sentence2;
			int counter=0;
			cout << "The amount of sentences is: ";
			cout << sentenceCounter(counter, p2) << endl;
			break;
		}
		
		default:
		{
			cout << "I'm sorry you've selected an invalid option. Please try again.";
			break;
		}
	}
			
}

string contentBackwards(int length, string  str1, string backWards)
{
		
		for(int i=0;i<length;i++)
		{
			backWards[i]=str1[length-1-i];
		}
		for(int i=0;i<length;i++)
		{
			cout << backWards[i];
		}	
		return(backWards);
	
}
void capitalize(char *p)
{
	p[0]=toupper(p[0]);
	for(int i=0;i<249;i++)
	{
		if(p[i]=='.' || p[i]=='!' || p[i]=='?')
		{
			i++;
			i++;
			p[i]=toupper(p[i]);
		}
	}
	cout << p;
}

int sentenceCounter(int counter,char *p2)
{
	for(int i=0;i<248;i++)
	{
		if(p2[i]=='.' || p2[i]=='!' || p2[i]=='?')
		{
			counter++;
		}
	}
	return(counter);
}

