//
// Created by Foster Grisella on 3/16/21.
//

#include "Human.hpp"

Human::Human() {

}

std::string Human::identify() const {
	return _brain.identify();
}

const Brain &Human::getBrain() const {
	return _brain;
}

Human::~Human() {
	std::cout << "Human is Destroyed!" << std::endl;
}
