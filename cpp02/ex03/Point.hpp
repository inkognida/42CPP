/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:29:53 by hardella          #+#    #+#             */
/*   Updated: 2022/04/13 15:54:18 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void); 
		Point(const Fixed, const Fixed);
		Point(const Point&);
		Point& operator=(const Point&);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
	private:
		Fixed x;
		Fixed y;	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif