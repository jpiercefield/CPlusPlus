#include <iostream>
using namespace std;

int main()
{

cout << "\nArray Symmetry Verifier\n\n\n" ;

int length;
cout << "Please enter the array length: \n";
	cin >> length;
	
char array[length]; 

for (int i = 0; i < length; i++)
	{ cout << "Please enter the character \n";
		cin >> array[i];
	}
bool symmetry = true;
for (int j = 0; j <= (length - 1)/2; j++)
	{ if (array[j]==array[length-1-j]) 
		{ continue;
		}
      else 
		{ symmetry = false;
		  cout << "The symmetry of the elements stops/differs at index "<<j<<" and index "<<length-1-j<<" \n";
		  break;
		}
	}
	
cout << "The array ";

for (int k = 0; k < length; k++)
{
cout << array[k] << " ";
}
if (symmetry == true)
{
cout << " is symmetric.\n";
}
else
cout << " is not symmetric.\n";
}
}
