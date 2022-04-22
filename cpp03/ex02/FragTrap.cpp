/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:14:58 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:47:04 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "no one";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamge = 30;
	std::cout << "FragTrap Default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string _name)
{
	this->name = _name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamge = 30;
	std::cout << "FragTrap Default constructor (with name)" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& _data)
{
	std::cout << "FragTrap Copy constructor" << std::endl;
	*this = _data;
}

FragTrap& FragTrap::operator=(const FragTrap& _data)
{
	std::cout << "FragTrap Assignment operator" << std::endl;
	if (this == &_data)
		return *this;
	this->name = _data.name;
	this->HitPoints = _data.HitPoints;
	this->EnergyPoints = _data.EnergyPoints;
	this->AttackDamge = _data.AttackDamge;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " high fives :)" << std::endl;
}