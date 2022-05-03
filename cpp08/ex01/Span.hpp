/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:10:01 by hardella          #+#    #+#             */
/*   Updated: 2022/04/29 12:32:30 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(void);
		Span(unsigned int);
		Span(std::vector<int>::iterator, std::vector<int>::iterator);
		Span(const Span&);
		Span&	operator=(const Span&);
		~Span(void);

		void			addNumber(int);
		long			shortestSpan(void) const;
		long			longestSpan(void) const;
		
	private:
		unsigned int		size;
		std::vector<int>	arr;
};

#endif