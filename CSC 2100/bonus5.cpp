#include <iostream>
using namespace std;
void thefunction(int length, char *p);
int main ( ) 
{ 
	int length=0;
	cout << "Enter length of array: ";
	cin >> length;
	char array[length];
	cout << "Now let's fill the array." << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter a character: ";
		cin >> array[i];
	}
	char *p;
	p=array;
	thefunction(length, p);
	
}

void thefunction(int length, char *p)
{
	int move=0;
	char temp;
	char array2[length];
	for(int i=0; i<length; i++)
	{
		temp=p[i];
		int counter=0;
		for(int k=0; k<length; k++)
		{
			if(p[k]==temp)
			{
				counter++;
			}
			if(counter==2)
			{
				break;
			}
			if(k==length-1 && counter<2)
			{
				array2[move]=temp;
				move++;
				break;
			}
		}
	}
	for(int t=move;t<length;t++)
	{
		array2[t]=' ';
	}
	cout << "These are the character(s) without duplicates: ";
	for(int m=0;m<length;m++)
	{
		cout << array2[m] << " ";
	}
	cout << endl;
}
	
