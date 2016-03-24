#include <iostream>
using namespace std;
int main()
{
    int A = (12467 * .14) + .5;
    int B = (1745 * .64) + .5;
    
    cout << "Number of people surveyed who purchase";
    cout <<  " one or more energy drinks per week: ";
    cout << A << endl;
         
    cout << "Number of the above that prefer citrus";
    cout << " flavored energy drinks: " << B << endl;
    return 0;
}