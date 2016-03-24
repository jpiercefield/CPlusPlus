#include <iostream>
using namespace std;

int main()
{
	cout << "Enter array length" << endl;
	int e;
	cin >> e;
    int e2=e*2;
    char t2[e2];
	char t[e];
	for (int c = 0; c<e; c++)
	{
		cout << "Enter element " << c + 1 << endl;
		cin >> t[c];
	}
    int d;
    cout << "How far would you like to shift?" << endl;
	cin >> d;
    if(d>e)
    {
        cout << "Sorry D must be <= N, Please try again." << endl;
        return(0);
    }
    for(int i=0;i<d;i++)
    {
        t2[i]='$';
    }
    int j=0;
    for(int i=d;i<d+e;i++)
    {
        t2[i]=t[j];
        j++;
    }
    for(int i=d+e;i<e2;i++)
    {
        t2[i]='$';
    }
    cout << "Your new array with shift " << d << " is: " << endl;
    for(int i=0;i<e2;i++)
    {
        cout << t2[i] << " ";
    }
	
	return(0);
}