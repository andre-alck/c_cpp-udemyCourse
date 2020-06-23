/*
Autor: André S. A. de Carvalho
*/

#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    char charValue = 114;
    int integerValue = 114;

    cout << "on the ascii table, 114 = " << charValue << endl;
    cout << "casting (works with other types too): " << charValue << "->" << (int)charValue << endl;

    cout << "sizeof char: " << sizeof(char) << " bytes" << endl;
    cout << "sizeof wchar_t: " << sizeof(wchar_t) << " bytes" << endl;

    return 0;
}