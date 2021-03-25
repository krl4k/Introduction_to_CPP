// CLion
// Created by Foster Grisella on 3/24/21 09:07.
//



#include <iostream>
#include <string>
#include <exception> // для std::exception
#include "Bureaucrat.hpp"

void test();

void test_exception();

int main()
{
//	test();
	test_exception();
}

void test_exception() {
	try {
		Bureaucrat bureaucrat("Buro1", 1);
	} catch (std::exception &exception) {
		std::cerr << "1: " << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Buro2", -11);
	}catch (std::exception &exception){
		std::cerr << "2: " << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Buro3", 153);
	}catch (std::exception &exception){
		std::cerr << "3: " << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Buro4", 149);
		bureaucrat.decGrade();
		std::cout << "dec2" << std::endl;
		bureaucrat.decGrade();
	}catch (std::exception &exception){
		std::cerr << "4: " << exception.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Buro5", 2);
		bureaucrat.incGrade();
		std::cout << "inc2" << std::endl;
		bureaucrat.incGrade();
	}catch (std::exception &exception){
		std::cerr << "5: " << exception.what() << std::endl;
	}
	//	Bureaucrat *bureaucrat;
//	try {
//		bureaucrat 	= new Bureaucrat("Buro 6", 0);
//	}catch (std::exception &exception){
//		std::cerr << "5: " << exception.what() << std::endl;
//		delete bureaucrat;
//	}
}

void test() {
	std::cout << "TEST------------" << std::endl;

	Bureaucrat bureaucrat("BuroTest", 1);
	std::cout << bureaucrat << std::endl;
	bureaucrat.decGrade();
	std::cout << bureaucrat << std::endl;
	bureaucrat.incGrade();
	std::cout << bureaucrat << std::endl;

	std::cout << "----------------" << std::endl;
}
