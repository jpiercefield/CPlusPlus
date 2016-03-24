#include <iostream>
#include <string>
using namespace std;

class Worker
{
	private:
		string name;
		float rate;
		int hour;
	public:
		void setValue(string n, float r, int h);
		float getPay();
		void displayWorker();
};
