//
// Created by Foster Grisella on 3/16/21.
//

#include "Human.hpp"

Human::Human() {
	_brain = new Brain();
}

std::string Human::identify() const {
	return _brain->identify();
}

const Brain *Human::getBrain() const {
	return _brain;
}
