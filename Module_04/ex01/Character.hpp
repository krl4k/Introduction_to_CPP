// CLion
// Created by Foster Grisella on 3/22/21 20:20.
//


#ifndef TEST_CHARACTER_HPP
#define TEST_CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
public:

	Character();

	Character(std::string const & name);

	virtual ~Character();

	Character(const Character &other);

	Character &operator=(const Character &other);

	void recoverAP();

	void equip(AWeapon* weapon);

	void attack(Enemy* &enemy);

	const std::string &getName() const;

	int getAp() const;

	AWeapon *getWeapon() const;

private:
	std::string _name;
	int			_ap;
	AWeapon		*_weapon;
};

std::ostream &operator<<(std::ostream &os, const Character &character);


#endif //TEST_CHARACTER_HPP
