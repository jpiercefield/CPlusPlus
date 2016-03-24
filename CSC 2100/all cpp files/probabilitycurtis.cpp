#include <iostream>
using namespace std;


 int factorial(int n)
	{    int fact = 1;  
		 int i;   
		 for(i = n; i > 0; i--)
			fact = fact*i;
		 return fact;
	}
    
    int permutation(int n,int r)
    {	int per;
        per = factorial(n)/factorial(n-r);
        return per;
    } 
    int combination(int n,int r)
    {int comb;
        comb = factorial(n)/(factorial(n-r)*factorial(r));
        return comb;
	}
int main()
{
    int choice;
    int n,r;
	
	

    while(1)
	{
		cout <<"Enter either '1' or '2':\n";
        cout <<"1. Permutation \n2. Combination\n";
        cin >> choice;
        switch(choice)
        {	case 1:
                cout << "Enter a value of n,r: \n";
                cin >> n;
                cin >> r;
					if (n<r){
						cout << "\n\n\nInvalid input. n must be greater than or equal to r\n\n\n\n";
						}
					else {
						cout << "\n\n\nPermutation P("<<n<<","<<r<<")= "<<permutation(n,r)<<"\n\n\n\n";
						}
					break;
			
           case 2: 
                cout << "Enter value of n,r: \n";
                cin >> n;
                cin >> r;
					if (n<r){
						cout << "\n\n\nInvalid input. n must be greater than or equal to r\n\n\n\n";
							}
					else {
						cout << "\n\n\nCombination C("<<n<<","<<r<<")= "<<combination(n,r)<<"\n\n\n\n";
						}
					break;
				}
		   }
		  
	}


