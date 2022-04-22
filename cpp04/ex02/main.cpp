/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:58:45 by hardella          #+#    #+#             */
/*   Updated: 2022/04/18 17:11:00 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{

	// Animal *animals[10];
	// for (int i = 0; i < 10; i++)
	// 	i % 2 == 0 ? animals[i] = new Dog() : animals[i] = new Cat();
	
	// for (int i = 0; i < 10; i++)
	// 	delete animals[i];

	// std::cout << "\n\n";

	// Dog dog;
	// Cat cat;
	
	// std::cout << "\n\n";
	
	// dog.makeSound();
	// dog.useBrain(5);

	// std::cout << "\n\n";

	// cat.makeSound();
	// cat.useBrain(99);

	// std::cout << "\n\n";


	const Animal* j = new Dog();
	const Animal* i = new Cat();


	i->makeSound();
	j->makeSound();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n\n";

	// const Animal *aboba = new Animal();
	// aboba->makeSound();

	// WrongAnimal	*smth = new WrongAnimal();
	// WrongAnimal *cat = new WrongCat();

	// smth->makeSound();
	// std :: cout << cat->getType() << std :: endl;
	// cat->makeSound();
	// delete cat;
	// delete smth;
	
	return 0;
}
