#include<iostream>
#include<string>
using namespace std;

class transport
{
	protected:
	string name;
	float cost;
	
	public:
	virtual float getCost()=0;
	virtual string getName()=0;
};
class Car: public transport
{
	float getCost()
	{
		return 70;
	}
	string getName()
	{
		return "Car";
	}
};
class Bike: public transport
{
	float getCost()
	{
		return 30;
	}
	string getName()
	{
		return "Bike";
	}
};
class Plane: public transport
{
	float getCost()
	{
		return 200;
	}
	string getName()
	{
		return "Plane";
	}
};
class Point
{
	private:
	double x;
	double y;
	static int pointsTotal;
	string name;
	
	public:
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	void setX(double a)
	{
		x=a;
	}
	void setY(double b)
	{
		y=b;
	}
	void setName(string n)
	{
		name=n;
	}
	string getName() {return name;}
	Point()
	{pointsTotal++;}
	~Point()
	{pointsTotal--;}
};
int Point::pointsTotal=0;
class trip
{
	public:
	Point startPoint;
	Point endPoint;
	transport* getTransport()
	{
	return t;
	}
	void setTransport(transport &trnsprt)
	{
	t=&trnsprt;
	
	}
	float getTripCost()
	{
	return t->getCost();
	}
	
	private:
	transport *t;
	
	
	
};


int main()
{
double a,b;
string n;
double cost;
Point points[4];
transport* types[4];
types[0]=new Car;
types[1]=new Bike;
types[2]=new Plane;
types[3]=new Car;

for (int i=0;i<5;i++)
	{
	cout << "Enter the x coordinate " << i+1 << "\n";
	cin >> a;
	points[i].setX(a);
	cout << "Enter the y coordinate " << i+1 << "\n";
	cin >> b;
	points[i].setY(b);
	}
points[0].setName("A");
points[1].setName("B");
points[2].setName("C");
points[3].setName("D");
points[4].setName("E");
trip trip[4];
for (int i=0;i<4;i++)
	{
		trip[i].setTransport(*types[i]);
		trip[i].startPoint.setX(points[i].getX());
		trip[i].startPoint.setY(points[i].getY());
		trip[i].endPoint.setX(points[i+1].getX());
		trip[i].endPoint.setY(points[i+1].getY());
		trip[i].startPoint.setName(points[i].getName());
		trip[i].endPoint.setName(points[i+1].getName());
		cout << trip[i].getTransport()->getName() << endl << trip[i].startPoint.getName() << ": " << trip[i].startPoint.getX() << "," << trip[i].startPoint.getY() << endl;
		cout << trip[i].endPoint.getName() << ": " << trip[i].endPoint.getX() << "," << trip[i].endPoint.getY() << endl << trip[i].getTripCost() << endl;
		delete types[i];
	}
int totalCost=0;
for (int i=0;i<4;i++)
	{
		totalCost+=trip[i].getTripCost();
			
	}
		
cout << totalCost << endl;
return 0;
}