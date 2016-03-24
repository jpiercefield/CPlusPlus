#include <iostream>
using namespace std;
int main()
{
	int length=0;
	cout << "Please enter the length of the array: ";
	cin >> length;
	char array[length];
	char *p;
	int index=-1;
	p=array; //p contains the address of the first element in the array
	
	
	for(int i=0;i<length;i++)
	{
		cout << "Please enter the value of index = " << i << ": ";
		cin >> *p;
		p=p+1; //same as p++ (This is moving the address to the next element in the array)
		
	}
	
	p=array; //reset the address of p to the first element
	//add the positive terms in the array.
	for(int i=0;i<length;i++)
	{
		if(*p=='a' && *(p+1)=='b')
		{
			cout << i << endl;
			return(0);
		}
		p++;
		
	}
}