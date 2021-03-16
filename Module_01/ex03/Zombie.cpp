#include "Zombie.hpp"

void Zombie::announce() const {
	std::cout << _name << "  " <<_type << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(const std::string &name, const std::string &type) : _name(name), _type(type) {}

Zombie::Zombie() {}
