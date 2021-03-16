//
// Created by Foster Grisella on 3/16/21.
//

#ifndef TEST_BRAIN_HPP
#define TEST_BRAIN_HPP
#include <string>

class Brain {
private:
	int	_volume;
	int _numberOfNeurons;
public:
	std::string identify() const;
};


#endif //TEST_BRAIN_HPP
