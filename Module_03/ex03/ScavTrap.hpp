// CLion
// Created by Foster Grisella on 3/19/21 18:37.
//


#ifndef TEST_SCAVTRAP_HPP
#define TEST_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:

	ScavTrap();

	~ScavTrap();

	ScavTrap(const std::string &name);

	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

	void challengeNewcomer() const;

private:

};


#endif //TEST_SCAVTRAP_HPP
