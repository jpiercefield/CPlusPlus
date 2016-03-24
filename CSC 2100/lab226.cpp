#include <iostream>
using namespace std;
double addition(double a, double b);
void displayInformation(string name);
void changeX(double &a);
void add(double x, double y, double &z);
void helloMessage();
void displayGrade(string name, float grade);
void displayFactors(int x);


int main()
{
	int a;
	cout << "Please eneter the value of a:\n";
	cin >> a;
	displayFactors(a);
}



double addition(double a, double b)
{
	double result;
	result=a+b;
	return result;
}

void displayInformation(string name)
{
	cout << "My name is " << name << endl;
}

void changeX(double &a)
{
	a=a+2;
	
}

void add(double x, double y, double &z)
{
	z=addition(x,y);

}

void helloMessage()
{
	cout << "Hi everyone\n";

}

void displayGrade(string name, float grade)
{
	cout << "The grade of the student " << name << " is: " << grade << endl;
}

void displayFactors(int x)
{
	cout << "The factors of " << x << " are: ";
	int i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		cout << i << endl;
		
	}

}


