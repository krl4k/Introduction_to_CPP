// CLion
// Created by Foster Grisella on 3/22/21 17:37.
//


#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
	_name = nullptr;
	_title = nullptr;
}


Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other) {
	*this = other;
}

void Sorcerer::introduce() const {
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
	if (this == &other)
		return *this;
	_name = other._name;
	_title = other._title;
	return *this;
}

const std::string &Sorcerer::getName() const {
	return _name;
}

const std::string &Sorcerer::getTitle() const {
	return _title;
}

void Sorcerer::polymorph(const Victim &) const {

}

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!"  << std::endl;
	return out;
}