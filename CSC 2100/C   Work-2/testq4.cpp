#include <iostream>
using namespace std;
int main()
{
	int length=0;
	double *p;
	double average=0;
	cout << "Enter the length of the array: ";
	cin >> length;
	double array[length];
	cout << "Time to fill the array";
	for(int i=0;i<length;i++)
	{
		cout << "Enter an element of the array: ";
		cin >> array[i];
	}
	p=array;
	for(int i=0; i<length;i++)
	{
		average+=*p;
		p++;
	}
	average=average/length;
	cout << "\n The average is: " << average << endl;
	
}