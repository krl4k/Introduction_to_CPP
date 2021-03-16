//
// Created by Foster Grisella on 3/16/21.
//

#include "HumanB.hpp"


void HumanB::attack() {
	std::cout << _name << " attack with " << _weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : _name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}





