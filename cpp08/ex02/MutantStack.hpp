/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:52:36 by hardella          #+#    #+#             */
/*   Updated: 2022/05/01 11:30:39 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack&);
		MutantStack& operator=(const MutantStack&);
		~MutantStack(void);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator			begin(void);
		iterator 			end(void);
		reverse_iterator 	rbegin(void);
		reverse_iterator 	rend(void);
};

template<typename T>
MutantStack<T>::MutantStack(void) {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &_data) { *this = _data; }

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack &_data)
{
	static_cast<void>(_data);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(void) {}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) { return this->c.begin(); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) { return this->c.end(); }

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void) { return this->c.rbegin(); }

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void) { return this->c.rend(); }

#endif