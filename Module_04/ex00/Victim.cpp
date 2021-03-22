// CLion
// Created by Foster Grisella on 3/22/21 18:43.
//


#include "Victim.hpp"


Victim::Victim() {
	_name = nullptr;
}

Victim::Victim(const std::string &name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void Victim::introduce() const {
	std::cout << "I'm " << _name <<" and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const Victim &other) {
	*this = other;
}

Victim &Victim::operator=(const Victim &other) {
	if (this == &other)
		return *this;
	_name = other._name;
	return *this;
}

const std::string &Victim::getName() const {
	return _name;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim) {
	os << "I'm " << victim.getName() <<" and I like otters!" << std::endl;
	return os;
}

