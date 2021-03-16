#ifndef PONY_HPP
#define PONY_HPP
#include <string>


class Pony {
private:
	std::string _name;
	int	_age;
	std::string _color;

public:
	Pony(const std::string &name, int age, const std::string &color);

	void doMagic() const;

	virtual ~Pony();

	void doGreeting();
};


#endif