/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:06:15 by hardella          #+#    #+#             */
/*   Updated: 2022/04/10 19:48:53 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void	Harl::debug(void) { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; }

void	Harl::info(void) { std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }

void	Harl::warning(void) { std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }

void	Harl::error(void) { std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; }

void	Harl::complain(std::string level)
{
	FuncPTR funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int	lvl = -1;
	
	lvl = (level == "debug") ? 0 : lvl;
	lvl = (level == "info") ? 1 : lvl;
	lvl = (level == "warning") ? 2 : lvl;
	lvl = (level == "error") ? 3 : lvl;
	
	if (lvl == -1)
		return ;
	
	(this->*funcs[lvl])();
}