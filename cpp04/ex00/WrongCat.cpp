/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:15:42 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 17:18:32 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &_data)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = _data;
}

WrongCat&	WrongCat::operator=(const WrongCat &_data)
{
	std::cout << "WrongCat assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meow!" << std::endl;
}

