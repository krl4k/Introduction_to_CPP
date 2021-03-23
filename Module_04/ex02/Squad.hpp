// CLion
// Created by Foster Grisella on 3/23/21 10:16.
//


#ifndef TEST_SQUAD_HPP
#define TEST_SQUAD_HPP

#include <string>
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad{
public:

	Squad();

	Squad(int count);

	virtual ~Squad();

	Squad(const Squad &other);


	Squad &operator=(const Squad &other);

	virtual int getCount() const;

	virtual ISpaceMarine *getUnit(int i) const;

	virtual int push(ISpaceMarine *marine);

private:
	int _currentCount;
	int _count;
	ISpaceMarine **_units;

};


#endif //TEST_SQUAD_HPP
