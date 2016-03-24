//James Piercefield
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int lengthArray;
	cout << "Welcome to the Array Symmetry Verifier.\n\n" << endl;
    cout << "Enter how long you'd like your array to be: ";
    cin >> lengthArray;
    char array[lengthArray];
    char UserInput; // the number from the user to compare
    int count = 0; // the number of numbers entered
    
    do
    {
        cout << "Please enter 'a' or 'b': "; // print out what I would like
        cin >> UserInput; // get the number from the user
        
        if (UserInput == 'a' || UserInput == 'b')
            count++;
        else
            cout << "This is an invalid character, please retry with an a or b." << endl;
    } while (count < lengthArray);
    
    bool symmetry = true;
    for (int i = 0; i <= (lengthArray - 1)/2; i++)
        {   if (array[i]==array[lengthArray-1-i])
                {   symmetry = true;
                    continue;
                }
            else
                { symmetry = false;
                  cout << "The symmetry of the elements stops/differs at index " << i << " and";
                    cout << " index " << lengthArray - 1 - i << endl;
                }
        }
    cout << "The array ";
    
    for (int j = 0; j < lengthArray; j++)
    {
        cout << j << '\t' << array[j] << " " << endl;
    }
    if (symmetry == true)
    {
        cout << " is symmetric\n.";
    }
    else
    {
        cout << " is not symmetric\n.";
    }
    
    return(0);
    
}
	

