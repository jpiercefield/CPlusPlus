#include <iostream>
#include "Worker.h"
using namespace std;

int main()
{
	Worker test;
	test.setValue("John", 6.25, 40);
	test.displayWorker();
	
	return 0;
}
