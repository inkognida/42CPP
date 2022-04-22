/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:58:19 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:23:03 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor" << std::endl; 
}

Cat::Cat(const Cat &_data)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->brain = new Brain(*_data.brain);
	this->type = _data.type;
}

Cat&	Cat::operator=(const Cat &_data)
{
	std::cout << "Cat assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	delete this->brain;
	
	this->type = _data.type;
	this->brain = new Brain(*_data.brain);
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meow!" << std::endl;
}

void	Cat::useBrain(int i) const
{
	brain->put_ideas();
	std::cout << brain->get_idea(i) << std::endl;
}

