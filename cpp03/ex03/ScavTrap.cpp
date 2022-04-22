/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:37:46 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:51:34 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "no one";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamge = 20;
	std::cout << "ScavTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name)
{
	this->name = _name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamge = 20;
	std::cout << "ScavTrap Default constructor (with name)" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& _data)
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	*this = _data;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& _data)
{
	std::cout << "ScavTrap Assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->name = _data.name;
	this->HitPoints = _data.HitPoints;
	this->EnergyPoints = _data.EnergyPoints;
	this->AttackDamge = _data.AttackDamge;
	return *this;
}


void	ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoints <= 0) { std::cout << "(ScavTrap) No energy points to attack\n"; return ; }
	else
	{
		this->EnergyPoints -= 1;
		std::cout << "(ScavTrap) " << this->name \
			<< " attacks " << target << "," << " causing " << AttackDamge << " points of damage!\n";
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}