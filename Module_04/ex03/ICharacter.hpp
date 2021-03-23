// CLion
// Created by Foster Grisella on 3/23/21 13:20.
//


#ifndef TEST_ICHARACTER_HPP
#define TEST_ICHARACTER_HPP

#include <string>
#include <iostream>

class AMateria;
#include "AMateria.hpp"

class ICharacter {

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria   *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

private:

};


#endif //TEST_ICHARACTER_HPP
