#include <iostream>
using namespace std;
enum Car { Porsche, Ferrari, BMW, Jaguar};

int main()
{
	Car a=Porsche;
	Car b=Ferrari;
	Car c=BMW;
	Car d=Jaguar;
	for(int index = a;index <= d;index++)
	{
		if(index==a)
		{
			cout << "Porsche";
		}
		else if(index==b)
		{
			cout << "Ferrari";
		}
		else if(index==c)
		{
			cout << "BMW";
		}
		else if(index==d)
		{
			cout << "Jaguar";
		}
		switch(index)
		{
			case 0:
				cout << " - Red" << endl;
				continue;
			
			case 1:
				cout << " - Black" << endl;
				continue;
			case 2:
				cout << " - Blue" << endl;
				continue;
			
			case 3:
				cout << " - Green" << endl;
				continue;
		}
	
	}
}