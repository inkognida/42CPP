/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:37:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 12:43:31 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(const Ice &_data) { *this = _data; }

Ice& Ice::operator=(const Ice &_data)
{
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

Ice::~Ice(void) {}

void	Ice::use(ICharacter& target)
{
	std :: cout << "* shoots an ice bolt at " << \
		target.getName() << " *" << std :: endl;
}

AMateria*	Ice::clone() const
{
	AMateria* tmp = new Ice();
	return tmp;
}