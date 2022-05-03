/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:31:25 by hardella          #+#    #+#             */
/*   Updated: 2022/04/26 11:08:55 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b)
{
	return a < b ? a : b;
}

template <typename T>
T	max(T a, T b)
{
	return a > b ? a : b;	
}

#endif