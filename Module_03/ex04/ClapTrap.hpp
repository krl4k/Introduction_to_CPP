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

	const std::string &getName() const;


	virtual void rangedAttack(const std::string &target);
	virtual void meleeAttack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	unsigned int getHitPoint() const;

	unsigned int getMaxHitPoint() const;

	unsigned int getEnergyPoint() const;

	unsigned int getMaxEnergyPoint() const;

	unsigned int getLevel() const;

	unsigned int getMeleeAttackDamage() const;

	unsigned int getRangedAttackDamage() const;

	unsigned int getArmorDamageReduction() const;

	unsigned int getDamage() const;

	unsigned int getRepairedHit() const;

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

std::ostream &operator<<(std::ostream &os, const ClapTrap &trap);


#endif //TEST_CLAPTRAP_HPP
