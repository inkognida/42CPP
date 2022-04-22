/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:21:27 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 11:38:07 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed&	operator=(const Fixed&);

		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
	private:
		int					fixedPoint;
		static const int	bits = 8;
};

#endif