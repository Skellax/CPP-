/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:20:05 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/07 12:13:05 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


//----------------------------CLASS_ANIMAL--------------------------------------------------------


//OPERATORS--------------------------------------------------------------------------------------

Animal::Animal() : type("Animal")
{
    std::cout << GREEN << "A new Animal is born !" << std::endl;

    return ;
}

Animal::Animal(Animal const& i)
{
    std::cout << YELLOW << "New Animal is cloning !" << std::endl; 
    *this = i;

    return;
}

Animal& Animal::operator=(Animal const& i)
{
    std::cout << MAGENTA << "operator Animal is called !" << std::endl;
    if (this != &i)
    {
        this->type = i.type;
    }
    return (*this);
}

//DESTRUCTOR----------------------------------------------------------------------------------

Animal::~Animal()
{
    std::cout << RED << "Animal is vanished  !" << std::endl;

    return ;
}

//FUNCTIONS------------------------------------------------------------------------------------

std::string Animal::getType() const
{
    return (this->type);
}

//---------------------------------CLASS_DOG-----------------------------------------------------------------

//OPERATOS------------------------------------------------------------------------------------------

Dog::Dog() : Animal()
{
    brain = new Brain();
    type = "Dog";
    std::cout << GREEN << "A new Dog is born !" << std::endl;

    return ;
}

Dog::Dog(Dog const& i) : Animal(i), brain(new Brain(*(i.brain)))
{
    std::cout << YELLOW << "New Dog is cloning !" << std::endl; 
    *this = i;

    return;
}

Dog& Dog::operator=(Dog const& i)
{
     std::cout << MAGENTA << "operator Dog is called !" << std::endl;
    if (this != &i)
    {
        delete brain;
        brain = new Brain(*(i.brain));
        this->type = i.type;
    }
    
    return (*this);
}

//Destructors--------------------------------------------------------------------------------------------------

Dog::~Dog()
{
    std::cout << RED << "Dog is vanished  !" << std::endl;

    delete brain;

    return ; 
}

//FUNCTIONS----------------------------------------------------------------------------------------------------

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << BLUE << "Wouaf Wouaf 🐶 !" << std::endl;
}

//------------------------------------CLASS_CAT-------------------------------------------------------------------

//OPERATORS------------------------------------------------------------------------------------------

Cat::Cat() : Animal()
{
    brain = new Brain();
    type = "Cat";
    std::cout << GREEN << "A new Cat is born !" << std::endl;

    return ;
}

Cat::Cat(Cat const& i) : Animal(i), brain(new Brain(*(i.brain)))
{
     std::cout << YELLOW << "New Cat is cloning !" << std::endl;
    *this = i;

    return;
}

Cat& Cat::operator=(Cat const& i)
{
     std::cout << MAGENTA << "operator Cat is called !" << std::endl;
    if (this != &i)
    {
        delete brain;
        brain = new Brain(*(i.brain));
        this->type = i.type;
    }
    
    return (*this);
}

//DESTRUCTOR------------------------------------------------------------------------------------

Cat::~Cat()
{
    std::cout << RED << "Cat is vanished  !" << std::endl;

    delete brain;

    return ; 
}

//FUNCTIONS---------------------------------------------------------------------------------------

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << WHITE << "Miaou Miaou 🐱  !" << std::endl;
}

//---------------------------------------------------------------CLASS_BRAIN---------------------------------------------------------------------

//OPERATORS----------------------------------------------------------------

Brain::Brain()
{
    std::cout << GREEN << " A new Brain is created !!!" << std::endl;

    return;
}

Brain::Brain(Brain const& i)
{
    std::cout << YELLOW << "Clone Brain is created !!!" << std::endl;
    *this = i;

    return;
}

Brain& Brain::operator=(Brain const& i)
{
    std::cout << MAGENTA <<  "operator Brain is called !!!" << std::endl;

    for (int j(0); j < (int)sizeof(ideas); j++)
    {
        if (this != &i)
        {
            ideas[j] = i.ideas[j];
        }
    }

    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain is destroyed !" << std::endl;

    return ;
}