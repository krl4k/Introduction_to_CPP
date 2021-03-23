// CLion
// Created by Foster Grisella on 3/23/21 13:22.
//


#ifndef TEST_CHARACTER_HPP
#define TEST_CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter{
public:

	Character();

	Character(const std::string &name);

	virtual ~Character();

	Character(const Character &other);

	Character &operator=(const Character &other);

	const std::string &getName() const ;

	void equip(AMateria *m) ;

	void unequip(int index) ;

	void use(int index, ICharacter &target) ;

private:
	std::string _name;
	AMateria *_materia[4];

};


#endif //TEST_CHARACTER_HPP
