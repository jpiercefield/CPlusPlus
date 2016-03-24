#include <iostream>
using namespace std;
void displayArray(char *p, int length);
char *clockwise(char *array, int length);
void counterclockwise(int length, char *array);

int main()
{
	int length=0;
	int rot=0;
	char choice;
	char *p;
	cout << "Enter the length of the array: ";
	cin >> length;
	char firstArray[length];
	char *secondArray;
	secondArray = firstArray;
	
	for(int i=0;i<length;i++)
	{
		cout << "Enter an element for the array: ";
		cin >> firstArray[i];
	}
	
	p=firstArray;
	cout << "Your original array is: ";
	displayArray(p, length);
	cout << "\n Enter the length of array rotation (Must be less than array length): ";
	cin >> rot;
	if(rot>length)
	{
		cout << "Sorry rotation length must be less than array length" << endl;
		return(0);
	}
	cout << "Enter 'a' for clockwise or 'b' for counterclockwise: ";
	cin >> choice;
	p=firstArray;
	switch (choice)
	{
		case 'A':
		case 'a': 
			cout << "You've chosen clockwise" << endl;
			cout << "Here is the result: ";
			for(int i=0;i<rot;i++)
			{
				secondArray=clockwise(firstArray, length);
			}
			cout << "Array Rotated Clockwise: ";
			displayArray(secondArray, length);
			exit(0);
			
		case 'B':
		case 'b': 
			cout << "You've chosen counterclockwise" << endl;
			cout << "Here is the result: ";
			counterclockwise(length,firstArray);
			for (int i =0; i < rot; i++)
			{		
				secondArray = clockwise(firstArray,length);
			}
	        counterclockwise(length,firstArray);
		
			cout << "Array Rotated Counterclockwise: ";
			displayArray(secondArray, length);
			exit(0);
		
		default: 
			cout << "You've chosen neither a or b try again";
		return(0);
		
	}
	
}

void displayArray(char *p, int length)
{
	for(int i=0;i<length;i++)
	{
		cout << *p << " ";
		p++;
	}

}

char *clockwise(char *array, int length)
{
	char *secondArray;
	char temp;
	if(length>1)
	{
		temp = array[0];
		array[0] = array[1];
		array[1] = temp;
		clockwise(array+1, length-1);
	}
	secondArray = array;
	return secondArray;
	
}

void counterclockwise(int length, char *array)
{ 
	int temp1, temp2;
	for (int i = 0, temp2 = (length - 1); i < temp2; i++, temp2--)
	{
		temp1 = array[i];
		array[i] = array[temp1];
		array[temp2] = temp1;
	}

}









