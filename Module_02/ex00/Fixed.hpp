// CLion
// Created by Foster Grisella on 3/18/21 11:43.
//


#ifndef TEST_FIXED_HPP
#define TEST_FIXED_HPP
#include <iostream>
#include <string>

class Fixed {
public:

	Fixed();

	~Fixed();

	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;

private:
	static const int	_numberOfFractionalBits = 8;
	int	_fixedPointValue;
};


#endif //TEST_FIXED_HPP
