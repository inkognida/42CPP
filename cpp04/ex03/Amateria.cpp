/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:29:21 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 13:31:36 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria(void): type("no one") {}

AMateria::AMateria(std::string const & _type): type(_type) {}

AMateria::AMateria(const AMateria &_data) { *this = _data; }

AMateria& AMateria::operator=(const AMateria &_data)
{
	if (this == &_data)
		return *this;
	this->type = _data.type;
	return *this;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}