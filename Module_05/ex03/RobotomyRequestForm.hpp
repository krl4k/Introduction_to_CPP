// CLion
// Created by Foster Grisella on 3/24/21 18:47.
//


#ifndef TEST_ROBOTOMYREQUESTFORM_HPP
#define TEST_ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>

#include "Form.hpp"
class RobotomyRequestForm: public Form {
public:

	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm();

	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm &other);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

	void execute(const Bureaucrat &executor) const;

	class DrillNotExecute : public std::exception{
	public:

		~DrillNotExecute() throw() ;

		const char *what() const throw();
	};

private:
	std::string _target;
};


#endif //TEST_ROBOTOMYREQUESTFORM_HPP
