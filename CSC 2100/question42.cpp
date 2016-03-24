#include <iostream>
using namespace std;
int main()
{
	for(int local1=1;local1<=60;local1++)
	{
		int sum=0;
		for(int local2=1;local2<=local1;local2++)
		{
			if(local1%local2==0)
			{
				sum+=local2;
			
			}
		
		}
		if(sum==60)
		{
			cout << local1 << " is the smallest integer less than 100 that has the sum of\n";
			cout << "its factors equal to 60." << endl;
			for(int local3=1;local3<local1;local3++)
			{
				if(local1%local3==0)
				{
					cout << local3 << " + ";
				}
			 	
			}
			cout << "24 = 60 " << endl;
			break;
		
		}
	
	}

}