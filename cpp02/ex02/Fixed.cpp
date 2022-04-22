/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:31:49 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 13:49:56 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void): fixedPoint(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _int)
{
	// std::cout << "Default constructor called (int)" << std::endl;
	this->fixedPoint = _int << bits;
}

Fixed::Fixed(const float _float)
{
	// std::cout << "Default constructor called (float)" << std::endl;
	this->fixedPoint = roundf(_float * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	// std :: cout << "Assignation operator called" << std :: endl;
	if (this == &fixed)
		return *this;
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	// std::cout << "Default destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

Fixed	Fixed::operator+(const Fixed& _data)
{
	Fixed	tmp;
	
	tmp.setRawBits(this->fixedPoint + _data.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed& _data)
{
	Fixed	tmp;
	
	tmp.setRawBits(this->fixedPoint - _data.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(const Fixed& _data)
{
	Fixed	tmp(this->toFloat() * _data.toFloat());
	return tmp;
}

Fixed	Fixed::operator/(const Fixed& _data)
{
	Fixed	tmp(this->toFloat() / _data.toFloat());
	return tmp;
}

Fixed&	Fixed::operator++(void)
{
	this->fixedPoint++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->fixedPoint--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

bool	Fixed::operator>(const Fixed& _data) const { return this->getRawBits() > _data.getRawBits(); }
bool	Fixed::operator<(const Fixed& _data) const { return this->getRawBits() < _data.getRawBits(); }
bool	Fixed::operator==(const Fixed& _data) const { return this->getRawBits() == _data.getRawBits(); }
bool	Fixed::operator!=(const Fixed& _data) const { return this->getRawBits() != _data.getRawBits(); }
bool	Fixed::operator>=(const Fixed& _data) const { return this->getRawBits() >= _data.getRawBits(); }
bool	Fixed::operator<=(const Fixed& _data) const { return this->getRawBits() <= _data.getRawBits(); }

Fixed&	Fixed::min(Fixed &_data, Fixed &__data) { return _data < __data ? _data : __data; }
const Fixed&	Fixed::min(const Fixed &_data, const Fixed &__data)
{
	return _data < __data ? _data : __data;
}

Fixed&	Fixed::max(Fixed &_data, Fixed &__data) { return _data > __data ? _data : __data; }
const Fixed&	Fixed::max(const Fixed &_data, const Fixed &__data)
{
	return _data > __data ? _data : __data;
}

std::ostream & operator << (std::ostream &out, const Fixed &f)
{
	return out << f.toFloat();
}
