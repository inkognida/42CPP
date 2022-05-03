/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:45:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 15:07:04 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	try
	{
		Bureaucrat	b("vova", 3);
		Form *sh = new ShrubberyCreationForm("dima");
		b.executeForm(*sh);
		delete sh;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\n";

	Bureaucrat	a("dima", 2);
	Form *sh_ = new RobotomyRequestForm("putya");
	a.executeForm(*sh_);
	delete sh_;

	std::cout << "\n\n";

	Bureaucrat	c("aboba", 2);
	Form *sh__ = new PresidentialPardonForm("biba");
	c.executeForm(*sh__);
	delete sh__;
}