#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "person.h"

class Person {
    private:
        std::string favoriteGame = "";

    public:
        Person();
        ~Person();

        std::string name = "Andre";
        int age = 17;

        std::string getFavoriteGame (void);
        void setFavoriteGame (std::string newFavoriteGame);
};

#endif
