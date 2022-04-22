/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:56:35 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 17:04:06 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog constructor" << std::endl; 
}

Dog::Dog(const Dog &_data)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = _data;
}

Dog&	Dog::operator=(const Dog &_data)
{
	std::cout << "Dog assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog woof!" << std::endl;
}

