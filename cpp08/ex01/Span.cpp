/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:57:50 by hardella          #+#    #+#             */
/*   Updated: 2022/04/29 12:09:41 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): size(0) {}
Span::Span(unsigned int size_): size(size_) {}
Span::Span(const Span &_data) { *this = _data; }
Span::~Span(void) {}

Span::Span(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
		arr.push_back(*begin++);
	size = arr.size();
}

Span& Span::operator=(const Span &_data)
{
	if (this == &_data)
		return *this;
		
	size = _data.size;
	arr = _data.arr;
	
	return *this;
}

void	Span::addNumber(int value)
{
	if (arr.size() < size)
		arr.push_back(value);
	else
		throw std::range_error("Array is full (out of range)");
}

long	Span::shortestSpan(void) const
{
	std::vector<int> tmp(arr);
	if (arr.size() < 2)
		throw std::range_error("Not enough elements");
	sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

long	Span::longestSpan(void) const 
{
	std::vector<int> tmp(arr);
	if (arr.size() < 2)
		throw std::range_error("Not enough elements");
	sort(tmp.begin(), tmp.end());
	return (tmp[1] - tmp[0]);
	
}