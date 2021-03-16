//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_WEAPON_HPP
#define TEST_WEAPON_HPP
#include <string>
#include <iostream>

class Weapon {
private:
	std::string _type;
public:

	Weapon(const std::string &type);

	const std::string &getType() const;
	void setType(const std::string &type);

public:
};


#endif //TEST_WEAPON_HPP
