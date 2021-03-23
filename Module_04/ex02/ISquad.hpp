// CLion
// Created by Foster Grisella on 3/23/21 09:55.
//


#ifndef TEST_ISQUAD_HPP
#define TEST_ISQUAD_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"


class ISquad {
public:

	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;

private:

};


#endif //TEST_ISQUAD_HPP
