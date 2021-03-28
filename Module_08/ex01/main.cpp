// CLion
// Created by Foster Grisella on 3/27/21 15:33.
//


#include <list>
#include "span.hpp"
#include <array>

int RandomNumber () { return (std::rand()%1000000); }

void test()
{
	span sp = span(20);
	sp.addNumber(1);
	sp.addNumber(2);

	std::vector<int> vector(18);
	std::generate(vector.begin(), vector.end(), RandomNumber);
	try {
		sp.addNumber(vector.begin(), vector.end());
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "span" << std::endl;
	for (int i = 0; i < sp.getSize(); ++i) {
		std::cout << sp[i] << " ";
	}

	std::cout << "" << std::endl;
	std::cout << "vector" << std::endl;
	for (int i = 0; i < 2; ++i) {
		std::cout << "  ";
	}
	for (int i = 0; i < vector.size(); ++i) {
		std::cout << vector[i] << " ";
	}
	std::cout << "" << std::endl;
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;

}

void 	main_test(){
	span sp = span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void 	crazy_test(){
	std::vector<int> vector(1000);
	std::generate(vector.begin(), vector.end(), RandomNumber);

	span span(1003);
	span.addNumber(0);
	span.addNumber(1);
	span.addNumber(3);
	try {
		span.addNumber(vector.begin(), vector.end());
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
}

int main()
{
	srand(time(0));
//	main_test();
//	test();
	crazy_test();
	return 0;
	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
//	std::generate(vector.begin(), vector.end(), RandomNumber);

	std::vector<int>::iterator it_begin = vector.begin();
//	std::vector<int>::iterator it_end = vector.end();
//	std::cout << it_end - it_begin << std::endl;
//	for (std::vector<int>::iterator wrapIter = vector.begin();
//		 wrapIter != vector.end(); ++wrapIter) {
//		std::cout << *wrapIter << std::endl;
//	}
	std::cout << *it_begin++ << std::endl;
	std::cout << *it_begin++ << std::endl;
	std::cout << *it_begin++ << std::endl;


	return (0);
}
