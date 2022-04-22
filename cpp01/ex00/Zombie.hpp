/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:19:09 by hardella          #+#    #+#             */
/*   Updated: 2022/04/08 12:20:56 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string _name);
		~Zombie(void);
		void	announce(void) const;
	private:
		std::string name;	
};

Zombie* new_Zombie(std::string);
void	randomChump(std::string);

#endif