/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:47:27 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 20:37:08 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal") 
{
	std::cout << "Animal constructor" << std::endl; 
}

Animal::Animal(const Animal &_data)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = _data;
}

Animal&	Animal::operator=(const Animal &_data)
{
	std::cout << "Animal assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal silence" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}
