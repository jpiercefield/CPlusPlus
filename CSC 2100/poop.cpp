#include <iostream>
using namespace std;
int main()
{
	int arrayLength=0;
	cout << "How long would you like the array to be?" << endl;
	cin >> arrayLength;
	int myArray[arrayLength];
	for(int i=0;i<arrayLength;i++)
	{
		cout << "Enter a value for the array: ";
		cin >> myArray[i];
	}
	int b=1;
	while(b<=3)
	{
		for(int j=0;j<arrayLength;j++)
		{
			int x=2;
			bool test=true;
			while(x<myArray[j])
			{
				if(myArray[j]%x==0)
				{
					test=false;
					break;
				}
				x++;
			}
			if(test==true)
			{
				cout << myArray[j] << endl;
				b++;
			} 
		}	
	
	}
	return(0);
}