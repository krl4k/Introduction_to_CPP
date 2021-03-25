// CLion
// Created by Foster Grisella on 3/24/21 09:07.
//


#include "Bureaucrat.hpp"

const std::string &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(_name + " Constructor");
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(_name + " Constructor");
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return *this;
	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << _name << ": Bureaucrat destructor!" << std::endl;
}

void Bureaucrat::incGrade() {
	if (_grade - 1 > 0)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException(_name + " incGrade");
}

void Bureaucrat::decGrade() {
	if (_grade + 1 <= 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException(_name + " decGrade");
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
	return os;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg) : _msg(msg) {}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	std::string temp = "GradeTooHighException: ";
	if (!_msg.empty())
		temp += _msg;
	else
		temp += "unknown error";
	return (temp.c_str());
}


//Bureaucrat::GradeTooHighException::GradeTooHighException() : _msg(nullptr) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	std::string temp = "GradeTooLowException: ";
	if (!_msg.empty())
		temp += _msg;
	else
		temp += "unknown error";
	return (temp.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg) : _msg(msg) {}


