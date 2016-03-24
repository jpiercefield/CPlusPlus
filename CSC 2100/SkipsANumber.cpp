#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int i=-1;
	while(i<=30)
	{
        i++;
		if(i==15)
		{
            continue;
		}
		cout << i << endl;
		
	}
    return(0);
}