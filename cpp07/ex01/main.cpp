/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:14:00 by hardella          #+#    #+#             */
/*   Updated: 2022/04/26 11:28:31 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


int main(void)
{

	int a[5] = {1, 2, 3, 4, 5};
	iter(a, 5, print);

	std::cout << "\n\n";

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	return (0);
}