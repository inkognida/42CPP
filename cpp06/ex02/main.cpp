/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:08:19 by hardella          #+#    #+#             */
/*   Updated: 2022/04/25 13:43:05 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int	n = rand() % 3;
	switch (n)
	{
		case (0): { std::cout << "A: created" << std::endl; return new A; }
		case (1): { std::cout << "B: created" << std::endl; return new B; }
		case (2): { std::cout << "C: created" << std::endl; return new C; }
		default:
			break;
	}
	return NULL;
}

void identify(Base *p)
{
	std::cout << "Pointer identify: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base &p)
{
	std::cout << "Reference identify ";
	try
	{
		Base &pa = dynamic_cast<A&>(p);
		static_cast<void>(pa);
		std::cout << "A\n";
	}
	catch(const std::exception& e)
	{
		static_cast<void>(e);
	}
	try
	{
		Base &pb = dynamic_cast<B&>(p);
		static_cast<void>(pb);
		std::cout << "B\n";
	}
	catch(const std::exception& e)
	{
		static_cast<void>(e);
	}
	try
	{
		Base &pc = dynamic_cast<C&>(p);
		static_cast<void>(pc);
		std::cout << "C\n";
	}
	catch(const std::exception& e)
	{
		static_cast<void>(e);
	}
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Base *test = generate();
		identify(test);
		identify(*test);
		
		delete test;
		
		std::cout << "\n\n";
	}
	
	return (0);
	
}
