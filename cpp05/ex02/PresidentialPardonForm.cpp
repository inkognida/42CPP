/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:34:38 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:44:18 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), target("no one") {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_data)
{
	*this = _data;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &_data)
{
	if (this == &_data)
		return *this;
	this->target = _data.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::execute(Bureaucrat const & e) const
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
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->target;
}