#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "class.h"
using namespace std;
int main()
{
	
	bool option = true;
	fstream rowtheboat;
	ClientCl control;
	
	
	while(option == true)
	{
		int toggle;
		cout << "---------------------- Menu ------------------------" << endl;
		cout << "Command Options: (1) - NEWCLIENT, (2) - UNMATCH,\n"
			 << "(3) - PRINTMATCH, (4) - PRINTFREE, (5) - QUIT \n"
			 << "Enter the number of Command: ";
			 
		cin >> toggle;
		
	
		switch(toggle)
		{
		case 1:
			control.newClient();
			break;
		
	
		case 2:
			control.Unmatch();
			break;

	
		case 3:
			control.Printmatch();
			break;
	
		case 4:
			control.printfree();
			break;
		
		case 5: 
			return 0;
			
		default: 
			cout << "Sorry, you've picked an invalid option." << endl;
			break;
		}
	}
}
