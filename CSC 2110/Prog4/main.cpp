#include <iostream>
using namespace std;
	
#include "LQueue.h"

void print(Queue q)
{ q.display(cout); }

int main()
{
   int lengthOfSim = 0;
   int avgTransaction = 0;
   int numServers = 0;
   int avgTimeBetween = 0;
   Queue list;
   cout << "\nHello Welcome to the Simulator!\n" << endl;
   cout << "Enter Length of Simulation (Max = 10,000): ";
   cin >> lengthOfSim;
   if(lengthOfSim < 0 || lengthOfSim > 10000)
   {
      cout << "**I'm sorry this input does not meet out guidelines.\n";
      cout << "**Please try again with (0<x<=10,000). \n" << endl;
      exit(0);
   }
   cout << "Enter Amount of Servers (Max = 10):  ";
   cin >> numServers;
   if(numServers < 0 || numServers > 10)
   {
      cout << "**I'm sorry this input does not meet out guidelines.\n";
      cout << "**Please try again with (0<x<=10). \n" << endl;
      exit(0);
   }
   cout << "Enter Average Transaction Time (Max = 100): ";
   cin >> avgTransaction;
   if(avgTransaction < 0 || avgTransaction > 100)
   {
      cout << "**I'm sorry this input does not meet out guidelines.\n";
      cout << "**Please try again with (0<x<=100). \n" << endl;
      exit(0);
   }
   cout << "Enter Average Time Between Arrivals: (Max = 100): ";
   cin >> avgTimeBetween;
   if(avgTimeBetween < 0 || avgTimeBetween > 100)
   {
      cout << "**I'm sorry this input does not meet out guidelines.\n";
      cout << "**Please try again with (0<x<=100). \n" << endl;
      exit(0);
   }
   list.simulation(lengthOfSim, avgTransaction, numServers, avgTimeBetween);
   
   


}