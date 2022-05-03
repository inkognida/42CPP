/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:21:57 by hardella          #+#    #+#             */
/*   Updated: 2022/04/25 10:58:47 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <limits>

class Convert
{
	public:
		Convert(void);
		Convert(std::string);
		Convert(const Convert&);
		Convert& operator=(const Convert&);
		~Convert(void);
	
		void	print(void) const;
	private:
		std::string	input;
		bool		nan;
		bool		posInf;
		bool		negInf;

		void	outChar(void) const;
		void	outInt(void) const;
		void	outFloat(void) const;
		void	outDouble(void) const;
};

#endif