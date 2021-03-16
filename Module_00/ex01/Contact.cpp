#include "Contact.h"
#include <iostream>

const std::string &Contact::getFirstName() const {
	return _firstName;
}

const std::string &Contact::getLastName() const {
	return _lastName;
}

const std::string &Contact::getNickname() const {
	return _nickname;
}

const std::string &Contact::getLogin() const {
	return _login;
}

const std::string &Contact::getPostalAddress() const {
	return _postalAddress;
}

const std::string &Contact::getEmailAddress() const {
	return _emailAddress;
}

const std::string &Contact::getPhoneNumber() const {
	return _phoneNumber;
}

const std::string &Contact::getBirthdayDate() const {
	return _birthdayDate;
}

const std::string &Contact::getFavoriteMeal() const {
	return _favoriteMeal;
}

const std::string &Contact::getUnderwearColor() const {
	return _underwearColor;
}

const std::string &Contact::getDarkestSecret() const {
	return _darkestSecret;
}


void Contact::setFirstName(const std::string &firstName) {
	_firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
	_lastName = lastName;
}

void Contact::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

void Contact::setLogin(const std::string &login) {
	_login = login;
}

void Contact::setPostalAddress(const std::string &postalAddress) {
	_postalAddress = postalAddress;
}

void Contact::setEmailAddress(const std::string &emailAddress) {
	_emailAddress = emailAddress;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	_phoneNumber = phoneNumber;
}

void Contact::setBirthdayDate(const std::string &birthdayDate) {
	_birthdayDate = birthdayDate;
}

void Contact::setFavoriteMeal(const std::string &favoriteMeal) {
	_favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(const std::string &underwearColor) {
	_underwearColor = underwearColor;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	_darkestSecret = darkestSecret;
}
