// CLion
// Created by Foster Grisella on 3/27/21 15:32.
//


#ifndef TEST_SPAN_HPP
#define TEST_SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>


class span {
public:

	span();

	span(int size);

	virtual ~span();

	span(const span &other);

	span &operator=(const span &other);

	int shortestSpan();
	int longestSpan();

	void addNumber(const int &number);

	void addNumber(std::vector<int>::iterator b, std::vector<int>::iterator end);

	int& operator[] (const int index);

	int getSize() const;

//	void addNumber(std::iterator)
private:
	size_t _size;
	std::vector<int> _array;
	std::vector<int> _sortedArray;
};


#endif //TEST_SPAN_HPP
