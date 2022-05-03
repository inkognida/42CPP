/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:05:05 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 21:18:04 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &_data) { (void)_data; }

Intern& Intern::operator=(const Intern &_data)
{
	(void) _data;
	return *this;
}

Intern::~Intern(void) {}

Form* shrForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new ShrubberyCreationForm(target);
}

Form* robotForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new RobotomyRequestForm(target);
}

Form* presidentForm(std::string const & name, std::string const & target) {
	std::cout << "Intern creates " << name << std::endl;
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	FormCreators funcs[3] = { shrForm, robotForm, presidentForm };
	
	int form = -1;

	form = (name == "PresidentialPardonForm") ? 0 : form;
	form = (name == "RobotomyRequestForm") ? 1 : form;
	form = (name == "ShrubberyCreationForm") ? 2 : form;

	while (form == -1)
	{
		std::cout << "Wrong form" << std::endl;
		return NULL;
	}
	return (funcs[form](name, target));
}