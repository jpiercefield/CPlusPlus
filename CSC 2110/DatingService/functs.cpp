#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "class.h"

using namespace std;

fstream datingFile;
char temp;

vector<Client> male, female, matched;
int maleTrack = 0;
int femaleTrack = 0;
int matchedTrack = 0;
string name1;

void ClientCl::newClient()
{
	cout << "Enter sex (M or F): ";
	cin >> temp;
	cin.ignore();
	if(temp == 'M' || temp == 'm')
	{
		maleTrack = male.size();
		male.push_back(Client());
		male[maleTrack].sex = 'M';
		cout << "Enter name: ";
		getline(cin, name1);
		male[maleTrack].name = name1;
		cout << "Enter 8 digit phone number: " << endl;
		int z = 0;
		while(z<8)
		{
			cout << "Enter digit for index " << z << ": ";
			cin >> male[maleTrack].phoneNumber[z];
			z++;
		}
		int possibleIntr = 10;
		cout << "Enter the amount of interest (integer <= 10): ";
		cin >> male[maleTrack].NoI;
		cout << "Enter the List of interest: (Limit 10 Chars)";
		if(male[maleTrack].NoI > 10)
		{
			for(int i=0;i<possibleIntr;i++)
			{
				cout << "Enter a char for index: " << i;
				cout << " out of " << possibleIntr-1 << ": " << endl;
				cin >> male[maleTrack].LoI[i];
			}
		} 
		else
		{
			for(int i=0;i<male[maleTrack].NoI;i++)
			{
				cout << "Enter a char for index: " << i;
				cout << " out of " << male[maleTrack].NoI << ": " << endl;
				cin >> male[maleTrack].LoI[i];
			}
		
		}
		if(female.size() != 0)
		{
			femaleTrack = female.size();
			female[0].match = male[maleTrack].name;
			female[0].match.append(" ");
			female[0].match.append(male[maleTrack].phoneNumber);
			male[maleTrack].match = female[0].name;
			male[maleTrack].match.append(" ");
			male[maleTrack].match.append(female[0].phoneNumber);	
			matchedTrack = matched.size();
			matched[matchedTrack]=female[0];
			matched[matchedTrack+1]=male[0];
			female.pop_back();
			male.pop_back();
			datingFile.open("dating.txt", ios::out);
			datingFile << matched[matchedTrack].sex << " " << matched[matchedTrack].name;
			datingFile << endl;
			datingFile << "Phone Number: " << matched[matchedTrack].phoneNumber[8];
			datingFile << endl;
			datingFile << "Number of Interest: " << matched[matchedTrack].NoI;
			datingFile << " " << "List of Interest: " << matched[matchedTrack].LoI[10];
			datingFile << endl;
			datingFile << "Matched Info: " << matched[matchedTrack].match << "\n\n";
			datingFile.close();	
		}
		else
		{
			datingFile.open("dating.txt", ios::out);
			datingFile << male[maleTrack].sex << " " << male[maleTrack].name;
			datingFile << endl;
			datingFile << "Phone Number: " << male[matchedTrack].phoneNumber[8];
			datingFile << endl;
			datingFile << "Number of Interest: " << male[matchedTrack].NoI;
			datingFile << " " << "List of Interest: " << male[matchedTrack].LoI[10];
			datingFile << endl;
			datingFile << "Matched Info: " << male[matchedTrack].match << "\n\n";
			datingFile.close();
		}
		
	}
	else if(temp == 'F' || temp == 'f')
	{
		femaleTrack = female.size();
		female.push_back(Client());
		female[femaleTrack].sex = 'F';
		cout << "Enter name: ";
		getline(cin, name1);
		female[femaleTrack].name = name1;
		cout << "Enter 8 digit phone number: ";
		for(int i=0;i<8;i++)
		{
			cout << "Enter digit for index " << i << ": ";
			cin >> female[femaleTrack].phoneNumber[i];
		}
		int possibleIntr = 10;
		cout << "Enter the amount of interest (integer <= 10): ";
		cin >> female[femaleTrack].NoI;
		cout << "Enter the List of interest: (Limit 10 Chars)";
		if(female[femaleTrack].NoI > 10)
		{
			for(int i=0;i<possibleIntr;i++)
			{
				cout << "Enter a char for index: " << i;
				cout << " out of " << possibleIntr-1 << ": " << endl;
				cin >> female[femaleTrack].LoI[i];
			}
		} 
		else
		{
			for(int i=0;i<possibleIntr;i++)
			{
				cout << "Enter a char for index: " << i;
				cout << " out of " << possibleIntr-1 << ": " << endl;
				cin >> female[femaleTrack].LoI[i];
			}
		
		}
		if(male.size() != 0)
		{
			maleTrack = male.size();
			male[0].match = female[femaleTrack].name;
			male[0].match.append(" ");
			male[0].match.append(female[femaleTrack].phoneNumber);
			female[femaleTrack].match = male[0].name;
			female[femaleTrack].match.append(" ");
			female[femaleTrack].match.append(male[0].phoneNumber);	
			matchedTrack = matched.size();
			matched[matchedTrack]=male[0];
			matched[matchedTrack+1]=female[0];
			female.pop_back();
			male.pop_back();
			datingFile.open("dating.txt", ios::out);
			datingFile << matched[matchedTrack].sex << " " << matched[matchedTrack].name;
			datingFile << endl;
			datingFile << "Phone Number: " << matched[matchedTrack].phoneNumber[8];
			datingFile << endl;
			datingFile << "Number of Interest: " << matched[matchedTrack].NoI;
			datingFile << " " << "List of Interest: " << matched[matchedTrack].LoI[10];
			datingFile << endl;
			datingFile << "Matched Info: " << matched[matchedTrack].match << "\n\n";
			datingFile.close();	
		}
		else
		{
			datingFile.open("dating.txt", ios::out);
			datingFile << female[femaleTrack].sex << " " << female[femaleTrack].name;
			datingFile << endl;
			datingFile << "Phone Number: " << female[matchedTrack].phoneNumber[8];
			datingFile << endl;
			datingFile << "Number of Interest: " << female[matchedTrack].NoI;
			datingFile << " " << "List of Interest: " << female[matchedTrack].LoI[10];
			datingFile << endl;
			datingFile << "Matched Info: " << female[matchedTrack].match << "\n\n";
			datingFile.close();
		}
	}
	else
	{
		cout << "This is an invalid option.";
	}
}

void ClientCl::Unmatch()
{
	string tempName;
	string tempName2;
	cout << "Enter the name of the first person you'd like to unmatch: ";
	getline(cin,tempName);
	cout << "Enter the name of the they're matched to: ";
	getline(cin, tempName2);
	int tempNum;
	temp = matched.size();
	for(int i=0;i<tempNum;i++)
	{
		if(tempName == matched[i].name)
		{
			if(matched[i].sex == 'M')
			{
				male.push_back(Client());
				int temp3;
				temp3 = male.size();
				male[temp3]= matched[i];
				matched.erase(matched.begin()+i);
				male[temp3].match = " ";
			}
			if(matched[i].sex == 'F')
			{
				female.push_back(Client());
				int temp3;
				temp3 = female.size();
				female[temp3]= matched[i];
				matched.erase(matched.begin()+i);
				female[temp3].match = " ";
			}
		}
		if(tempName2 == matched[i].name)
		{
			if(matched[i].sex == 'M')
			{
				male.push_back(Client());
				int temp3;
				temp3 = male.size();
				male[temp3]= matched[i];
				matched.erase(matched.begin()+i);
				male[temp3].match = " ";
			}
			if(matched[i].sex == 'F')
			{
				female.push_back(Client());
				int temp3;
				temp3 = female.size();
				female[temp3]= matched[i];
				matched.erase(matched.begin()+i);
				female[temp3].match = " ";
			}
		}
	}
}

void ClientCl::Printmatch()
{
	int tempNum;
	tempNum = matched.size();
	if(tempNum == 0)
	{
		cout << "There are no matches at this time. " << endl;
	}
	else
	{
		for(int i=0;i<tempNum;i++)
		{
			cout << matched[i].name;
			cout << " & ";
			cout << matched[i++].name << endl;
		}
	}
}
		
void ClientCl::printfree()
{
	int tempNum;
	tempNum = male.size();
	if(tempNum == 0)
	{
		cout << "There are no males Free at this time." << endl;
	}
	else
	{
		for(int i=0;i<tempNum;i++)
		{
			cout << male[i].name << " " << male[i].phoneNumber << endl;
		}
	}
	tempNum = female.size();
	if(tempNum == 0)
	{
		cout << "There are no Females Free at this time." << endl;
	}
	else
	{
		for(int i=0;i<tempNum;i++)
		{
			cout << female[i].name << " " << female[i].phoneNumber << endl;
		}
	}
}

