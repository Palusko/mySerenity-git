#include "main.h"

#include <iostream>
#include <iomanip>
#include <cstdlib>  //for system("CLS") - clears screen

using namespace std;

//prototype functions
int selectReport(int);
void repListing();
void repWholeSale();
void repRetail();
void repQty();
void repCost();
void repAge();

void reports()
{
    int selection;

	cout << setw(25) << "Serendipity Book Store\n";
	cout << setw(18) << "Reports\n\n";

	cout << "1. Inventory Listing\n";
	cout << "2. Inventory Wholesale Value\n";
	cout << "3. Inventory Retail Value\n";
	cout << "4. Listing by Quantity\n";
	cout << "5. Listing by Cost\n";
	cout << "6. Listing by Age\n";
	cout << "7. Back to Main Menu\n\n";
	cout << "Enter your choice.\n";

    cin >> selection;
	selectReport(selection);
}

int selectReport(int selection)
{

    //cout << "selection is" << selection;
    //cin.ignore(100);
    //input validation
    while ((selection < 1 || selection > 7) && (!cin.fail()))
    {
        cout << "Wrong selection. Please chose from the menu\n";
        cin >> selection;
    }
	switch (selection)
	{
		case 1:
			repListing();
			break;
		case 2:
			repWholeSale();
			break;
		case 3:
			repRetail();
			break;
		case 4:
			repQty();
			break;
		case 5:
			repCost();
			break;
		case 6:
			repAge();
			break;
		case 7:
			break;
		default:
			cout << "UNEXPECTED ERROR! EXITING NOW\n";
			exit(0);
	}

	return selection;

}


void repListing()
{
	system("CLS");
	cout << "inventory listing";
	cin.ignore(100);
}

void repWholeSale()
{
	system("CLS");
	cout << "inventory wholesale value";
	cin.ignore(100);
}
void repRetail()
{
	system("CLS");
	cout << "listing by retail price";
	cin.ignore(100);
}

void repQty()
{
	system("CLS");
	cout << "listing by quantity";
	cin.ignore(100);
}

void repCost()
{
	system("CLS");
	cout << "listing by cost";
	cin.ignore(100);
}

void repAge()
{
	system("CLS");
	cout << "listing by age";
	cin.ignore(100);
}
