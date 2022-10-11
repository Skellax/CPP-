/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:40:00 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/08 12:38:28 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"


//-------------------------------------CLASS_AMATERIA-----------------------------------------------------------

//CONSTRUCTORS--------------------------------------------------------------------

AMateria::AMateria() : _type("empty")
{
    std::cout << GREEN << "AMateria constructor default is created !!!" << std::endl;

    return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << GREEN << "AMateria constructor is created !!!" << std::endl;

    return ;
}

AMateria::AMateria(AMateria const& i)
{
    std::cout << YELLOW << "AMateria is cloned !!!" << std::endl;
    *this = i;

    return;
}

//OPERATOR--------------------------------------------------------------------------

AMateria& AMateria::operator=(AMateria const& i)
{
    std::cout << MAGENTA << "AMateria operator is created !!!" << std::endl;
    if (this != &i)
    {
        this->_type = i._type;
    }

    return (*this);
}

//DESTRUCTOR------------------------------------------------------------------------

AMateria::~AMateria()
{
    std::cout << RED << "AMateria is destroyed !!!" << std::endl;

    return ; 
}

//FUNCTION---------------------------------------------------------------------------

void AMateria::use(ICharacter& target)
{

    std::cout << DEFAULT << "test" << target.getName() << std::endl;
    return ;
}

std::string AMateria::getType()
{
    return (this->_type);
}

//-----------------------------------------CLASS_ICE-----------------------------------------

//CONSTRUCTORS---------------------------------------------------

Ice::Ice() : AMateria()
{
    this->_type = "ice";
    std::cout << GREEN << "Ice Materia constructor Default is ready to froze ennemis !" << std::endl;

    return ;
}

Ice::Ice(std::string const& type) : AMateria(type)
{
    std::cout << GREEN << "Ice Materia constructor is ready to froze ennemis !" << std::endl;

    return;
}

Ice::Ice(Ice const& i) : AMateria(i)
{
    std::cout << YELLOW << "Ice Materia is cloned !" << std::endl;
    *this = i;

    return;
}

//OPERATORS----------------------------------------------------------

Ice& Ice::operator=(Ice const& i)
{
    std::cout << MAGENTA << "Ice Materia operator is created !" << std::endl;
    if (this != &i)
    {
        this->_type = i._type;
    }

    return (*this);
}

//DESTRUCTORS-----------------------------------------------------------

Ice::~Ice()
{
    std::cout << RED << "Ice Materia is destroyed !" << std::endl;

    return;
}

//FUNCTIONS----------------------------------------------------------------

AMateria* Ice::clone() const
{
    AMateria* clone = new Ice("ice");

    return (clone);
}

void Ice::use(ICharacter& target)
{
    std::cout << CYAN << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string Ice::getType()
{
    return (this->_type);
}

//------------------------------------------CLASS_CURE------------------------------------------------

//CONSTRUCTORS----------------------------------------------------

Cure::Cure() : AMateria()
{
    this->_type = "cure";
    std::cout << GREEN << "Cure Materia Constructor Default ready to heal allies !" << std::endl;

    return;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
    std::cout << GREEN << "Cure Materia Constructor ready to heal allies !" << std::endl;

    return;
}

Cure::Cure(Cure const& i) : AMateria(i)
{
    std::cout << YELLOW << "Cure Materia is cloned !" << std::endl;
    *this = i;

    return;
}

//OPERATORS---------------------------------------------------------------

Cure& Cure::operator=(Cure const& i)
{
    std::cout << MAGENTA << "Cure operator is create !" << std::endl;
    if (this != &i)
    {
        this->_type = i._type;
    }

    return (*this);
}

//DESTRUCTOR---------------------------------------------------------------

Cure::~Cure()
{
    std::cout << RED << "Cure Materia is destroyed !" << std::endl;
}

//FUNCTIONS-----------------------------------------------------------------

AMateria* Cure::clone() const
{
    AMateria* clone = new Cure("cure");

    return (clone);
}

void Cure::use(ICharacter& target)
{
    std::cout << GREEN << "*heals " << target.getName() << " wounds *" << std::endl;
}

std::string Cure::getType()
{
    return (this->_type);
}

//----------------------------------------------------------------------------------
