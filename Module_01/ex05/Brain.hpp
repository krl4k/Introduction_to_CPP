//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_BRAIN_HPP
#define TEST_BRAIN_HPP
#include <string>
#include <iostream>

class Brain {
private:
	int	_volume;
	int _numberOfNeurons;
public:
	Brain();

	int getNumberOfNeurons() const;

	void setNumberOfNeurons(int numberOfNeurons);

	virtual ~Brain();

	std::string identify() const;
};


#endif