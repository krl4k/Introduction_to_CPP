// CLion
// Created by Foster Grisella on 3/19/21 16:06.
//


#ifndef TEST_CLAPTRAP_HPP
#define TEST_CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
public:

	ClapTrap();

	ClapTrap(const std::string &name);

	virtual ~ClapTrap();

	ClapTrap(const ClapTrap &other);

	ClapTrap &operator=(const ClapTrap &other);

	virtual void rangedAttack(const std::string &target);
	virtual void meleeAttack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_maxHitPoint;
	unsigned int	_energyPoint;
	unsigned int	_maxEnergyPoint;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
	unsigned int	_damage;
	unsigned int	_repairedHit;
private:
};


#endif //TEST_CLAPTRAP_HPP
