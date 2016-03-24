#include <iostream>
using namespace std;
int main()
{
	int length=0;
	cout << "Enter length of array: ";
	cin >> length;
	char array[length];
	cout << "Let's fill the array. " << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter an element: ";
		cin >> array[i];
	}
	for(int i=0;i<length;i++)
	{
		if(array[i]=='0' || array[i]=='1' || array[i]=='2' || array[i]=='3' || 
		array[i]=='4' || array[i]=='5' || array[i]=='6' || array[i]=='7' || 
		array[i]=='8' || array[i]=='9')
		{
			array[i]='%';
		}
	
	}
	
	cout << "Here is your new array: ";
	for(int i=0;i<length;i++)
	{
		cout << array[i] << " ";
	}
}