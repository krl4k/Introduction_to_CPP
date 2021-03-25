// CLion
// Created by Foster Grisella on 3/25/21 18:18.
//


#ifndef TEST_CAST_HPP
#define TEST_CAST_HPP

#include <string>
#include <iostream>
#include <iomanip>


class Cast {
public:

	Cast();

	Cast(const std::string &string);

	virtual ~Cast();

	Cast(const Cast &other);

	Cast &operator=(const Cast &other);

	void toChar() const;
	void toInt() const;
	void toFloat() const;
	void toDouble() const;

private:
	std::string _string;
};


#endif //TEST_CAST_HPP
