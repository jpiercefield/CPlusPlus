#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string Name;
    cout << "Enter the file name you'd like this saved as: ";
    cin >> Name;
    string Extension;
    Extension =".txt";
    string fileName;
    fileName=Name+Extension;
    fstream fileStream;
    fileStream.open(fileName, ios::out);
    fileStream << "Hello World";
    fileStream.close();
	return 0;
}