/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:36:52 by hardella          #+#    #+#             */
/*   Updated: 2022/04/06 15:25:21 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 	book;
	std::string	input;
	
	std::cout << "Input a command: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == "EXIT")
			book.Exit();
		else if (input == "SEARCH")
			book.Search();
		else if (input == "ADD")
			book.Add();
		else
		{
			std::cout << "Input a command: ADD, SEARCH, EXIT" << std::endl;
			continue ;
		}
	}
	return (0);
}