// CLion
// Created by Foster Grisella on 3/22/21 19:57.
//


#ifndef TEST_POWERFIST_HPP
#define TEST_POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:

	PowerFist();

	virtual ~PowerFist();

	PowerFist(const PowerFist &other);

	PowerFist &operator=(const PowerFist &other);

	void attack() const;

private:

};


#endif //TEST_POWERFIST_HPP
