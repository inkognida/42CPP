/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:31:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 12:48:21 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void): fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _int)
{
	std::cout << "Default constructor called (int)" << std::endl;
	this->fixedPoint = _int << bits;
}

Fixed::Fixed(const float _float)
{
	std::cout << "Default constructor called (float)" << std::endl;
	this->fixedPoint = roundf(_float * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std :: cout << "Assignation operator called" << std :: endl;
	if (this == &fixed)
		return *this;
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

int		Fixed::toInt(void) const
{
	return (this->fixedPoint >> bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedPoint / (float)(1 << bits));
}

std::ostream & operator << (std::ostream &out, const Fixed &f)
{
	return out << f.toFloat();
}
