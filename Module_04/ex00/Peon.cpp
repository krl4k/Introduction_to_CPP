// CLion
// Created by Foster Grisella on 3/22/21 18:58.
//


#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon() : Victim() {
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other) {
}

Peon &Peon::operator=(const Peon &other) {
	Victim::operator=(other);
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
