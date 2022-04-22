/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:35:29 by hardella          #+#    #+#             */
/*   Updated: 2022/04/09 11:44:59 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "str: " << &str << std::endl;
	std::cout << "str_ptr: " << str_ptr << std::endl;
	std::cout << "str_ref: " << &str_ref << std::endl;
	
	std::cout << std::endl;

	std::cout << "str value: " << str << std::endl;
	std::cout << "str_ptr value: " << *str_ptr << std::endl;
	std::cout << "str_ref value: " << str_ref << std::endl;

	return (0);
}