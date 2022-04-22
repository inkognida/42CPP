/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:58:45 by hardella          #+#    #+#             */
/*   Updated: 2022/04/17 20:50:36 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	delete j;

	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete meta;


	std::cout << "\n\n";


	WrongAnimal	*smth = new WrongAnimal();
	WrongAnimal *cat = new WrongCat();

	smth->makeSound();
	std :: cout << cat->getType() << std :: endl;
	cat->makeSound();
	delete cat;
	delete smth;
	
	return 0;
}
