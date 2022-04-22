/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:47:50 by hardella          #+#    #+#             */
/*   Updated: 2022/04/08 14:15:48 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(){
	std::cout << "Dead: " << this->name << std::endl;
}

void	Zombie::announce(void) const {
	 std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void	Zombie::set_name(std::string _name)
{
	this->name = _name;
}

