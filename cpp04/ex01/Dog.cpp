/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:56:35 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:23:06 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor" << std::endl; 
}

Dog::Dog(const Dog &_data)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->brain = new Brain(*_data.brain);
	this->type = _data.type;
}

Dog&	Dog::operator=(const Dog &_data)
{
	std::cout << "Dog assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	delete this->brain;
	
	this->type = _data.type;
	this->brain = new Brain(*_data.brain);
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog woof!" << std::endl;
}

void	Dog::useBrain(int i) const
{
	brain->put_ideas();
	std::cout << brain->get_idea(i) << std::endl;
}
