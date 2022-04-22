/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:06:03 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 15:57:16 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &gun_def): gun(gun_def), name(_name) {}
HumanA::~HumanA(void) {}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << gun.get_type() << std::endl;
}
