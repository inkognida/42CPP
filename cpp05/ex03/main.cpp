/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:45:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 21:17:01 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	{
		Bureaucrat	b("bob", 1);
		Form		*sh;
		Intern		intern;

		sh = intern.makeForm("ShrubberyCreationForm", "tree");
		b.executeForm(*sh);
		delete sh;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Form 		*putin;
		Intern		intern;
		
		putin = intern.makeForm("PresidentialPardonForm", "aboba");
		b.executeForm(*putin);
		delete putin;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Intern		intern;
		
		Form *rob = intern.makeForm("RobotomyRequestForm", "aboba");
		b.executeForm(*rob);
		delete rob;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 1);
		Intern		intern;
		
		Form *rob = intern.makeForm("awesome", "balls");
		if (rob) {
			b.executeForm(*rob);
			delete rob;
		}
	}
	return 0;
}