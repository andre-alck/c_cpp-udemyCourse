#ifndef USER_CLASS_H
#define USER_CLASS_H

#include <iostream>
#include <string>

class User {
	private:
		std::string username = "standard";
		std::string password = "password";

	public:
		User();
		void displayUsername (void);
		void changeUsername(void);
		void changePassword (void);
};

#endif
