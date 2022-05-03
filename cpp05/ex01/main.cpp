/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:45:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/21 13:44:00 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	{
		try {
			Form	f("aboba", 0, 5);
			std::cout << f << std::endl;
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std::cout << "\n\n";
	{
		try {
			Form	f("abobas", 100, 189);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std::cout << "\n\n";
	{
		try {
			Form	f("abiba", 100, 109);
			std::cout << f;
			Bureaucrat b("bureaucrat_abiba", 105);
			std :: cout << b;
			f.beSigned(b);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std::cout << "\n\n";
	{
		try {
			Form	f("abuba", 100, 109);
			std :: cout << f;
			Bureaucrat b("bureaucrat_abuba", 99);
			std :: cout << b;
			f.beSigned(b);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
}