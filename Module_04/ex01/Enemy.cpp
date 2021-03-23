// CLion
// Created by Foster Grisella on 3/22/21 20:05.
//


#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type){

}

Enemy::~Enemy() {
}

Enemy::Enemy() {
	std::cout << "enemy constructor!!!" << std::endl;
}

Enemy::Enemy(const Enemy &other) {
	_type = other._type;
	_hp = other._hp;
}

Enemy &Enemy::operator=(const Enemy &other) {
	if (this == &other)
		return *this;
	_hp = other._hp;
	_type = other._type;
	return *this;
}

int Enemy::getHp() const {
	return _hp;
}

const std::string &Enemy::getType() const {
	return _type;
}

void Enemy::takeDamage(int damage) {
	if (_hp > 0)
	{
		if (damage > _hp)
			_hp = 0;
		else
			_hp -= damage;
	}
}
