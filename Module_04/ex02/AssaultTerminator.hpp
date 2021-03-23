// CLion
// Created by Foster Grisella on 3/23/21 10:39.
//


#ifndef TEST_ASSAULTTERMINATOR_HPP
#define TEST_ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:

	AssaultTerminator();

	virtual ~AssaultTerminator();

	AssaultTerminator(const AssaultTerminator &other);

	AssaultTerminator &operator=(const AssaultTerminator &other);


	ISpaceMarine *clone() const;

	void battleCry() const ;

	void rangedAttack() const;

	void meleeAttack() const;

private:

};


#endif //TEST_ASSAULTTERMINATOR_HPP
