/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:59:25 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 16:02:31 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}
Weapon::Weapon(std::string _power): type(_power) {}
Weapon::~Weapon() {}

const std::string	Weapon::get_type(void) const { return this->type; }

void	Weapon::set_type(std::string _type)
{
	this->type = _type;
}