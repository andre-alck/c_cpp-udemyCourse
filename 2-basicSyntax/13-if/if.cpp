#include <iostream>
#include <cstring> //https://stackoverflow.com/questions/7673597/include-string-or-string-h/7673625

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;

int main(void)
{
    string password = "pass123";
    cout << "Enter the password: " << flush;

    string userInput;
    cin >> userInput;

    if (userInput == password)
    {
        cout << "Right password." << endl;
    }
    else
    {
        cout << "Wrong password." << endl;
    }

    return 0;
}