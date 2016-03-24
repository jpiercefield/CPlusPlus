#include <iostream>
#include <fstream>
#include "Worker.h"
using namespace std;

Worker name;

void Worker::setValue(string n, float r, int h)
{
	name = n;
	rate = r;
	hour = h;
}

float Worker::getPay()
{
	cout << name << "'s pay is: " << rate*hour << endl;
	return 0;
}

void Worker::displayWorker()
{
	cout << name << " " << rate << " " << hour << endl;
}