/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:32:27 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:24:33 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constuctor" << std::endl;
}

Brain::Brain(const Brain &_data)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = _data;
}

Brain&	Brain::operator=(const Brain &_data)
{
	if (this == &_data)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _data.ideas[i];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

void	Brain::put_ideas(void)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "aboba" + std::to_string(i);
}

std::string	Brain::get_idea(int i) const
{
	return (ideas[i]);
}