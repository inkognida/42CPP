/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:16:01 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 12:53:17 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		virtual ~Ice(void);

		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
		
};

#endif
