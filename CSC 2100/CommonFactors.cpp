#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int x;
	int y;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	
	if(x<y)
	{
		//find the factors of x and see if they are factors of y
		for(int i=1; i<=x;i++)
		{
			//if i is a factor of x and i is a factor of y
			if(x%i==0&&y%i==0)
			{
				cout << i << endl;
			}
		
		}
	
	}
	else
	{
		//find the factors of y and see if they are factors of x
		for(int i=1;i<=y;i++)
		{
			if(x%i==0&&y%i==0)
			{
				cout << i << endl;
			}
		}
			
	
	}

}