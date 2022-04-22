/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:36:50 by hardella          #+#    #+#             */
/*   Updated: 2022/04/06 15:24:55 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		Contact();
		~Contact();
		void	get_FirstName(std::string first);
		void	get_LastName(std::string last);
		void	get_NickName(std::string nick);
		void	get_PhoneNumber(std::string	phone);
		void	get_Secret(std::string secret_);

		std::string		show_FirstName(void);
		std::string 	show_LastName(void);
		std::string 	show_NickName(void);
		std::string		show_PhoneNumber(void);
		std::string		show_Secret(void);		
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string	secret;
};

#endif