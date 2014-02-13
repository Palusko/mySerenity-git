#include "mainMenu.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>  //for system("CLS") - clears screen

using namespace std;

//prototype functions
void dateToday(string &);
void quantity(int &);
void isbn(string &);
void title(string &);
void price(float &);
float total(int, float);

void cashier()
{
    string todaysDate;
    string bookISBN;
    string bookTitle;
    float bookPrice;
    int bookQuantity;
    float bookTotal;
	const double TAX_RATE = 0.06; //6% tax

	dateToday(todaysDate);
	quantity(bookQuantity);
	isbn(bookISBN);
	title(bookTitle);
	price(bookPrice);
	bookTotal = total(bookQuantity, bookPrice);

	system("CLS"); //clears screen
	cout << "Serendipity Book Store\n\n";
	cout << "Date: "<< todaysDate <<"\n\n";
	cout << "Quantity  ISBN           Title                           Price       Total\n";
	cout << "____________________________________________________________________________\n\n";
	cout << left << setw(10) << bookQuantity;
	cout << setw(15) << bookISBN;
	cout << setw(32) << bookTitle;
	cout << "$ " << setw(10) << setprecision(2) << fixed << bookPrice; //set two decimal points
	cout << "$ " << setw(12) << bookTotal;
	cout << "\n\n" << right << setw(49) << "Subtotal" << "                    $ " << bookTotal << "\n";
	cout << setw(44) << "Tax" << "                         $ " << TAX_RATE * bookTotal << "\n" ;
	cout << setw(46) << "Total" << "                       $ " << bookTotal + (TAX_RATE * bookTotal) << "\n\n";
	cout << "Thank you for shopping at Serendipity Book Store!\n\n";
}

void dateToday(string &todaysDate)
{
	cout << "Enter the date in MM/DD/YY format\n";
	cin >> todaysDate;
	cin.ignore(1); //ignores the new line character
}

void quantity(int &bookQuantity)
{
	cout << "Enter the quantity being purchased\n";
	cin >> bookQuantity;
	cin.ignore(1); //ignores the new line character
}

void isbn(string &bookISBN)
{
	cout << "Enter the ISBN\n";
	cin >> bookISBN;
	cin.ignore(1); //ignores the new line character
}

void title(string &bookTitle)
{
	cout << "Enter the Title\n";
	getline(cin, bookTitle);
	// cin.ignore(1); - this cannot be used now, as get line() was used, not cout. It would cause the second entry (price) needed to press Enter twice
}

void price(float &bookPrice)
{
	cout << "Enter the Price\n";
	cin >> bookPrice;
	cin.ignore(1); //ignores the new line character
}

float total(int bookQuantity, float bookPrice)
{
    float bookTotal;

	bookTotal = bookPrice * bookQuantity;
	return bookTotal;
}
