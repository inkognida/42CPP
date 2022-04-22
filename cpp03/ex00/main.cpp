/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:49:26 by hardella          #+#    #+#             */
/*   Updated: 2022/04/15 16:41:45 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	First("F");
	ClapTrap	Second("S");
	ClapTrap	Third_First;

	First.attack("aboba");
	Second.attack("abiba");
	Second.takeDamage(4);
	First.takeDamage(3);
	Third_First = First;
	Third_First.takeDamage(10);
	Third_First.beRepaired(5);
	Second.beRepaired(12);
	return 0;
}