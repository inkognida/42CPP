/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:10:25 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:44:04 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		~ShrubberyCreationForm(void);

		virtual void	execute(Bureaucrat const & executor) const;
		std::string		getTarget(void)				const;

		class FileNotOpen: public std::exception {
			public:
				virtual const char* what(void) const throw();
		};

	private:
		std::string		target;
};

#endif