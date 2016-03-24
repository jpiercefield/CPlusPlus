//Question 2
#include <iostream>
using namespace std;

union MagazineType
{
	int dailyM;
	int weeklyM;
	int monthlyM;
};

int main()
{
	MagazineType x;
	char y;
	for(int i=0;i<3;i++)
	{
		cout << "Enter d for Daily, w for weekly, and m for monthly: ";
		cout << "Do not enter same letter twice.";
		cin >> y;
		switch(y)
		{
			case 'd':
			{
				x.dailyM=1;
				continue;
			}
			case 'w':
			{
				x.weeklyM=2;
				continue;
			}
			case 'm':
			{
				x.monthlyM=3;
				continue;
			}
		}
		cout << x.dailyM << endl;
		cout << x.weeklyM << endl;
		cout << x.monthlyM << endl;
		return(0);
		
	}
	
	

}