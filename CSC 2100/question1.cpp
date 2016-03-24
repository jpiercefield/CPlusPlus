#include <iostream>
using namespace std;
int main()
{
	for(int local1=1;local1<=50;local1++)
	{
		if(local1%3==0 || local1%11==0)
		{
			cout << local1 << endl;
		}
	}
	
}