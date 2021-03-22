// CLion
// Created by Foster Grisella on 3/22/21 19:57.
//


#include "PowerFist.hpp"

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist &PowerFist::operator=(const PowerFist &other){
	AWeapon::operator=(other);
	return  *this;
}

PowerFist::~PowerFist() {
	std::cout << "PowerFist destructor!" << std::endl;
}
