// CLion
// Created by Foster Grisella on 3/22/21 18:58.
//


#ifndef TEST_PEON_HPP
#define TEST_PEON_HPP
#include "Victim.hpp"

class Peon : public Victim{
public:

	Peon();

	virtual ~Peon();

	Peon(const std::string &name);

	Peon(const Peon &other);

	Peon &operator=(const Peon &other);

	void getPolymorphed() const;

private:

};


#endif //TEST_PEON_HPP
