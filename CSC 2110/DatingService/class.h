#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct Client{
    char sex;
    string name;
	char phoneNumber[8];
	int NoI;
	char LoI[10];
	string match;
};

class ClientCl
{ 
	public: 
		void newClient();
		void Unmatch();
		void Printmatch();
		void printfree();	
};

