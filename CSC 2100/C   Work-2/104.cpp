#include <iostream>
using namespace std;
enum Car { Porsche, Ferrari, BMW, Jaguar};
int main()
{
	for(int i=Porsche;i<=Jaguar;i++)
	{
		switch(i)
		{
			case 0:
				cout << "Red Porsche " << endl;
				continue;
			
			case 1:
				cout << "Black Ferrari " << endl;
				continue;
			
			case 2:
				cout << "Blue BMW " << endl;
				continue;
			case 3:
				cout << "Green Jaguar " << endl;
		
		
		}
	
	}
}