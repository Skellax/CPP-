/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:54:22 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 14:33:19 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"


//CONSTRUCTORS---------------------------------------------------------------------------


Character::Character() : name("player")
{
    for (int i(0) ; i < 4; i++)
    {
        this->box[i] = NULL;
    }

    std::cout << GREEN << "Constructor Character Default created !!! " << std::endl;

    return ;
}

Character::Character(std::string nom) : name(nom)
{
     for (int i(0) ; i < 4; i++)
    {
        this->box[i] = NULL;
    }

    std::cout << GREEN << "Constructor Character created !!! " << std::endl;

    return ;
}

Character::Character(Character const& i)
{
    std::cout << YELLOW << "Constructor Character is cloned !!!" << std::endl;
    *this  = i;

    return ;
}

//OPERATORS-------------------------------------------------------------------------------------------

Character& Character::operator=(Character const& i)
{
    std::cout << MAGENTA << "Operator Character is created !!!" << std::endl;
    if (this != &i)
    {
         for (int j(0) ; j < 4; j++)
    {
        box[j] = i.box[j];
    }

        this->name = i.name;
    }

    return (*this);
}

//DESTRUCTORS-----------------------------------------------------------------------------------------------

Character::~Character()
{
     for (int i(0) ; i < 4; i++)
    {
        delete box[i];
    }   
    std::cout << RED << "Character is destroyed !!!" << std::endl;

    return ;
}

//FUNCTIONS---------------------------------------------------------------------------------------------------

std::string const& Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    int i = 0;

    while (box[i] != NULL && i < 4)
        i++;
    
    if (i < 4)
    {
        box[i] = m;
    }
    else
    {
        std::cout << RED << "Your inventory is fulled !!! " << std::endl;
    }
}

void Character::unequip(int idx)
{
    AMateria* tmp = NULL;
    if (box[idx] != NULL && (box[idx]->getType() == "ice" || box[idx]->getType() == "cure"))
    {
        box[idx] = tmp;
        box[idx] = NULL;
    }
    else
    {
        std::cout << "RED" << "You can't drop a empty materia" << std::endl;
    }

    return ;
}

void Character::use(int idx, ICharacter& target)
{
    if (box[idx] != NULL)
        box[idx]->use(target);
    else
        std::cout << DEFAULT << "You can't attack !" << std::endl;

    return ;
}
