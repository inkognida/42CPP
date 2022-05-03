/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:39:23 by hardella          #+#    #+#             */
/*   Updated: 2022/04/25 11:55:22 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t r = reinterpret_cast<uintptr_t>(ptr);
	return r;
}

Data* deserialize(uintptr_t raw){
	Data *dp = reinterpret_cast<Data*>(raw);
	return dp;
}

int main(void)
{
	Data a;
	
	uintptr_t	ap;
	Data		*dp;
	
	a.index = 123;
	a.str = "aboba";

	std::cout << a.index << " " << a.str << std::endl;
	
	ap = serialize(&a);
	std::cout << ap << std::endl;
	dp = deserialize(ap);
	std::cout << dp->index << " " << dp->str << std::endl;

	return 0;
}