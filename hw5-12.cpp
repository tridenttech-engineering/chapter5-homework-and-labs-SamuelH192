//lab5-2.cpp - displays the total amount due
//Created/revised by Samuel Hollenbeck on (9/27/24)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declare variables
	double priceItem1 = 0.0;
	double priceItem2 = 0.0;
	double amountOwed = 0.0;

//enter input items
	cout << "Enter the price of the first item: ";
	cin >> priceItem1;
	cout << "Enter the price of the second item: ";
	cin >> priceItem2;

	//apply half-off to item with lower price
	if (priceItem1 < priceItem2)
		priceItem1 /= 2;
	else
		priceItem2 /= 2;
	//end if

//calculate amount owed
	amountOwed = priceItem1 + priceItem2;

//display total owed
	cout << fixed << setprecision(2);
	cout << "Total Owed: $" << amountOwed << endl;

	return 0;
}	//end of main function