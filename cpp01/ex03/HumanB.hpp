/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:44:11 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 16:20:34 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string _name);
		~HumanB(void);
		
		void	set_weapon(Weapon *_gun);
		void	attack(void) const;
	private:
		Weapon 		*gun;
		std::string name;
};

#endif