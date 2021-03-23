// CLion
// Created by Foster Grisella on 3/23/21 12:48.
//


#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0){
}

AMateria::~AMateria() {

}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this == &other)
		return *this;
	_type = other._type;
	_xp = other._xp;
	return *this;
}

unsigned int AMateria::getXP() const {
	return _xp;
}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
}