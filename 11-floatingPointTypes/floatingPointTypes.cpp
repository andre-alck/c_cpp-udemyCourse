/*
Autor: André S. A. de Carvalho
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(void)
{
    int nValue = 1000000;
    float fValue = 1000000;
    double dValue = 1000000;
    long double lValue = 1000000;

    cout << fixed << setprecision(20) << nValue << endl;
    cout << fixed << setprecision(20) << fValue << endl;
    cout << fixed << setprecision(20) << dValue << endl;
    cout << fixed << setprecision(20) << lValue << endl;

    return 0;
}

//fixed: ensure that the numbers displayed will be in decimal form, (e.g.: not a number with an exponent).
//setprecision(20): displays 20 digits after point.

//why not to use "using namespace std;": https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice