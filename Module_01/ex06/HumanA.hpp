//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_HUMANA_HPP
#define TEST_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon	&_weapon;
public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack();

	void setWeapon(Weapon &weapon);
};


#endif //TEST_HUMANA_HPP
