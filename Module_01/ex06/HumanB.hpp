//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_HUMANB_HPP
#define TEST_HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB{
private:
	std::string	_name;
	Weapon	*_weapon;
public:
	void setWeapon(Weapon &weapon);

	HumanB(const std::string &name);

	void attack();

};


#endif //TEST_HUMANB_HPP
