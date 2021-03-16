//
// Created by Foster Grisella on 3/16/21.
//

#include "Weapon.hpp"


const std::string &Weapon::getType() const {
	return _type;
}

void Weapon::setType(const std::string &type) {
	_type = type;
}

Weapon::Weapon(const std::string &type) {
	_type = type;
}
