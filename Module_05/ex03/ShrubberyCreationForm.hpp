// CLion
// Created by Foster Grisella on 3/24/21 17:12.
//


#ifndef TEST_SHRUBBERYCREATIONFORM_HPP
#define TEST_SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
public:

	ShrubberyCreationForm();

	ShrubberyCreationForm(const std::string &target);

	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm &other);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void execute(const Bureaucrat &executor) const;

private:
	std::string _target;
};


#endif //TEST_SHRUBBERYCREATIONFORM_HPP
