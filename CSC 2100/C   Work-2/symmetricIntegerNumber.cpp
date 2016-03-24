// James Piercefield
#include <iostream>

using namespace std;
int main()
{
    int theNumber;
    cout << "Welcome to Symmetric Integer Number" << endl;
    cout << "\nEnter a number 0-999: ";
    cin >> theNumber;
    
    if(theNumber < 0 || theNumber > 999)
    {
        cout << "I'm sorry you've entered an invalid number\n";
        cout << "Please restart the program and try again with 1-999";
        return(0);
    }
    
    else if(theNumber <= 9 && theNumber >= 0)
    {
        cout << "I'm sorry " << theNumber << " is not symmetric." << endl;
        return(0);
    }
    
    else if(theNumber >= 10 && theNumber <= 99)
    {
        int newNumber1;
        int newNumber2;
        newNumber1 = theNumber % 10;
        newNumber2 = theNumber / 10 % 10;
        if(newNumber2 == newNumber1)
        {
            cout << theNumber << " is symmetric" << endl;
        }
        else
        {
            cout << "I'm sorry " << theNumber << " is not symmetric" << endl;
        }
        
        return(0);
    
    }
    
    else if(theNumber >= 100 && theNumber <=999)
    {
        int newNumber1;
        int newNumber2;
        int newNumber3;
        newNumber1 = theNumber % 10;
        newNumber2 = theNumber / 10 % 10;
        newNumber3 = theNumber / 100 % 10;
        if(newNumber3 == newNumber1)
        {
            cout << theNumber << " is symmetric." << endl;
        }
        else
        {
            cout << "I'm sorry " << theNumber << " is not symmetric." << endl;
        }
        
        return(0);
        
    }
}