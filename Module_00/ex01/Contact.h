#ifndef CONTACT_H
#define CONTACT_H
#include <string>

class Contact {
public:
	const std::string &getFirstName() const;

	const std::string &getLastName() const;

	const std::string &getNickname() const;

	const std::string &getLogin() const;

	const std::string &getPostalAddress() const;

	const std::string &getEmailAddress() const;

	const std::string &getPhoneNumber() const;

	const std::string &getBirthdayDate() const;

	const std::string &getFavoriteMeal() const;

	const std::string &getUnderwearColor() const;

	const std::string &getDarkestSecret() const;

	void setFirstName(const std::string &firstName);

	void setLastName(const std::string &lastName);

	void setNickname(const std::string &nickname);

	void setLogin(const std::string &login);

	void setPostalAddress(const std::string &postalAddress);

	void setEmailAddress(const std::string &emailAddress);

	void setPhoneNumber(const std::string &phoneNumber);

	void setBirthdayDate(const std::string &birthdayDate);

	void setFavoriteMeal(const std::string &favoriteMeal);

	void setUnderwearColor(const std::string &underwearColor);

	void setDarkestSecret(const std::string &darkestSecret);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string	_login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;

};


#endif
