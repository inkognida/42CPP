/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:10:19 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 14:44:35 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), target("no one") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("ShrubberyCreationForm", 145, 137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &_data)
{
	*this = _data;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &_data)
{
	if (this == &_data)
		return *this;
	this->target = _data.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

std::string		ShrubberyCreationForm::getTarget(void)	const { return this->target; }

void	ShrubberyCreationForm::execute(Bureaucrat const & e) const
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
		std::string tree =
		"                                                   	 \n " 
    	"   ,.        %;     %;            ;        %;'    ,; 	\n "
        "     ;       ;%;  %%;        ,     %;    ;%;    ,%'	 \n "
        "      %;       %;%;      ,  ;       %;  ;%;   ,%;'       \n"
        "       ;%;      %;        ;%;        % ;%;  ,%;'		\n"
        "        `%;.     ;%;     %;'         `;%%;.%;'			\n"
        "         `:;%.    ;%%. %@;        %; ;@%;%'			\n"
        "            `:%;.  :;bd%;          %;@%;'				\n"
        "              `@%:.  :;%.         ;@@%;'  				 \n"
        "                `@%.  `;@%.      ;@@%;        			  \n"
        "                  `@%%. `@%%    ;@@%;        			 \n"
        "                    ;@%. :@%%  %@@%;      				 \n"
        "                      %@bd%%%bd%%:;    				 \n"
        "                        #@%%%%%:;;						\n"
        "                        %@@%%%::;						\n"
        "                        %@@@%(o);  . '        			 \n"
        "                        %@@@o%;:(.,'    			     \n"
        "                    `.. %@@@o%::;       			  \n"
        "                       `)@@@o%::;       			  \n"
        "                        %@@(o)::;       			 \n"
        "                       .%@@@@%::;       			  \n"
        "                       ;%@@@@%::;.      			    \n"
        "                      ;%@@@@%%:;;;. 				\n"
        "                  ...;%@@@@@%%:;;;;,..";
		
		std::string		out = target + "_shrubbery";
		std::ofstream	end(out, std::ios_base::out | std::ios::trunc);
		if (!end)
			throw FileNotOpen();
		end << tree;
		end.close();	
	}
}

const	char* ShrubberyCreationForm::FileNotOpen::what(void) const throw()
{
	return "File not open";
}