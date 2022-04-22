/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:57:55 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:15:30 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		virtual ~Cat();
		virtual	void	makeSound(void) const;
		void			useBrain(int) const;
	private:
		Brain	*brain;
};

#endif