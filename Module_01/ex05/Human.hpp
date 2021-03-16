//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_HUMAN_HPP
#define TEST_HUMAN_HPP
#include "Brain.hpp"

class Human {
private:
	const Brain *_brain;
public:
	Human();
	std::string identify() const;

	const Brain *getBrain() const;
};


#endif //TEST_HUMAN_HPP
