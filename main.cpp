#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
#include <cctype>
#include <iostream>
#include <iomanip>
#include <cstdlib>  //for system("CLS") - clears screen

using namespace std;

//prototype functions
int selectMenu(int &);
void anotherTransaction(char &);


int main()
{
    char anotherTrans = 'Y';
    int selection =0;

    //process the menu until user does not want to exit (option 4)
    while (selection != 4)
    {
        system("CLS"); //clear the screen

        //menu
        cout << setw(25) << "Serendipity Book Store\n";
        cout << setw(19) << "Main Menu\n\n";
        cout << "1. Cashier Module\n";
        cout << "2. Inventory Database Module\n";
        cout << "3. Report Module\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice.\n";

        //make your choice

        cin >> selection;
        selectMenu(selection);

        //here, user is coming from previously selected module
        //based on the selection from main menu, give user appropriate response and options
        //THIS IS NOT TO MAKE A SELECTION!
        //when cashier module was processed
        //if user entered 'n', main menu is shown, otherwise he is directed back to the menu option he came from

        while (toupper(anotherTrans) != 'N' && selection == 1)//TODO - for now it's only for cashier module, other modules are not yet finished
        {
            if (selection == 1)
        {
        //check if another transaction from the module user is in is desired
            cout << "Would you like another transaction: Y / N ";
            cin >> anotherTrans;
            anotherTransaction(anotherTrans);

            //choose whether to process another cashier transaction
            if (toupper(anotherTrans) == 'Y')
            {
                //if yes, go to cashier function (passing 1 to selectMenu)
                selection = 1;
                selectMenu(selection);
            }
            else
            {
                continue; //if no, then just go back to main menu
            }
        }
        //when inventory module was processed
        else if (selection == 2)
        {
            continue; //do nothing and simply return to main menu
        }
        //when report module was processed
        else if (selection == 3)
        {
            continue; //do nothing and simply return to main menu
        }
        }

    }

    exit(0);
	return 0;
}

int selectMenu(int &selection)
{
	//validate input
    while (selection != 1 && selection !=2 && selection !=3 && selection !=4)
    {
        cout << "Please enter your choice: 1, 2, 3, 4\n";
        cin >> selection;
    }

	switch (selection)
	{int selection;
		case 1:
			system("CLS");
			cashier(); //go to cashier
			break;
		case 2:
			system("CLS");
			invmenu(); // go to invent //choose whether to process another transaction
			break;
		case 3:
			system("CLS");
			reports(); // go to reports
			//cin.ignore();
			break;
		case 4:
		    cout << "Good Bye\n"; //exit
			break;
		default:
			cout << "UNEXPECTED ERROR! EXITING NOW\n";
			exit(0);
	}

	return selection;
}

void anotherTransaction(char &anotherTrans)
{
    //validate input
	while (toupper(anotherTrans) != 'Y' && toupper(anotherTrans) != 'N')
    {
        cout << "Please enter Y or N\n";
        cin >> anotherTrans;
    }
}
