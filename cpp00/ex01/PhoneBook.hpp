/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:36:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/06 15:33:49 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(): i(0), all(0) {}
		~PhoneBook();
		static const int 	max = 8;
		void	Search();
		void	Add();
		void	Exit()		const;
	private:
		Contact users[max];
		void	show_contacts();
		void	print_names();
		void	print_user(std::string);
		int		i, all;
};

#endif