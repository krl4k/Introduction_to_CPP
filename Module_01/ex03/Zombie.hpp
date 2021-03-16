#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
private:
	std::string _name;
	std::string _type;

public:
	Zombie(const std::string &name, const std::string &type);
	typedef enum
	{
		Big_Fire,
		Screamers,
		Giant
	}		Types;

	Zombie();

public:
	void announce() const;

};


#endif
