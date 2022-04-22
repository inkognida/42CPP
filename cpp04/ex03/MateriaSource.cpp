/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:18:25 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 13:24:56 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete materials[i];
}

MateriaSource::MateriaSource(const MateriaSource &_data) { *this = _data; }

MateriaSource&	MateriaSource::operator=(const MateriaSource &_data)
{
	if (this == &_data)
		return *this;
	for (int i = 0; i < 4; ++i) 
	{
    	delete materials[i];
    	if (_data.materials[i]) {
             materials[i] = _data.materials[i]->clone();
            }
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i) {
        if (materials[i] == NULL) {
            materials[i] = m;
            return ;
        }
    }
    std::cout << "full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materials[i] && materials[i]->getType() == type){
			return (materials[i]->clone());
		}
	}
	return NULL;
}