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
     std::cout << "Amount paid for stock: $" << std::fixed;
     std::cout << AmountPaid << endl;
    
     Commission = 13062.00 * .02;
     std::cout << "Amount of commission: $";
     std::cout << Commission << endl;
     
     Total = Commission + AmountPaid;
     std::cout << "Total amount for purchase: $" << Total << endl;
     
     return 0;
}