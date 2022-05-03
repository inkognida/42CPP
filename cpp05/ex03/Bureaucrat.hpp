/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:45:39 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:53:29 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat(void);

		std::string		getName(void) const;
		int				getGrade(void) const;
		
		void			incGrade(void);
		void			decGrade(void);
		void			checkGrade(void) const;

		void			signForm(Form&) const;
		void			executeForm(Form const & form) const;

		class GradeTooHighException: public std::exception {
			virtual const char* what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char* what(void) const throw();
		};
	private:
		std::string const 	name;
		int					grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &example);

#endif