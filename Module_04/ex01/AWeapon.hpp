// CLion
// Created by Foster Grisella on 3/22/21 19:40.
//


#ifndef TEST_AWEAPON_HPP
#define TEST_AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon {
public:

	AWeapon();

	virtual ~AWeapon();

	AWeapon(const std::string &name, int apCost, int damage);

	AWeapon(const AWeapon &other);

	AWeapon &operator=(const AWeapon &other);

	const std::string &getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;

protected:
	std::string _name;
	int _APCost;
	int _Damage;


};

std::ostream &operator<<(std::ostream &os, const AWeapon &weapon);

#endif //TEST_AWEAPON_HPP
