/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:47:04 by hardella          #+#    #+#             */
/*   Updated: 2022/04/07 15:20:51 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook() {};

void	PhoneBook::print_names()
{
	std::string arg[5] = {"index", "first name", "last name", "nickname", "phone number"};
	for (int i = 0; i < 5; i++)
		std::cout << "|" << std::right << std::setw(10) << arg[i];
	std::cout << std::endl;
}

void	PhoneBook::print_user(std::string arg)
{
	if (arg.size() > 10)
		std::cout << "|" << std::right << std::setw(10) << arg.substr(0, 10).replace(9, 10, ".");		
	else
		std::cout << "|" << std::right << std::setw(10) << arg;
}

void	PhoneBook::show_contacts()
{	
	print_names();
	for (int j = 0; j < all; j++)
	{
		std::cout << "|" << std::right << std::setw(10) << j + 1;
		print_user(users[j].show_FirstName());
		print_user(users[j].show_LastName());
		print_user(users[j].show_NickName());
		print_user(users[j].show_PhoneNumber());
		if (j < all - 1)
			std::cout << std::endl;
	}
}


void	PhoneBook::Exit() const { std::cout << "BB :D" << std::endl; exit(0);}

void	PhoneBook::Search()
{
	int	index;
	show_contacts();
	
	std::cout << std::endl << "Enter index: ";
	std::cin >> index;
	if (!(index))
		exit(0);
	if (index > 7 || index > all || all == 0)
	{
		std::cout << "No such contact" << std::endl;
		return ;
	}
	index--;
	std::cout << "First name: " << users[index].show_FirstName() << std::endl;
	std::cout << "Last name: " << users[index].show_LastName() << std::endl;
	std::cout << "Nickname: " << users[index].show_NickName() << std::endl;
	std::cout << "Phone: " << users[index].show_PhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << users[index].show_Secret() << std::endl;
}

void	PhoneBook::Add()
{
	std::string fn, ln, nick, secret, phone;
	if (i >= 8)
	{
		i = 0;
		all = 8;
	}
	std::cout << "Input first name: ";
	std::cin >> fn;
	std::cout << "Input last name: ";
	std::cin >> ln;
	std::cout << "Input nickname: ";
	std::cin >> nick;
	std::cout << "Input phone: ";
	std::cin >> phone;
	std::cout << "Input Darkest Secret: ";
	std::cin >> secret;
	users[i].get_FirstName(fn);
	users[i].get_LastName(ln);
	users[i].get_NickName(nick);
	users[i].get_PhoneNumber(phone);
	users[i].get_Secret(secret);
	std::cout << "Created" << std::endl;
	i++;
	if (all != 8)
		all = i;
}