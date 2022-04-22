/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:49:26 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:25:51 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) 
{
	DiamondTrap	diamond("Diamond");

	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.attack("Frag");
	diamond.takeDamage(25);
	diamond.beRepaired(3);
	diamond.takeDamage(30);
	diamond.beRepaired(5);
	
	return 0;
}