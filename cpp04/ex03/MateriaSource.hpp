/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hardella <hardella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:15:56 by hardella          #+#    #+#             */
/*   Updated: 2022/04/19 13:24:58 by hardella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource&);
        virtual ~MateriaSource(void);
        MateriaSource &operator=(const MateriaSource&);
		
        virtual void        learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);
    private:
        AMateria    *materials[4];
};

#endif