/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:57:01 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 13:45:56 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Amateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character(void);
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);
		virtual ~Character(void);
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	
	private:
		AMateria	*materials[4];
		std::string name;
		
};

#endif