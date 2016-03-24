//James Piercefield
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystr;
	char NameProduct;
	
	cout.precision(2);
    
    //Name the Program
    cout << "Welcome to the Profit Percentage and Discount ";
    cout << "Price Calculator" << endl;
	
    //Ask For Product Name
	cout << "Enter the name of the product: ";
    getline(cin, mystr);
    
	//Ask What the Cost of the Product is
	cout << "Enter the cost of the product: ";
    double CostProduct;
    cin >> CostProduct;
    
	//Ask what the original sale price of the product was
	cout << "Enter the original sale price of the product: ";
    double OriginalSale;
    cin >> OriginalSale;
    
    //Tell the user the profit percentage
    cout << "The profit percentage of " << mystr;
	cout << " is: % " << ((OriginalSale - CostProduct) / OriginalSale) * 100 << endl;
    
    //Prompt the user to enter the discount percentage
    cout << "Enter the discount percentage: % ";
    double DiscountPercentage;
    cin >> DiscountPercentage;
    
    //Calculate Sale Price
    cout << "The sale price of " << mystr;
    cout << " is: $" << fixed;
    cout << OriginalSale - (OriginalSale *(DiscountPercentage / 100)) << endl;

    
    //Calculate and Display Amount Saved By the Shopper
    
    cout << "The amount you've saved is: $";
    cout << OriginalSale - (OriginalSale - (OriginalSale *(DiscountPercentage / 100)));
    cout << endl;
    
    
    return 0;
	
}