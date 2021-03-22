// CLion
// Created by Foster Grisella on 3/22/21 19:45.
//


#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}


void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	std::cout << "PlasmaRifle destructor!" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other){

}

PlasmaRifle::PlasmaRifle(const std::string &name, int apCost, int damage) : AWeapon(name, apCost, damage) {

}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &other) {
	AWeapon::operator=(other);
	return *this;
}
