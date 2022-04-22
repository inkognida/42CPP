/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:35:43 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 15:56:49 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(void): x(0), y(0) {}

Point::Point(const Fixed _x, const Fixed _y): x(_x), y(_y) {}

Point::Point(const Point& _data)
{
	*this = _data;
}

Point	&Point::operator=(const Point& _data)
{
	if (this == &_data)
		return (*this);
	this->x = _data.getX();
	this->y = _data.getY();
	return *this;
}

Point::~Point(void) {}

Fixed	Point::getX(void) const { return this->x; }
Fixed	Point::getY(void) const { return this->y; }