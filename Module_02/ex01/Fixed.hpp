// CLion
// Created by Foster Grisella on 3/18/21 11:43.
//


#ifndef TEST_FIXED_HPP
#define TEST_FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:

	Fixed();

	Fixed(int number);
	Fixed(float number);

	~Fixed();

	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);

	float toFloat (void) const;
	int	toInt(void) const;

	int getRawBits(void) const;

private:
	static const int	_numberOfFractionalBits = 8;
	int	_fixedPointValue;
};

std::ostream &operator<< (std::ostream &out, const Fixed &fixed);

#endif //TEST_FIXED_HPP
