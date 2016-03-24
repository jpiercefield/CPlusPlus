#include <iostream>
using namespace std;
int main()
{
	int counter=0;
	int length=0;
	cout << "Enter length of arrays: ";
	cin >> length;
	char array1[length];
	char array2[length];
	cout << "Now enter the elements of the first array." << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter a value: ";
		cin >> array1[i];
	}
	cout << "Now enter the elements of the second array." << endl;
	for(int i=0;i<length;i++)
	{
		cout << "Enter a value: ";
		cin >> array2[i];
	}
	cout << "The indexes where the elements are different are: ";
	for(int i=0;i<length;i++)
	{
		if(array1[i] != array2[i])
		{
			cout << i << " ";
			counter=counter+1;
		}
	}
	
	cout << "\nThe total differences are " << counter << ".";
}