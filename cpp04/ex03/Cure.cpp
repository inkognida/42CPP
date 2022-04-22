/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:44:53 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 14:51:39 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(const Cure &_data) { *this = _data; }

Cure& Cure::operator=(const Cure &_data)
{
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

Cure::~Cure(void) {}

void	Cure::use(ICharacter& target)
{
	std :: cout << "* heals " << \
		target.getName() << "'s wounds *" << std :: endl;
}

AMateria*	Cure::clone() const
{
	AMateria* tmp = new Cure();
	return tmp;
}