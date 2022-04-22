/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:16:58 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 12:46:17 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		virtual ~Cure(void);

		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;	
};

#endif