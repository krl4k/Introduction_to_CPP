// CLion
// Created by Foster Grisella on 3/25/21 09:31.
//


#ifndef TEST_PRESIDENTIALPARDONFORM_HPP
#define TEST_PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:

	PresidentialPardonForm();

	PresidentialPardonForm(const std::string &target);

	virtual ~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm &other);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

	void execute(const Bureaucrat &executor) const;

private:
	std::string _target;
};


#endif //TEST_PRESIDENTIALPARDONFORM_HPP
