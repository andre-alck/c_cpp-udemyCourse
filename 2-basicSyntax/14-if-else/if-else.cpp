/*
Author: André S. A. de Carvalho
Program description:
	Asks the user if he wants to change the password.
		If he wants it {
			Inserts a message informing that the user decided to change the password;
			
            Asks the passoword and, if it's right, the program will wait for the user to insert the new password;
		}

		If he doesn't want it {
			Inserts a message informing that the user decided to not change the password.
		}
		
    The program quits.
*/

#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;

int main(void)
{
    /*
    The original password the user should know (in case he wants to change it) is "pass123".
    */
    string password = "pass123";
    cout << "Would you like to change the password?" << endl
         << endl;

    cout << "Yes (y)" << endl;
    cout << "No (n)" << endl
         << endl;

    /*
    The user decision is stored in an string variable to be able to use the getline function, this way there wont be any problem with white spaces.
    */
    cout << "Enter your selection: " << flush;
    string userSelection;
    getline(cin, userSelection);

    /*
    If the user inserts anything besides "y" or "n", the program will quit since the getline() function receives as input a whole line.
    */
    if (userSelection == "y")
    {
        cout << "You have chosen to change the password." << endl
             << endl;

        /*
        Again, a new string variable is create so there wont be any problem with white spaces.
	    If the user types a wrong password, the while loop will ensure that he wont be able to proceed withou knowing the right password.
        */
        string userPassword;
        while (userPassword != password)
        {
            cout << "Insert the password: " << flush;
            getline(cin, userPassword);
            cout << flush;
        }

        cout << "Insert the new password: " << flush;
        getline(cin, password);
        cout << "The new password is: " << password << endl;
    }
    else if (userSelection == "n")
    {
        cout << "You have chosen to not change the password." << endl;
    }

    cout << endl;
    cout << "Quitting application..." << flush;
    return 0;
}