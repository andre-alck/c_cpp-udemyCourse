#include <iostream>
#include <string>

class User {
	private:
		std::string status = "Basic";

	public:
		std::string first_name = "";
		std::string last_name = "";

		std::string get_status(void) {
			return status;
		}
		void set_status(std::string status) {
			if(status == "Bronze" || status == "Prata" || status == "Ouro") {
				this-> status = status;
			} else {
				this-> status = "Invalid option";
			}
		}

		User(std::string first_name, std::string last_name, std::string status) {
			this-> first_name = first_name; //this-> first_name = part of the class; first_name = parameter
			this-> last_name = last_name;
			this-> status = status;
		}

		~User(void) {
			std::cout << "Destructor called" << std::endl;
		}
};

int main(void) {
	User user("andre", "carvalho", "irl");

	user.set_status("Prata");
	std::cout << user.get_status() << std::endl;

	return 0;
}
