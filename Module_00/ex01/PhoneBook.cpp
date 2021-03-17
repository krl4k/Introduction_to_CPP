#include "PhoneBook.h"
#include <iostream>

int PhoneBook::getCountContacts() const {
	return _countContacts;
}

const std::string getField(const std::string &field)
{
	std::string string;

	while (1)
	{
		std::cout << "Enter a " << field << ": ";
		std::getline(std::cin, string);
		if (std::cin.eof())
		{
			std::cout << "\nGOODBUY!" << std::endl;
			exit(0);
		}
		if (field == "Birthday Day")
		{
			bool bValid = true;
			for (unsigned int nIndex = 0; nIndex < string.length(); nIndex++)
				if (!isdigit(string[nIndex]) && string[nIndex] != '.')
				{
					bValid = false;
					break;
				}
			if (!bValid)
				continue;
		}
		if (std::cin.fail()) // если никакого извлечения не произошло
		{
			std::cin.clear(); // то сбрасываем все текущие флаги состояния и устанавливаем goodbit, чтобы иметь возможность использовать функцию ignore()
			std::cin.ignore(32767, '\n'); // очищаем поток от мусора
			continue; // просим пользователя ввести свой возраст еще раз
		}
		if (string.empty())
		{
			std::cout << "Fail input. Try again!!!" << std::endl;
			continue;
		} else
			break;
	}
	return string;
}

void PhoneBook::addContact()  {
	std::string temp;
	if (_countContacts < 8)
	{
		_contact[_countContacts].setFirstName(getField("First name"));
		_contact[_countContacts].setLastName(getField("Last name"));
		_contact[_countContacts].setNickname(getField("Nickname"));
		_contact[_countContacts].setLogin(getField("Login"));
		_contact[_countContacts].setPostalAddress(getField("Postal Address"));
		_contact[_countContacts].setEmailAddress(getField("Email address"));
		_contact[_countContacts].setPhoneNumber(getField("Phone Number"));
		_contact[_countContacts].setBirthdayDate(getField("Birthday Day"));
		_contact[_countContacts].setFavoriteMeal(getField("Favorite meal"));
		_contact[_countContacts].setUnderwearColor(getField("Underwear Color"));
		_contact[_countContacts].setDarkestSecret(getField("Darkest Secret"));
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
	std::getline(std::cin, num_s);
//	std::cin.ignore(32767, '\n');
	if (std::cin.eof())
	{
		std::cout << "GOODBUY!" << std::endl;
		exit(1);
	}
	if (num_s.empty())
	{
		std::cout << "WRONG INPUT!" << std::endl;
		return;
	}
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
