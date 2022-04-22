/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:36:51 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 13:33:23 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string);
		~ScavTrap(void);
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		
		void	attack(const std::string&);
		void	guardGate(void);
};

#endif