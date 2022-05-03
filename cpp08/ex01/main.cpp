/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:09:39 by hardella          #+#    #+#             */
/*   Updated: 2022/04/29 12:32:25 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n";

	try
	{
		Span a = Span(2);
		a.addNumber(123);
		a.addNumber(124);
		std::cout << a.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n";
	
	try
	{
		std :: vector<int> arr;
		
		for (int i = 0; i < 10000; i++)
			arr.push_back(rand() % (1000000));
			
		Span b(arr.begin(), arr.end());

		std::cout << b.longestSpan() << std::endl;
		std::cout << b.shortestSpan() << std::endl;

		b.addNumber(213213);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}