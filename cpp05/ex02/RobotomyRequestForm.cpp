/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:22:24 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:44:26 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), target("No one") {}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("RobotomyRequestForm", 72, 45), target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &_data)
{
	*this = _data;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &_data)
{
	if (this == &_data)
		return *this;
	this->target = _data.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

std::string RobotomyRequestForm::getTarget(void) const {
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & e) const
{
	if (this->gotSigned())
	{
		std::cout << "Already signed" << std::endl;
		return ;
	}
	if (e.getGrade() > this->getexecGrade() || e.getGrade() > this->getsignGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << "********" << std::endl;
		if (e.getGrade() % 2 == 0)
			std :: cout << target << " has been robotomized successfully 50'%' of the time" << std :: endl;
		else
			std :: cout << target << " failed" << std :: endl;
	}
}