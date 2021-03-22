// CLion
// Created by Foster Grisella on 3/22/21 18:43.
//


#ifndef TEST_VICTIM_HPP
#define TEST_VICTIM_HPP


#include <string>
#include <iostream>

class Victim {
public:

	Victim();

	virtual ~Victim();

	Victim(const std::string &name);

	Victim(const Victim &other);

	Victim &operator=(const Victim &other);

	void introduce() const;

	virtual void getPolymorphed() const;

	const std::string &getName() const;

protected:
	std::string _name;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);


#endif //TEST_VICTIM_HPP
