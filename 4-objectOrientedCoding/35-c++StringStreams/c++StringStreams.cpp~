#include <iostream>
#include <string>
#include <sstream>
#include "person.h"

int main (void) {
    Person person;

    person.setFavoriteGame("Dead Cells");

    std::stringstream stringstr;
    stringstr << "Name is: " << person.name << "; Age is: " << person.age << "; Favorite Game is: " << person.getFavoriteGame();
    
    std::string personInfo = stringstr.str();
    std::cout << personInfo << std::endl;

    return 0;
}
