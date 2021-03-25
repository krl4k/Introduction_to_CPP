// CLion
// Created by Foster Grisella on 3/24/21 18:47.
//


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form("RobotomyRequest", 75, 42), _target(target) {
	srand(time(0));
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	int x = rand() % 2;
	if (x % 2) {
		throw DrillNotExecute();
	}
	std::cout << "DRRRRRR!!!! " << _target << " has been robotomized successfully 50% of the time."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::DrillNotExecute::~DrillNotExecute() throw() {

}

const char *RobotomyRequestForm::DrillNotExecute::what() const throw() {
	return ("DRRRRRRILLLLL not execute!!!");
}
