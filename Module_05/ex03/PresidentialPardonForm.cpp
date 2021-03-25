// CLion
// Created by Foster Grisella on 3/25/21 09:31.
//


#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	Form::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}
