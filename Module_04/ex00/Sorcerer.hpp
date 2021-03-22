// CLion
// Created by Foster Grisella on 3/22/21 17:37.
//


#ifndef TEST_SORCERER_HPP
#define TEST_SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
public:

	Sorcerer();

	~Sorcerer();

	Sorcerer(const std::string &name, const std::string &title);

	Sorcerer(const Sorcerer &other);

	Sorcerer &operator=(const Sorcerer &other);

	void introduce() const;

	void polymorph(Victim const &) const;

	const std::string &getName() const;

	const std::string &getTitle() const;

private:
	std::string _name;
	std::string _title;
};

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif //TEST_SORCERER_HPP
