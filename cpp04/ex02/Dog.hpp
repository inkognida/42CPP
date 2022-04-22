/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:57:29 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:15:33 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		virtual ~Dog();
		virtual	void	makeSound(void) const;
		void			useBrain(int) const;
	private:
		Brain	*brain;
};

#endif