// CLion
// Created by Foster Grisella on 3/23/21 12:48.
//


#ifndef TEST_AMATERIA_HPP
#define TEST_AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

#include "ICharacter.hpp"

class AMateria {
public:

	AMateria(std::string const &type);

	virtual ~AMateria();

	AMateria(const AMateria &other);

	AMateria &operator=(const AMateria &other);

	std::string const &getType() const; //Returns the materia type

	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria *clone() const = 0;

	virtual void use(ICharacter &target);

protected:
	std::string _type;
	unsigned int _xp;
};


#endif //TEST_AMATERIA_HPP
