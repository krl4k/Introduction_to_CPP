#include <iostream>
#include "PhoneBook.h"

int main()
{
	PhoneBook phoneBook;
	std::string operation;
	while (true) {
		phoneBook.getMenu();
		std::getline(std::cin, operation);
		if (std::cin.eof())
			exit(0);

		if (operation == "EXIT")
			return (0);
		else if (operation == "SEARCH")
			phoneBook.searchContact();
		else if (operation == "ADD")
			phoneBook.addContact();
		else
			std::cout << "Try again!" << std::endl;
	}
	return (0);
}