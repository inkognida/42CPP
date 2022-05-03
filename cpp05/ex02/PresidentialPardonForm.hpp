/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:31:54 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:43:53 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);

		virtual void execute(Bureaucrat const & executor) const;
		std::string 	getTarget(void)		const;
		
	private:
		std::string target;
};

#endif