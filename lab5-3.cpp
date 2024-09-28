//lab5-2.cpp - displays the total amount due
//Created/revised by Samuel Hollenbeck on (9/27/24)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declare variables
	const double SHIP_FEE1 = 0.99;
	const double SHIP_FEE2 = 4.99;
	const double DISCOUNT_RATE1 = 0.1;
	const double DISCOUNT_RATE2 = 0.05;
	double amountOwed = 0.0;
	char prenium = ' ';

//enter input items
	cout << "Enter the amount owned: ";
	cin >> amountOwed;
	cout << "Are you a Prenium customer? (Y/N): ";
	cin >> prenium;

	//apply discount if prenium customer
	if (toupper(prenium) == 'Y')
		amountOwed -= amountOwed * DISCOUNT_RATE1;
	else 
		amountOwed -= amountOwed * DISCOUNT_RATE2;
	//end if

//calculate amount owed
	if (amountOwed >= 100.0)
		amountOwed += SHIP_FEE1;
	else 
		amountOwed += SHIP_FEE2;
	//end if

//display total owed
	cout << fixed << setprecision(2);
	cout << "Total Owed: $" << amountOwed << endl;

	return 0;
}	//end of main function