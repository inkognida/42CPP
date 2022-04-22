/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:58:19 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 17:15:59 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat constructor" << std::endl; 
}

Cat::Cat(const Cat &_data)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = _data;
}

Cat&	Cat::operator=(const Cat &_data)
{
	std::cout << "Cat assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat meow!" << std::endl;
}

