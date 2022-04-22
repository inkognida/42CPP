/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:49:35 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 13:37:10 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void): name("no one"), HitPoints(10), EnergyPoints(10), AttackDamge(0)
{
	std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), HitPoints(10), EnergyPoints(10), AttackDamge(0)
{
	std::cout << "ClapTrap Default constructor (with name)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& _data)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	*this = _data;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& _data)
{
	std::cout << "ClapTrap Assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	
	this->name = _data.name;
	this->HitPoints = _data.HitPoints;
	this->EnergyPoints = _data.EnergyPoints;
	this->AttackDamge = _data.AttackDamge;
	
	return *this;
}

ClapTrap::~ClapTrap(void) { std::cout << "ClapTrap Destructor" << std::endl; }

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0) { std::cout << "No energy points to attack\n"; return ; }
	else
	{
		this->EnergyPoints -= 1;
		std::cout << "ClapTrap " << this->name \
			<< " attacks " << target << "," << " causing " << AttackDamge << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Clap trap " << this->name << " has " << this->HitPoints << std::endl; 
	if (this->HitPoints <= amount)
	{
		std::cout << "ClapTrap " << this->name << " recieved " << amount << " damage and died" << std::endl;
		this->HitPoints = 0;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " recieved " << amount << " damage " << std::endl;
		this->HitPoints -= amount;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints <= 0) { std::cout << "No energy points to attack\n"; return ; }
	this->EnergyPoints -= 1;
	if (this->HitPoints <= 0) { std::cout << "ClapTrap " << this->name << " is dead :(\n"; return ; }
	std::cout << "ClapTrap " << this->name << " gets " << amount << " hitpoints " << std::endl;
	this->HitPoints += amount;
}