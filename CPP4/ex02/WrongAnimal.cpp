/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:21:48 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/05 10:38:05 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//------------------------------CLASS_WRONG_ANIMAL---------------------------------------

//OPERATORS----------------------------------------

WrongAnimal::WrongAnimal() : type("W_Animal")
{
    std::cout << GREEN << "A new Wrong Animal is born !" << std::endl;

    return ;  
}

WrongAnimal::WrongAnimal(WrongAnimal const& i)
{
     std::cout << YELLOW << "New Wrong Animal is cloning !" << std::endl; 
    *this = i;

    return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& i)
{
    std::cout << MAGENTA << "operator  Wrong Animal is called !" << std::endl;
    if (this != &i)
    {
        this->type = i.type;
    }
    return (*this);
}

//DESTRUCTORS-----------------------------------------------

WrongAnimal::~WrongAnimal()
{
     std::cout << RED << " Wrong Animal is vanished  !" << std::endl;

    return ;
}

//FUNCTIONS----------------------------------------------------

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << WHITE << "*No sound !" << std::endl;
}

//----------------------------------------WRONG_CAT_CLASS---------------------------------------------------

//OPERATORS------------------------------------------------------------------------------------------

WrongCat::WrongCat() : WrongAnimal()
{
    type = "W_Cat";
    std::cout << GREEN << "A new WrongCat is born !" << std::endl;

    return ;
}

WrongCat::WrongCat(WrongCat const& i)
{
     std::cout << YELLOW << "New WrongCat is cloning !" << std::endl; 
    *this = i;

    return;
}

WrongCat& WrongCat::operator=(WrongCat const& i)
{
     std::cout << MAGENTA << "operator WrongCat is called !" << std::endl;
    if (this != &i)
    {
        this->type = i.type;
    }
    return (*this);
}

//DESTRUCTOR------------------------------------------------------------------------------------

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat is vanished  !" << std::endl;

    return ; 
}

//FUNCTIONS---------------------------------------------------------------------------------------

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << WHITE << "Miaou Miaou 🐱  !" << std::endl;
}