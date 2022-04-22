/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:18:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 11:30:33 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *abobas = zombieHorde(10, "aboba");

	for (int i = 0; i < 10; i++)
		abobas[i].announce();
	delete [] abobas;
	return (0);
}