#include <iostream>
using namespace std;
char *show(int l, char *p);
int main ( ) 
{ 
	int l=0;
	cout << "input array length: ";
	cin >> l;
	char array[l];
	cout << "fill the array now." << endl;
	for(int i=0;i<l;i++)
	{
		cout << "input a character: ";
		cin >> array[i];
	}
	char *p;
	p=array;
	p=show(l, p);
	for(int i=0;i<l;i++)
	{
		cout << p[i] << " ";
	}
	
}

char *show(int l, char *p)
{
	int j=0;
	char z;
	char a[l];
	for(int i=0; i<l; i++)
	{
		z=p[i];
		int counter=0;
		for(int k=0; k<l; k++)
		{
			if(p[k]==z)
			{
				counter++;
			}
			if(counter==2)
			{
				break;
			}
			if(k==l-1 && counter<2)
			{
				a[j]=z;
				j++;
				break;
			}
		}
	}
	for(int i=j;i<l;i++)
	{
		a[i]=' ';
	}
	p=a;
	return(p);
}