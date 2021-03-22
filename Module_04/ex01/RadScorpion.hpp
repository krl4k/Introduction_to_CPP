// CLion
// Created by Foster Grisella on 3/22/21 20:17.
//


#ifndef TEST_RADSCORPION_HPP
#define TEST_RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy{
public:

	RadScorpion();

	virtual ~RadScorpion();

	RadScorpion(const RadScorpion &other);

	RadScorpion &operator=(const RadScorpion &other);

private:

};


#endif //TEST_RADSCORPION_HPP
