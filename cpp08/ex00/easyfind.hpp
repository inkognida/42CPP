/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:44:01 by hardella          #+#    #+#             */
/*   Updated: 2022/04/28 13:07:48 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(const T &data, int arg) {
	typename T::const_iterator res = std::find(data.begin(), data.end(), arg);
	if (res == data.end())
		throw std::range_error("Not found!");
	return res;
}

#endif 