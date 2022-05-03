/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:45:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/22 15:05:05 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	for (int i = -1; i < 152; i++)
	{
		try
		{
			Bureaucrat aboba("aboba", i);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << " grade: " << i << std::endl;
		}
	}

	std::cout << "\n\n";
	
	for (int i = -1; i < 10; i++)
	{
		try
		{
			Bureaucrat aboba("aboba", i);
			std::cout << aboba;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << " grade: " << i << std::endl;
		}
	}

	std::cout << "\n\n";

	try
	{
		Bureaucrat abiba("abiba", 3);
		abiba.incGrade();
		std::cout << abiba;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}