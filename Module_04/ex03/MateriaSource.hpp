// CLion
// Created by Foster Grisella on 3/23/21 14:23.
//


#ifndef TEST_MATERIASOURCE_HPP
#define TEST_MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource{
public:

	MateriaSource();

	virtual ~MateriaSource();

	MateriaSource(const MateriaSource &other);

	MateriaSource &operator=(const MateriaSource &other);


	void learnMateria(AMateria *materia) ;

	AMateria *createMateria(const std::string &type);

private:
	AMateria *_source[4];

};


#endif //TEST_MATERIASOURCE_HPP
