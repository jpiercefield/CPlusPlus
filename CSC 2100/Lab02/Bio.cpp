//James Piercefield
#include <iostream>
using namespace std;
int main()
{
     double AmountPaid = 600.00 * 21.77;
     double Commission = 13062.00 * .02;
     double Total = Commission + AmountPaid;
    
     std::cout.precision(2);
    
     AmountPaid = 600.00 * 21.77;
     cout << "Amount paid for stock: $" << fixed;
     cout << AmountPaid << endl;
    
     Commission = 13062.00 * .02;
     cout << "Amount of commission: $" << Commission << endl;
    
     
     Total = Commission + AmountPaid;
     cout << "Total amount for purchase: $" << Total << endl;
     
     return 0;
}