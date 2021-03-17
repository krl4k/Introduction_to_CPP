//
// Created by Foster Grisella on 3/16/21.
//

#include <sstream>
#include "Brain.hpp"


std::string Brain::identify() const {
	std::stringstream stringstream;
	stringstream << this;
	std::string s;
	stringstream >> s;
	return s;
}

Brain::~Brain() {
	std::cout << this->identify() << std::endl;
	std::cout << "Brain is destroyed!" << std::endl;
}

Brain::Brain() {
}

void Brain::setNumberOfNeurons(int numberOfNeurons) {
	_numberOfNeurons = numberOfNeurons;
}

int Brain::getNumberOfNeurons() const {
	return _numberOfNeurons;
}
