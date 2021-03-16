#include "PhoneBook.h"
#include <iostream>

int PhoneBook::getCountContacts() const {
	return _countContacts;
}

void PhoneBook::addContact()  {
	std::string temp;
	if (_countContacts < 8)
	{
		std::cout << "Enter a First Name:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setFirstName(temp);

		std::cout << "Enter a Last Name:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setLastName(temp);

		std::cout << "Enter a Nickname:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setNickname(temp);

		std::cout << "Enter a Login:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setLogin(temp);

		std::cout << "Enter a Postal Address:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setPostalAddress(temp);

		std::cout << "Enter a Email Address:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setEmailAddress(temp);

		std::cout << "Enter a Phone Number:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setPhoneNumber(temp);

		std::cout << "Enter a Birthday Day:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setBirthdayDate(temp);

		std::cout << "Enter a Favorite Meal:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setFavoriteMeal(temp);

		std::cout << "Enter a UnderWear Color:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setUnderwearColor(temp);

		std::cout << "Enter a Darkest Secret:";
		std::getline(std::cin, temp);
		_contact[_countContacts].setDarkestSecret(temp);
		_countContacts++;
	}
	else
	{
		std::cout << "PhoneBook Is Full!!!" << std::endl;
	}
}

PhoneBook::PhoneBook() : _countContacts(0) {
	std::cout << "PhoneBook created!\n" << std::endl;
}

Contact PhoneBook::getContact(int contactIndex) const {
		return _contact[contactIndex - 1];
}

void PhoneBook::searchContact() const {
	std::cout 	<< "|-------------------------------------------|" << std::endl;
	std::cout	<< "|" << "  index   "
				<< "|" << "First name"
				<< "|" << "Last  name"
				<< "|" << " Nickname "
				<< "|" << std::endl;
	std::cout 	<< "|-------------------------------------------|" << std::endl;
	for (int i = 1; i <= _countContacts; ++i) {
		std::cout << "|" << "         " << i;
		std::cout << "|";printLine(_contact[i - 1].getFirstName());
		std::cout << "|";printLine(_contact[i - 1].getLastName());
		std::cout << "|";printLine(_contact[i - 1].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout 	<< "|-------------------------------------------|" << std::endl;
	std::cout << "Enter a index: ";
	std::string num_s;
	std::cin >> num_s;
	std::cin.ignore(32767, '\n');
	for (size_t i = 0; i < num_s.length(); ++i) {
		if (!std::isdigit(num_s[i]))
		{
			std::cout << "WRONG INPUT!" << std::endl;
			return;
		}
	}
	if (num_s.length() > 2)
	{
		std::cout << "index is out of range!" << std::endl;
	}
	else
	{
		int num = std::stoi(num_s);
		if (_countContacts > 0 && (num > 0 && num <= _countContacts))
			printContact(getContact(num));
		else
			std::cout << "index is out of range!" << std::endl;
	}
}

void PhoneBook::printLine(const std::string &string) {
	if (string.length() > 10)
	{
		std::cout << string.substr(0, 9) << ".";
	} else{
		for (size_t i = 0; i < 10 - string.length(); ++i) {
			std::cout << " ";
		}
		std::cout << string;
	}
}

void PhoneBook::printContact(Contact contact) const {
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Login: " << contact.getLogin() << std::endl;
	std::cout << "Postal Address: " << contact.getPostalAddress() << std::endl;
	std::cout << "Email Address: " << contact.getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Birthday Day: " << contact.getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << contact.getFavoriteMeal() << std::endl;
	std::cout << "UnderWear Color: " << contact.getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::getMenu() const {
	std::cout << "-------------MENU-------------" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "Select operation: " << std::endl;
	std::cout << "------------------------------" << std::endl;
}
