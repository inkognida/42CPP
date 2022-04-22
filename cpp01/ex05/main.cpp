/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:02:37 by hardella          #+#    #+#             */
/*   Updated: 2022/04/10 20:03:30 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl example;
	
	if (argc != 2)
	{
		std::cout << "Need an argument" << std::endl;
		return 1;
	}
	example.complain(argv[1]);
	return 0;
}