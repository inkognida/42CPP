/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:53:28 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 15:24:06 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		Brain&	operator=(const Brain&);
		virtual ~Brain(void);

		void			put_ideas(void);
		std::string		get_idea(int) const;
	private:
		std::string	ideas[100];

};

#endif