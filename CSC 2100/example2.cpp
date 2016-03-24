#include <string>
#include <iostream>
using namespace std;

union MagazineType
{
	int dailyM;
	int weeklyM;
	int monthlyM;
};

int main ()
{
	MagazineType x;
	char magazineType;
	cout << "Enter the magazine type (d(daily)/m(monthly)/w(weekly))\n";
	cin >>magazineType;
	if(magazineType=='d')
	{
 		x.dailyM=1;
 	}
	else if(magazineType=='m')
	{
 		x.monthlyM=3;
 	}
	else if(magazineType=='w')
	{
 		x.weeklyM=2;
 	}
	else
	{
 		cout << "You entered a wrong type\n";
 	}
 	cout << "dailyM is equal to: "<<x.dailyM<<endl;
	cout << "monthlyM is equal to: "<<x.monthlyM<<endl;
	cout << "weeklyM is equal to: "<<x.weeklyM<<endl;

}