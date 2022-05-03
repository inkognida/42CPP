/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:07:29 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 21:44:40 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string, int, int);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form(void);

		void		beSigned(const Bureaucrat&);
		bool		gotSigned(void) const;
		std::string	getName(void) const;
		int			getsignGrade(void) const;
		int			getexecGrade(void) const;
		
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what(void) const throw();
		};
		
	private:
		const std::string 	name;
		bool				sign;
		const int			signGrade;
		const int			execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &e);

#endif