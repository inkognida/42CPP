/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:18:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/08 13:30:43 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *a;

	a = new_Zombie("aboba");
	a->announce();
	delete a;

	randomChump("abiba");
	randomChump("abuba");
	
	return (0);
}