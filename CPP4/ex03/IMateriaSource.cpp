/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:47:01 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 14:22:28 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

//-----------------CLASS_MATERIASOURCE----------------------------------------------------

//CONSTRUCTORS------------------------------------------

MateriaSource::MateriaSource()
{
    for (int i(0); i < 4; i++)
    {
        this->box2[i] = NULL;
    }

    std::cout << GREEN << "Constructor Default MateriaSource is created !" << std::endl;

    return;
}

MateriaSource::MateriaSource(MateriaSource const& i)
{
    std::cout << YELLOW << "Constructor MateriaSource is cloned !" << std::endl;
    *this = i;

    return;
}

//OPERATOR------------------------------------------------------

MateriaSource& MateriaSource::operator=(MateriaSource const& i)
{
    std::cout << MAGENTA << "Operator MateriaSource is created !" << std::endl;
    if (this != &i)
    {
        for (int j(0); j < 4; j++)
        {
            box2[j] = i.box2[j];
        
        }     
    }

    return (*this);
}

//DESTRUCTOR---------------------------------------------------

MateriaSource::~MateriaSource()
{
    for (int i(0); i < 4; i++)
    {
        delete box2[i];
    }

    std::cout << RED << "MateriaSource is destroyed !" << std::endl;

    return ;
}

//FUNCTION----------------------------------------------------------

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while ( box2[i] != NULL && i < 4)
        i++;
    
    if (i < 4)
    {
        box2[i] = m;
    }
    else
    {
        std::cout << RED << "Your inventory is fulled !" << std::endl;
    }

    return;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i(0); i < 4 && box2[i] != NULL; i++)
    {
        if (box2[i]->getType() == type)
            return (box2[i]->clone());
    }
    std::cout << RED << "Materia type is not corect !" << std::endl;

    return (0);
}