/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:13:44 by hardella          #+#    #+#             */
/*   Updated: 2022/04/26 11:25:58 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *addr, int len, void (*func)(T const &))
{
	for (int i = 0; i < len; i++){
		func(addr[i]);	
	}
}

template <typename T>
void	print(T const &x) { std::cout << x << std::endl; return ; }

#endif