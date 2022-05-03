/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:07:29 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:43:38 by hardella         ###   ########.fr       */
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
		virtual ~Form(void);

		void			beSigned(const Bureaucrat&);
		
		bool			gotSigned(void) const;
		std::string		getName(void) const;
		int				getsignGrade(void) const;
		int				getexecGrade(void) const;
		
		virtual	void	execute(Bureaucrat const & executor) const = 0;
		
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