// CLion
// Created by Foster Grisella on 3/23/21 10:29.
//


#ifndef TEST_TACTICALMARINE_HPP
#define TEST_TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
public:

	TacticalMarine();

	virtual ~TacticalMarine();

	TacticalMarine(const TacticalMarine &other);

	TacticalMarine &operator=(const TacticalMarine &other);

	ISpaceMarine *clone() const ;

	void battleCry() const ;

	void rangedAttack() const ;

	void meleeAttack() const ;

private:

};


#endif //TEST_TACTICALMARINE_HPP
