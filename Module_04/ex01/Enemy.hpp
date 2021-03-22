// CLion
// Created by Foster Grisella on 3/22/21 20:05.
//


#ifndef TEST_ENEMY_HPP
#define TEST_ENEMY_HPP
#include <string>
#include <iostream>

class Enemy {
public:

	Enemy();

	Enemy(int hp, std::string const & type);

	virtual ~Enemy();


	Enemy(const Enemy &other);

	Enemy &operator=(const Enemy &other);

	int getHp() const;
	const std::string &getType() const;

	virtual void takeDamage(int damage);

private:
	int _hp;
	std::string _type;
};


#endif //TEST_ENEMY_HPP
