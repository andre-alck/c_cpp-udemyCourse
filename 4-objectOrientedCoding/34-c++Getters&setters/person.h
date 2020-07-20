#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "person.h"

class Person
{
private:
	std::string name;

public:
	Person();
	std::string toString();
	void setName(std::string newName);
};

#endif
