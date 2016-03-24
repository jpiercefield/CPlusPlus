#include <iostream>
using namespace std;
int main()
{
	int length;
	cout << "Please enter the length of the array: ";
	cin >> length;
	int array[length];
	int *p;
	p=array; //p contains the address of the first element in the array
	
	
	for(int i=0;i<length;i++)
	{
		cout << "Please enter the value of index = " << i << ": ";
		cin >> *p;
		p=p+1; //same as p++ (This is moving the address to the next element in the array)
		
	}
	
	p=array; //reset the address of p to the first element
	// use pointer to display elements of the array
	for(int i=0;i<length;i++)
	{
		cout << "The value of element "<< i << "=" << *p << endl;
		p++;
	}
}