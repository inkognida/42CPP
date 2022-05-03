/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:52:52 by hardella          #+#    #+#             */
/*   Updated: 2022/04/29 10:39:22 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <set>
#include <vector>
#include <list>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	
	std::vector<int> v(nums, nums + (sizeof(nums)/sizeof(*nums)));
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	try
	{
		std::vector<int>::const_iterator find = easyfind(v, 2);
		std::cout << "Found: " << *find << std::endl;
		std::vector<int>::const_iterator find_ = easyfind(v, -5);
		std::cout << "Found: " << *find_ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Vector done\n" << std::endl;

	std::list<int> l(nums, nums + (sizeof(nums)/sizeof(*nums)));
	for (std::list<int>::const_iterator i = l.begin(); i != l.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	try
	{
		std::list<int>::const_iterator find = easyfind(l, 5);
		std::cout << "Found: " << *find << std::endl;
		std::list<int>::const_iterator find_ = easyfind(l, -15);
		std::cout << "Found: " << *find_ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "List done\n" << std::endl;


	int nums_set[5] = {1, 5, 3, 4, 2};
	std::set<int> m(nums_set, nums_set + (sizeof(nums_set)/sizeof(*nums_set)));
	for (std::set<int>::const_iterator i = m.begin(); i != m.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	try
	{
		std::set<int>::const_iterator find = easyfind(m, 5);
		std::cout << "Found: " << *find << std::endl;
		std::set<int>::const_iterator find_ = easyfind(m, -15);
		std::cout << "Found: " << *find_ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "List done" << std::endl;
		 
	return (0);
}