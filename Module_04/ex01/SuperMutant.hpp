// CLion
// Created by Foster Grisella on 3/22/21 20:13.
//


#ifndef TEST_SUPERMUTANT_HPP
#define TEST_SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:

	SuperMutant();

	virtual ~SuperMutant();

	SuperMutant(const SuperMutant &other);

	SuperMutant &operator=(const SuperMutant &other);

	void takeDamage(int damage) ;

private:

};


#endif //TEST_SUPERMUTANT_HPP
