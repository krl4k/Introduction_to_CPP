// CLion
// Created by Foster Grisella on 3/23/21 14:04.
//


#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::~Cure() {
}

Cure::Cure(const Cure &other) : AMateria(other){
}

Cure &Cure::operator=(const Cure &other) {
	AMateria::operator=(other);
	return *this;
}

AMateria *Cure::clone() const {
	return (new Cure());
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " <<  target.getName() << " wounds *" << std::endl;
}
