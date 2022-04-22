/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:52:41 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:52:55 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): name(ClapTrap::name)
{
	ClapTrap::name += "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamge = FragTrap::AttackDamge;
	std::cout << "DiamondTrap Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name): ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name), name(_name)
{
	ClapTrap::name += "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamge = FragTrap::AttackDamge;
	std::cout << "DiamondTrap Default constructor (with name)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& _data)
{
	std::cout << "DiamondTrap Copy constructor" << std::endl;
	*this = _data;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& _data)
{
	std::cout << "DiamondTrap Assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	
	this->name = _data.name;
	if (!ClapTrap::name.find("_clap_name"))
		ClapTrap::name = name + "_clap_name";
	this->HitPoints = _data.HitPoints;
	this->EnergyPoints = _data.EnergyPoints;
	this->AttackDamge = _data.AttackDamge;
	
	return *this;
}

DiamondTrap::~DiamondTrap(void) { std::cout << "DiamondTrap Destructor" << std::endl; }


void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap :: whoAmI(void) {
	std :: cout  << "DiamondTrap: My name is " << name << ", My grandfather\'s name is "
		<< ClapTrap::name << std :: endl;
}