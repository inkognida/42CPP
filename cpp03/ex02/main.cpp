/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:49:26 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:49:29 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{
	FragTrap frag("Frag");

	frag.highFivesGuys();
	frag.takeDamage(90);
	frag.beRepaired(3);
	
	return 0;
}