/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:20:21 by hardella          #+#    #+#             */
/*   Updated: 2022/04/21 13:40:44 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name("no one"), sign(false), signGrade(150), execGrade(150) {};

Form::Form(std::string _name, int _grade, int _execGrade): name(_name), sign(false), signGrade(_grade), execGrade(_execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &_data): name(_data.name), sign(false), signGrade(_data.signGrade), execGrade(_data.execGrade)
{
	*this = _data;
}

Form& Form::operator=(const Form &_data)
{
	if (this == &_data)
		return *this;
	this->sign = _data.sign;
	return *this;
}

Form::~Form(void) {}

bool	Form::gotSigned(void) const
{
	return this->sign;
}

std::string	Form::getName(void) const 
{
	return this->name;
}

int Form::getexecGrade(void) const
{
	return this->execGrade;
}

int Form::getsignGrade(void) const
{
	return this->signGrade;
}

void	Form::beSigned(const Bureaucrat &e)
{
	if (e.getGrade() <= this->signGrade && e.getGrade() <= this->execGrade)
		this->sign = true;
	else 
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high for that";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low for that";
}

std::ostream	&operator<<(std::ostream &out, const Form &e) {
	out << "Form " << e.getName() << " has grade to execute " << e.getexecGrade() << " and grade to sign " 
		<< e.getsignGrade() << ". Status of sign: " << e.gotSigned() << std :: endl;
	return out;
}
