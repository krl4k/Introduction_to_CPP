// CLion
// Created by Foster Grisella on 3/20/21 11:32.
//


#ifndef TEST_SUPERTRAP_HPP
#define TEST_SUPERTRAP_HPP

#include <ostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap{
public:

	SuperTrap();

	SuperTrap(const std::string &name);

	virtual ~SuperTrap();

	SuperTrap(const SuperTrap &superTrap);

	SuperTrap &operator=(const SuperTrap &other);

	friend std::ostream &operator<<(std::ostream &os, const SuperTrap &trap);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
private:
	
};


#endif //TEST_SUPERTRAP_HPP
