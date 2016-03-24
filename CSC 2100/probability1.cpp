// James Piercefield
#include <iostream>

using namespace std;

int factorial(int);
void positiveInteger(int, int);
int combination(int factn, int facty, int factr);
int permutation(int factn, int facty);


int main()
{
	char choice;
	int n, r, y;
	
	cout << "Welcome to the Permutation/Combination Calculator." << endl;
	cout << "Input 'n': ";
	cin >> n;
	cout << "Input 'r': ";
	cin >> r;
	positiveInteger(n, r);
	y=n-r;
	
	//Make sure n>=r
	if (n < r)
	{
		cout << "Please make sure that n is greater than or equal to r";
		cout << ", restart the program and \ntry again." << endl;
		
		return(0);
	}
	
	//Prompting user to choose (1)Permutation or (2)Combination
	cout << "Enter 1 for Permutation or 2 for Combination: ";
	cin >> choice;
	int factn;
	int factr;
	int facty;
	
	//Cases for Permutation or Combination + Default
	switch(choice)
	{
		case '1': cout << "You've chosen Permutation, Let's begin!\n";
		factn=factorial(n);
		facty=factorial(y);
		permutation(factn, facty);
		break;
		
		case '2': cout << "You've chosen Permutation, Let's begin!\n";
		factn=factorial(n);
		facty=factorial(y);
		factr=factorial(r);
		combination(factn, facty, factr);
		break;
		
		default: cout << "You've chosen neither Permutation or Combination, Please restart.\n";
		break;
		
	}
	
	return(0);
}

//Making sure the integers entered are positive
void positiveInteger(int n, int r)
{
	if(n < 0 || r < 0)
        cout << "Either n or r was a negative number, Please retry with positive numbers only." << endl;
    return;
 
}

//Function to find the factorial
int factorial(int n)
{
	int i=0;
	int fact1=1;
	
	if(n<=1)
	{
		return(1);
	}
	
	else
	{
		for(i=1;i<=n;i++)
		{
			fact1=fact1*i;
		}
		return(fact1);
	}
}
//Permutation Function
int permutation(int factn, int facty)
{
	int p1;
	p1 = factn/facty;
	cout << "The permutation is: " << p1 << endl;
	
	return(0);
	
	
}
//Combination Function
int combination(int factn, int factr, int facty)
{
	int p2;
	p2=factn/(factr*facty);
	cout << "The combination is: " << p2 << endl;
	
	return(0);
	
}
