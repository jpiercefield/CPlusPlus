// Curtis Patel
#include<iostream>
using namespace std;
int main()
{
	float radius, area;
	
	cout << "Area of Circle \n"; 
	cout << "What is the radius of the circle? \n";
	cin >> radius;
	
	area = ( ( 3.14 ) radius * radius );
	
	cout << "The area of the circle is " << area << ". \n";
	
}