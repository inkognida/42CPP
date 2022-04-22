/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:12:50 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 17:15:01 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal") 
{
	std::cout << "WrongAnimal constructor" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &_data)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = _data;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &_data)
{
	std::cout << "WrongAnimal assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal silence" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
