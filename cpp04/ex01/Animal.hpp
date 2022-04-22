/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:43:31 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 20:52:34 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();
		
		virtual	void	makeSound(void) const;
		std::string		getType(void) const;
		
	protected:
		std::string type;

};

#endif