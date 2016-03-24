#include <iostream>
using namespace std;
int main()
{
	int length=0;
	cout << "Enter the length of the array: ";
	cin >> length;
	char array[length];
	int length2=length*2;
	char array2[length2];
	for(int i=0; i<length; i++)
	{
		cout << "Enter an element: ";
		cin >> array[i];
	}
	int rot=0;
	cout << "Enter the amount of times you'd like to rotate this: (rotation length";
	cout << " <= array length)" << endl;
	cin >> rot;
	int what=(rot+length-1);
	for(int k=0;k<rot;k++)
	{
		array2[k]='$';
	}
	for(int m=rot, j=0; j<length; m++, j++)
	{
		array2[m]=array[j];
	}
	for(int t=rot+length;t<length2;t++)
	{
		array2[t]='$';
	}
	cout << "Your new array: ";
	for(int w=0; w<length2; w++)
	{
		cout << array2[w];
	}
}