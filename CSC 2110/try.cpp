#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int count;
	
	vector<int> x(10);
	
	for( ; ;)
    {
		cin >> count;
		if(count < 0) break;
		x.push_back(count);
	}
    
    for(vector<int>::iterator iter = x.begin(); iter!= x.end(); iter++)
    {
    	x.push_back(*iter + 1);
    }
	
	cout << "Now vect has " << x.size()
		 << "elements. Here they are:\n";
		 
	for(count = 0; count <= x.size(); count++)
	{
		cout << x[count] << endl;
	}
	
	return 0;

}