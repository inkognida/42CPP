/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:17:38 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:43:48 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);

		virtual void execute(Bureaucrat const & executor) const;
		std::string		getTarget(void)			const;
		
	private:
		std::string	target;
};

#endif