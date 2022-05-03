/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:30:38 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 15:32:19 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("no one"), grade(150)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &_data)
{
	*this = _data;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &_data)
{
	if (this == &_data)
		return *this;
	this->grade = _data.getGrade();
	checkGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

std::string	Bureaucrat::getName(void) const 
{
	return this->name;
}

int			Bureaucrat::getGrade(void) const 
{
	return this->grade;
}

void		Bureaucrat::incGrade(void)
{
	this->grade--;
	checkGrade();
}

void		Bureaucrat::decGrade(void)
{
	this->grade++;
	checkGrade();
}

void		Bureaucrat::checkGrade(void) const
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &e) const
{
	if (e.gotSigned())
	{
		std::cout << "Already signed form." << std::endl;
        return ;
	}
	else
	{
		e.beSigned(*this);
		std::cout << this->name << " signed " << e.getName() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "This grade is too high, help me out";	
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "This grade is too low, give me more power";
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &example)
{
	out << example.getName() << ", bureaucrat grade " << \
		example.getGrade() << std::endl;
	return out;
}