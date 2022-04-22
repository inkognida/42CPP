/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:24:20 by hardella          #+#    #+#             */
/*   Updated: 2022/04/10 18:52:49 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_string(std::string &tmp, std::string s1, std::string s2)
{
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (tmp.compare(i, s1.size(), s1) == 0)
		{
			tmp.erase(i, s1.size());
			tmp.insert(i, s2);
		}
	}
}

void	own_replace(std::string filename, std::string filename_out, std::string s1, std::string s2)
{
	std::string		tmp;

	std::ifstream 	start(filename, std::ios_base::in);
	if (!start) { std::cout << "Cannot open input file\n"; exit(1); }
	std::ofstream	end(filename_out, std::ios_base::out | std::ios::trunc);
	if (!end) { std::cout << "Cannot open out file\n", exit(1); }
	
	while (getline(start, tmp))
	{
		replace_string(tmp, s1, s2);
		end << tmp << std::endl;
	}
	return ;
}

int main(void)
{
	std::string s1, s2, filename;

	std::cout << "Enter a filename: ";
	std::getline(std::cin, filename);
	std::cout << "Enter s1: ";
	std::getline(std::cin, s1);
	std::cout << "Enter s2: ";
	std::getline(std::cin, s2);
	
	own_replace(filename,(filename + ".replace"), s1, s2);
	
	return (0);
}