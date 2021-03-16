#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.h"

class PhoneBook {
public:

	PhoneBook();
	int		getCountContacts() const;
	void	getMenu() const;
	void	searchContact() const;
	Contact getContact(int contactIndex) const;
	void	addContact();

private:
	Contact _contact[8];
	int		_countContacts;
	static void printLine(const std::string &basicString) ;

	void printContact(Contact contact) const;
};


#endif