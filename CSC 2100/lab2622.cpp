#include <iostream>
using namespace std;
double addition(double a, double b);
double addition(double a, double b, double c);

int main()
{
	cout << addition(3,4,3) << endl;
	cout << addition(3,6) << endl;
}

double addition(double a, double b)
{
	return a+b;
}

double addition(double a, double b, double c)
{
	return a+b+c;

}