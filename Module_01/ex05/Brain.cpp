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
