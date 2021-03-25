// CLion
// Created by Foster Grisella on 3/24/21 14:27.
//


#include "Form.hpp"



Form::GradeTooLowException::GradeTooLowException(const std::string &msg):_msg(msg) {

}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

const char *Form::GradeTooLowException::what() const throw() {
	std::string temp = "GradeTooLowException: ";
	if (!_msg.empty())
		temp += _msg;
	else
		temp += "unknown error";
	return (temp.c_str());
}

Form::GradeTooHighException::GradeTooHighException(const std::string &msg):_msg(msg) {

}

Form::GradeTooHighException::~GradeTooHighException() throw() {

}

const char *Form::GradeTooHighException::what() const throw() {
	std::string temp = "GradeTooHighException: ";
	if (!_msg.empty())
		temp += _msg;
	else
		temp += "unknown error";
	return (temp.c_str());
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeRequiredToSign)
	{
		if (_signed)
			std::cerr << bureaucrat.getName() << "  cannot sign " << _name << " because already signed." << std::endl;
		else
			std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
		_signed = true;
	}
	else
		throw Form::GradeTooLowException("Bureaucrat grade is too low!");
}


Form::Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute) :
_name(name),_gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute) {
	if (_gradeRequiredToSign < 1 || _gradeRequiredToExecute < 1)
		throw Form::GradeTooHighException("Constructor");
	if (_gradeRequiredToSign >= 150 || _gradeRequiredToExecute >= 150)
		throw Form::GradeTooLowException("Constructor");
	_signed = false;
}

Form::Form() : _signed(false), _gradeRequiredToSign(0), _gradeRequiredToExecute(0){

}

Form::~Form() {
	std::cout << _name << ":  destructor!" << std::endl;
}

Form::Form(const Form &other):_name(other._name), _signed(false),
_gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExecute(other._gradeRequiredToExecute){}

Form &Form::operator=(const Form &other) {
	if (this == &other)
		return *this;
	_signed = other._signed;
	return *this;
}

const std::string &Form::getName() const {
	return _name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getGradeRequiredToSign() const {
	return _gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const {
	return _gradeRequiredToExecute;
}

void Form::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > _gradeRequiredToExecute)
	{
		throw Form::GradeTooLowException("execute!");
	}
	if (!_signed)
	{
		throw Form::FormNotSigned();
	}
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "FormName = " << form.getName() << ", SignGrade = " << form.getGradeRequiredToSign()
	<< ", GradeToExecute = "<< form.getGradeRequiredToExecute() << ", signed = "<< form.isSigned() << "\n";
	return os;
}

const char *Form::FormNotSigned::what() const throw() {
	return ("Form not Signed!!!");
}
