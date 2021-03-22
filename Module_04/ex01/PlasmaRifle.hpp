// CLion
// Created by Foster Grisella on 3/22/21 19:45.
//


#ifndef TEST_PLASMARIFLE_HPP
#define TEST_PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:

	PlasmaRifle();

	virtual ~PlasmaRifle();

	PlasmaRifle(const PlasmaRifle &other);

	PlasmaRifle &operator=(const PlasmaRifle &other);

	PlasmaRifle(const std::string &name, int apCost, int damage);

	void attack() const;

private:

};


#endif //TEST_PLASMARIFLE_HPP
