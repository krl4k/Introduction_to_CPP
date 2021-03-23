// CLion
// Created by Foster Grisella on 3/23/21 13:28.
//


#include "Ice.hpp"

AMateria *Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice() : AMateria("ice"){
}

Ice::~Ice() {

}

Ice::Ice(const Ice &other) :AMateria(other) {
}

Ice &Ice::operator=(const Ice &other) {
	AMateria::operator=(other);
	return *this;
}
