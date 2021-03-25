// CLion
// Created by Foster Grisella on 3/25/21 09:54.
//


#include "Intern.hpp"

Form *createPresidentialForm(const std::string &target){
	return (new PresidentialPardonForm(target));
}

Form *createShrubberyForm(const std::string &target){
	return (new ShrubberyCreationForm(target));
}

Form *createRobotomyForm(const std::string &target){
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeForm(const std::string &name, const std::string &target) {
	_sForms[0]._type = "PresidentialPardon";_sForms[0].createForm = &createPresidentialForm;
	_sForms[1]._type = "ShrubberyCreation";	_sForms[1].createForm = &createShrubberyForm;
	_sForms[2]._type = "RobotomyRequest";	_sForms[2].createForm = &createRobotomyForm;
	for (int i = 0; i < 3; ++i) {
		if (name == _sForms[i]._type)
		{
			Form *form = _sForms[i].createForm(target);
			std::cout << "Intern creates " << target << std::endl;
			return form;
		}
	}
	throw FormDoesNotExist();
}

Intern::~Intern() {

}

Intern::Intern() {

}

Intern::Intern(const Intern &other) {
	(void)other;
}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}

const char *Intern::FormDoesNotExist::what() const throw() {
	return ("Form does not Exist!!!");
}
