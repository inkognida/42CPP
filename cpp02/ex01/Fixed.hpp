/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:21:27 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 12:44:56 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int _int);
		Fixed(const float _float);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed&	operator=(const Fixed&);

		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					fixedPoint;
		static const int	bits = 8;
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif