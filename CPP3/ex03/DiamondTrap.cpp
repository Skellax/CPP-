/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:21:10 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/01 10:08:17 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


//OPERATORS------------------------------------------------------------------------

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->name =  "Diamond_Trap";
    hp  = FragTrap::hp;
    ep  = 50;
    att = FragTrap::att;
    ClapTrap::name = this->name + "_clap_trap";

    std::cout << GREEN << "DiamondTrap constructor default is called !!!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string nom) : ClapTrap(nom + "_clap_Trap"), ScavTrap(nom + "_clap_Trap"), FragTrap(nom + "_clap_Trap")
{
    name = nom;
    hp = FragTrap::hp;
    ep = 50;
    att =FragTrap::att;

    std::cout << GREEN << "DiamondTrap constructor is called !!!" << std::endl;
    return ; 
}

DiamondTrap::DiamondTrap(DiamondTrap const& i)
{
    std::cout << YELLOW << "Copy DiamondTrap constructor is called !!!" << std::endl;
    *this = i;
    return ;
}

//DESTRUCTORS------------------------------------------------------------------------------

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "ClapTrap destructor is called !!!" << std::endl; 

    return ;
}

//OPERATORS+--------------------------------------------------------------------------------------

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &i)
{
    std::cout << MAGENTA << " Copy assignement operator is called !!!" << std::endl;
    if (this != &i)
    {
        this->name = i.name; 
        this->hp = i.hp;
        this->ep = i.ep;
        this->att = i.att;
        ClapTrap::name = this->name + "_clap_trap";
    }

    return (*this);
}

//FUNCTIONS-----------------------------------------------------------------------------------------------

void DiamondTrap::showStatus(void) const
{
     if (this->hp > 0)
    {
        std::cout << MAGENTA << "DiamondTrap status !!!" << std::endl; 
        std::cout << "----------------------------" << std::endl;
        std::cout << DEFAULT << "NAME : " << GREEN << this->name << std::endl;
        std::cout << MAGENTA << "----------------------------" << std::endl;
        std::cout << DEFAULT << "CLAPTRAP : " << GREEN << ClapTrap::name << std::endl;
        std::cout << MAGENTA << "----------------------------" << std::endl;
        std::cout << DEFAULT << "HP : " << GREEN << this->hp << std::endl;
        std::cout << MAGENTA << "----------------------------" << std::endl;
        std::cout << DEFAULT << "EP : " << GREEN << this->ep << std::endl;
        std::cout << MAGENTA << "----------------------------" << std::endl;
        std::cout << DEFAULT << "ATT : " << GREEN << this->att << std::endl;
    }
    else
    {
        std::cout << RED << this->name << " is fainted  😢" << std::endl;
    }
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << GRAY << " I' m  " << name << " or " << ClapTrap::name << " ?" <<std::endl;
}
