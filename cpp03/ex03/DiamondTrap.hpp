/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:52:39 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:24:58 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator=(const DiamondTrap&);
		~DiamondTrap(void);

		void	whoAmI(void);
		void	attack(const std::string&);	
	private:
		std::string name;
};

#endif