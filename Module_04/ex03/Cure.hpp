// CLion
// Created by Foster Grisella on 3/23/21 14:04.
//


#ifndef TEST_CURE_HPP
#define TEST_CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
public:

	Cure();

	virtual ~Cure();

	Cure(const Cure &other);

	Cure &operator=(const Cure &other);

	AMateria *clone() const ;

	void use(ICharacter &target) ;

private:

};


#endif //TEST_CURE_HPP
