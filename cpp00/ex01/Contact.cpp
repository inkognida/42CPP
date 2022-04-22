/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:36:47 by hardella          #+#    #+#             */
/*   Updated: 2022/04/06 15:24:50 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

void	Contact::get_FirstName(std::string first) { this->first_name = first; }

void	Contact::get_LastName(std::string last) { this->last_name = last; }

void	Contact::get_NickName(std::string nick) { this->nickname = nick; }

void	Contact::get_PhoneNumber(std::string phone) { this->phone_number = phone; }

void	Contact::get_Secret(std::string secret_) { this->secret = secret_; }

std::string	Contact::show_FirstName(void) { return this->first_name; }

std::string	Contact::show_LastName(void) { return this->last_name; }

std::string Contact::show_NickName(void) { return this->nickname; }

std::string	Contact::show_PhoneNumber(void) { return this->phone_number; }

std::string Contact::show_Secret(void) { return this->secret; }