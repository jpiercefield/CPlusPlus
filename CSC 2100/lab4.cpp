//Lab March 19, 2015
//Pointers

#include <iostream>
using namespace std;

int main()
{
	//pointers
	int x=0;
	int *p;
	int y = 0;

	p = &x;
	*p = 4;
	y = *p + 5;
	p = &y;
	x = x + *p;

	cout << x << endl; 
	
	//will display 13
	//p is address, *p is value	


	//inputting and displaying elements in an array
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		cout <<array[i] << " "<<endl;
	}


	//finding the average of array elements
	float f=0;
	for (int i = 0; i < 5; i++)
	{
		f = array[i] + f;
	}
	f = f / 5;
	cout << "\nthe average is " <<f;

	//use two nested loops for 2 dimensional arrays
	float array2[5][6];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			array[i][j];
		}
	}
	//for 3 dimensions, it would be 3 nested loops

	//pointers and arrays 
	int *p;
	int array[5];
	p = array;
	array[0] = 11;
	p = array;
	cout << *p << endl; //will display 11

	//an array is a constant pointer

}