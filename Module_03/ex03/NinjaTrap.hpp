// CLion
// Created by Foster Grisella on 3/19/21 19:28.
//


#ifndef TEST_NINJATRAP_HPP
#define TEST_NINJATRAP_HPP

#include <ostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
public:

	NinjaTrap();

	NinjaTrap(const std::string &name);

	~NinjaTrap();

	NinjaTrap(const NinjaTrap &other);

	NinjaTrap &operator=(const NinjaTrap &other);

	void ninjaShoebox (const FragTrap &fragTrap);
	void ninjaShoebox (const ScavTrap &scavTrap);
	void ninjaShoebox (const ClapTrap &clapTrap);
	void ninjaShoebox (const NinjaTrap &ninjaTrap);

private:

};


#endif //TEST_NINJATRAP_HPP
