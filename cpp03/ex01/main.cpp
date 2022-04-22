/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:49:26 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 13:42:11 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	
	ClapTrap f("aboba");
	ScavTrap s("abiba");

	f.attack("bibu");
	f.beRepaired(10);
	
	s.attack("bubu");
	s.guardGate();

	// ScavTrap scav("Scav");
	// ScavTrap anotherScav;

	// scav.guardGate();
	// scav.attack("Clap");
	// scav.takeDamage(25);
	// scav.beRepaired(3);
	// anotherScav = scav;
	// anotherScav.takeDamage(30);
	// anotherScav.beRepaired(5);

	// ClapTrap clap("Clap");

	// clap.attack("enemy");
	// clap.takeDamage(9);
	// clap.beRepaired(1);
	// clap.takeDamage(10);
	// clap.beRepaired(2);
	
	return 0;
}