/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:04:15 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 13:45:10 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
}

Character::Character(std::string _name)
{
	this->name = _name;
	for (int i = 0; i < 4; i++)	
		materials[i] = NULL;
}

Character::Character(const Character &_data)
{
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
	*this = _data;
}

Character& Character::operator=(const Character &_data)
{
	if (this == &_data)
		return *this;

	this->name = _data.name;
	for (int i = 0; i < 4; i++)
	{
		delete materials[i];
		if (_data.materials[i])
			this->materials[i] = _data.materials[i]->clone();
		else
			materials[i] = NULL;
	}
	return *this;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete materials[i];
}

std::string const & Character::getName() const { return name; }

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++) {
        if (materials[i] == NULL) {
            materials[i] = m;
            return ;
        }
    }
	std::cout << "full" << std::endl;
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3) {
        materials[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx <= 3) {
        materials[idx]->use(target);
    }
}
