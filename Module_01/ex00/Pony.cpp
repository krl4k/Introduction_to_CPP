//
// Created by Foster Grisella on 3/16/21.
//

#include "Pony.hpp"
#include <iostream>

Pony::Pony(const std::string &name, int age, const std::string &color) : _name(name), _age(age), _color(color) {
	std::cout << "Pony created!" << std::endl;
}

void Pony::doMagic() const {
	std::cout << _name << " do magic!" << std::endl;
}

Pony::~Pony() {
	std::cout << _name << " died!" << std::endl;
}

void Pony::doGreeting() {
	std::cout << "Hello! My name is " << _name << std::endl;
}
