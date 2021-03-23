// CLion
// Created by Foster Grisella on 3/23/21 09:57.
//


#ifndef TEST_ISPACEMARINE_HPP
#define TEST_ISPACEMARINE_HPP

#include <string>
#include <iostream>


class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};


#endif //TEST_ISPACEMARINE_HPP
