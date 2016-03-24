//James Piercefield
#include <iostream>
using namespace std;

int main()
{
    int arrayNew[3];
    int m=0;
    int length;
    cout << "Enter the length of your array: ";
    cin >> length;
    int myArray[length];
    for(int j=0;j<length;j++)
    {
        cout << "Enter a value in the array: ";
        cin >> myArray[j];
        int y;
        bool test=true;
        for(y=2;y<myArray[j];y++)
        {
            if(myArray[j]%y==0)
            {
                test=false;
            }
        }
        if(test==true)
        {
            if(m<=2)
            {
                arrayNew[m]=myArray[j];
                m++;
            }
            
        }
        
    }
    for(int b=0;b<3;b++)
    {
        if(arrayNew[b]!=0)
        {
            cout << arrayNew[b] << endl;
        }
    }
}
	
