#include <iostream>
#include <iomanip>
#include <cstdlib>  //for system("CLS") - clears screen

using namespace std;

//prototype functions
void selectInventory(int);
void lookUpBook();
void addBook();
void editBook();
void deleteBook();

void invmenu()
{
    int selection;

	cout << setw(25) << "Serendipity Book Store\n";
	cout << setw(24) << "Inventory Database\n\n";

	cout << "1. Look up a book\n";
	cout << "2. Add a book\n";
	cout << "3. Edit book record\n";
	cout << "4. Delete book\n";
	cout << "5. Back to Main Menu\n\n";
	cout << "Enter your choice.\n\n";

    cin >> selection;
	selectInventory(selection);

}

void selectInventory(int selection)
{
    //input validation
    while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5)
    {
        cout << "Wrong selection. Please chose from the menu\n";
        cin >> selection;
    }

    //chosen selection
	switch (selection)
	{
		case 1:
			lookUpBook();
			break;
		case 2:
			addBook();
			break;
		case 3:
			editBook();
			break;
		case 4:
			deleteBook();
		case 5: //this simply returns back to main menu
			break;
		default:
			cout << "UNEXPECTED ERROR! EXITING NOW\n";
			exit(0);
	}

}

void lookUpBook()
{
	system("CLS");
	cout << "look up a book";
	cin.ignore(100);
}

void addBook()
{
	system("CLS");
	cout << "add a book";
	cin.ignore(100);
}

void editBook()
{
	system("CLS");
	cout << "edit a book";
	cin.ignore(100);
}

void deleteBook()
{
	system("CLS");
	cout << "delete a book";
	cin.ignore(100);
}
