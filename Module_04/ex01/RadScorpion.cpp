// CLion
// Created by Foster Grisella on 3/22/21 20:17.
//


#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other){
}

RadScorpion &RadScorpion::operator=(const RadScorpion &other) {
	Enemy::operator=(other);
	return *this;
}
