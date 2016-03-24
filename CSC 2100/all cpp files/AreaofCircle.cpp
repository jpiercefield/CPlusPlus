// Curtis Patel
#include<iostream>
// for cmath functions
#include<cmath>
// for input/output formatting
#include<iomanip>
using namespace std;
int main()
{
	float radius, area;
	// PI is a constant variable
	const float PI=3.14159;
	
	cout << "Area of Circle \n"; 
	cout << "What is the area of the circle? \n";
	cin >> area;
	
	radius = ( sqrt(area))/ PI );
	cout << "The radius of the circle is " << setprecision(5) << radius << ". \n";
	
}