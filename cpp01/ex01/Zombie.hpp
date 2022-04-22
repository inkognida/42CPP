/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:47:05 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 12:01:48 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	set_name(std::string);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif;
