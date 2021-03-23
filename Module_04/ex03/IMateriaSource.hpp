// CLion
// Created by Foster Grisella on 3/23/21 13:17.
//


#ifndef TEST_IMATERIASOURCE_HPP
#define TEST_IMATERIASOURCE_HPP

#include <string>
#include <iostream>

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

private:

};


#endif //TEST_IMATERIASOURCE_HPP
