#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int y;
    bool test;
    for(int x=0; x<=100; x++)
    {
        // we assume x is a prime number
        test=true;
        
        for(y=2;y<x;y++)
        {
            //if y is a factor of x
            if(x%y==0)
            {
                // y is a factor of x so x is not prime
                test=false;
            }
                
        }
        //x doesn't have any factor from 2 to x-1
        if(test==true)
        {
            cout << x << endl;
        }
            
    }

}