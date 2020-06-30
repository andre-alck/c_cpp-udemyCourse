/*
Author: André S. A. de Carvalho
Program description:
	Asks the user if he wants to see the current username, change the username, change the password or quit.
		If he wants to see the current username {
			    Inserts a message informing the current username;
                Asks if the user wants to run the program again.
			}

        If he wants to change the current username {
			    Asks the user to insert a new username;
                Inserts a message informing the current username;
                Asks if the user wants to run the program again.
			}

        If he wants to change the password {
            Asks the password and, if it's right, the program will wait for the user to insert the new password;
            Inserts a message informing the new password.
            Asks if the user wants to run the program again.
		}

        If he wants to quit {
            Asks if the user wants to run the program again.
        }

        If the user inserts any number bigger than 0, it will run again, otherwise, the program will quit.
*/

#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;

/*
Prototyping the checkCoice(), passwordChanging(), displayMenu() & clearConsole functions.
*/
int checkCoice(int userSelection);
void clearConsole(void);
void displayMenu(void);
void passwordChanging(void);

/*
The original standard username.
*/
string username = "user01";

/*
The original password the user should know (in case he wants to change it) is "pass123".
*/
string password = "pass123";

int main(void)
{
    int x = 1;
    do
    {
        displayMenu();

        cout << "Enter a number to select an option: " << flush;
        int userSelection;
        cin >> userSelection;
        /*
        cin.ignore() will clear the buffer so when the function getline is called(), the stream will be clear. 
        */
        cin.ignore();

        checkCoice(userSelection);

        /*
        If the user inserts 1 or any number bigger than 0: the program will restart.
        If the user inserts 0: the program will quit.
        */
        cout << endl
             << "0.\tQuit." << endl;
        cout << "1.\tRun again." << endl;
        cout << endl
             << "Enter a number to select an option: " << flush;
        cin >> x;
        cout << endl;
        clearConsole();
    } while (x > 0);

    cout << "Quitting application...";
    return EXIT_SUCCESS;
}

void displayMenu(void)
{
    cout << "1.\tSee current username." << endl;
    cout << "2.\tChange username." << endl;
    cout << "3.\tChange password." << endl;
    cout << "4.\tQuit." << endl
         << endl;
}

int checkCoice(int userSelection)
{
    if (userSelection == 1)
    {
        cout << "Current username: " << username << endl;
    }
    else if (userSelection == 2)
    {
        cout << "Insert the new username: " << flush;
        getline(cin, username);

        cout << "New username: " << username << endl;
    }
    else if (userSelection == 3)
    {
        passwordChanging();
    }
    else
    {
        return EXIT_SUCCESS;
    }
}

void passwordChanging(void)
{
    /*
    A string variable is created so there won't be any problems with white spaces.
	If the user types a wrong password, the while loop will ensure that he won't be able to proceed withou knowing the right password.
    */
    string userPassword;
    while (userPassword != password)
    {
        cout << "Insert the password: " << flush;
        getline(cin, userPassword);
    }

    cout << endl
         << "Insert the new password: " << flush;
    getline(cin, password);
    cout << "The new password is: " << password << endl;
}

void clearConsole(void)
{
#ifdef _WIN32
    system("cls");
#else
    /*
    Assume POSIX
    */
    system("clear");
#endif
}