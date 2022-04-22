/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:57:00 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 16:19:59 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	club.get_type();
	HumanA bob("Bob", club);
	bob.attack();
	club.set_type("some other type of club");
	bob.attack();
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.set_weapon(&club1);
	jim.attack();
	club1.set_type("some other type of club");
	jim.attack();
	HumanB abobas("abobas");
	abobas.attack();
	
	return 0;
}