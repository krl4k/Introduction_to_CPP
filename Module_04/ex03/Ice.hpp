// CLion
// Created by Foster Grisella on 3/23/21 13:28.
//


#ifndef TEST_ICE_HPP
#define TEST_ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
public:

	Ice();

	virtual ~Ice();

	Ice(const Ice &other);

	Ice &operator=(const Ice &other);

	AMateria *clone() const;

	void use(ICharacter &target);

private:

};


#endif //TEST_ICE_HPP
