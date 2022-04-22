/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:02:37 by hardella          #+#    #+#             */
/*   Updated: 2022/04/10 20:21:16 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl 		example;
	std::string	lvls[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			lvl = 0;
	
	if (argc != 2)
	{
		std::cout << "Need an argument" << std::endl;
		return 1;
	}
	while (lvls[lvl] != argv[1] && lvl < 5)
		lvl++;
	switch (lvl)
	{
		case 0:
			for (int i = lvl; i < 4; i++)
				example.complain(lvls[i]);
			break ;
		case 1:
			for (int i = lvl; i < 4; i++)
				example.complain(lvls[i]);
			break ;
		case 2: 
			for (int i = lvl; i < 4; i++) 
				example.complain(lvls[i]);
			break ;
		case 3:
			for (int i = lvl; i < 4; i++) 
				example.complain(lvls[i]);
			break ;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break ;
	}
	return 0;
	
}