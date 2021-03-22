// CLion
// Created by Foster Grisella on 3/22/21 20:13.
//


#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) {
	*this = other;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other) {
	Enemy::operator=(other);
	return *this;
}
