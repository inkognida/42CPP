/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:45:55 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 16:20:35 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {}
HumanB::HumanB(std::string _name): gun(NULL), name(_name) {}
HumanB::~HumanB(void) {}

void	HumanB::attack(void) const 
{
	if (gun)
		std::cout << name << "attacks with their " << gun->get_type() << std::endl;
	else
		std::cout << name << " stay afk" << std::endl;
}

void	HumanB::set_weapon(Weapon *_gun)
{
	this->gun = _gun;
}