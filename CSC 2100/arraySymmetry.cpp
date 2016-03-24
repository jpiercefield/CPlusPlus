//James Piercefield
#include <iostream>
using namespace std;

int main()
{
    
    cout << "\n Welcome to the Array Symmetry Verifier\n\n" ;
    
    int arrayLength;
    cout << "Please enter the array length: \n";
    cin >> arrayLength;
    
    char myArray[arrayLength];
    
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "Please enter 'a' or 'b': ";
        cin >> myArray[i];
        
    }
    
    bool symmetry = true;
    for (int j = 0; j <= (arrayLength - 1)/2; j++)
    {
        if (myArray[j]==myArray[arrayLength-1-j])
        {
            continue;
        }
        else
        {
            symmetry = false;
            cout << "The symmetry of the elements stops/differs at index " << j <<" and index "<<arrayLength-1-j<<" \n";
            break;
        }
    }
    
    cout << "The array ";
    
    for (int k = 0; k < arrayLength; k++)
    {
        cout << myArray[k] << " ";
    }
    if (symmetry == true)
    {
        cout << " is symmetric." << endl;
    }
    else
        cout << " is not symmetric." << endl;
}