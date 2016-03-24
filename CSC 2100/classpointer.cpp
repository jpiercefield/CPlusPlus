#include <iostream>
#include <string>
using namespace std;

class Rectangle{
//this part will define private members or methods (functions)
double height;
double width;
double area; // area = height * width

public: //public members or methods
void setHeight(double h);
void setWidth(double w);
double getHeight();
double getWidth();
double getArea();
};

void Rectangle::setHeight(double h)
{
	height=h;
	area=width*height;
}

void Rectangle::setWidth(double w)
{
	width=w;
	area=width*height;
}

	double Rectangle::getHeight()
	{
		return height;
	}
	double Rectangle::getWidth()
	{
		return width;
	}
	double Rectangle::getArea()
	{
		return area;
	}
	
double getTotalAreas(Rectangle &r1, Rectangle &r2)
{
	return r1.getArea()+r2.getArea();
}

int main()
{
	Rectangle *r1;
	r1 = new Rectangle; //r is an instance of the class rectangle
	r1->setWidth(5);
	r1->setHeight(3);
	cout << "The area of the rectangle = " << r1->getArea()<< endl;
	delete r1;
}