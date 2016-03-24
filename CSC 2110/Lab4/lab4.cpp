#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "Worker.h"

int main()
{
   ifstream infile;
   int records;
   string n;
   float r;
   int h;
   
   Worker array[8];
	
   // declare required variables here.
	
   // Open data file       
   infile.open("employee.txt");
   if (infile.fail())
   {
      cout << "The file failed to open.\n\n";
      exit(1);
   }
   
   
   for(int i=0;i<8;i++)
   {
		infile >> n >> r >> h;
		array[i].setValue(n, r, h);
		array[i].getPay();	
   }
   
   cout << "\n\nNow displaying all workers: \n";
   
   for(int i=0;i<8;i++)
   {
   		array[i].displayWorker();	
   }
   
   // Using a loop, create a worker object, read data from the file,
   // initialize object with the data, and store the object in the
   // array.

   // Using another loop, traverse through the array objects created
   // and display each object. 

}