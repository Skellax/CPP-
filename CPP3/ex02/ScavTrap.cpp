/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:56:56 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 10:27:04 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//OPERATOR----------------------------------------------------------------------

ScavTrap::ScavTrap() : ClapTrap()
{
    name = "Scav_Trap";
    hp = 100;
    ep = 50;
    att = 20;
    
    std::cout << GREEN << "ScavTrap constructor default is called !!!" << std::endl;
    
    return ;

}

ScavTrap::ScavTrap(std::string nom) : ClapTrap(nom)
{
    hp = 100;
    ep = 50;
    att = 20;

    std::cout << GREEN << "ScavTrap constructor is called !!!" << std::endl;
    return ; 
}

ScavTrap::ScavTrap(ScavTrap const& i)
{
    std::cout << YELLOW << "Copy ScavTrap constructor is called !!!" << std::endl;
    *this = i;
    return ;
}

//DESTRUCTOR-----------------------------------------------------------------------

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap destructor is called !!!" << std::endl;

    return ;
}

//OPERATOR=-------------------------------------------------------------------------

ScavTrap& ScavTrap::operator=(ScavTrap const &i)
{
    std::cout << MAGENTA << " Copy assignement operator is called !!!" << std::endl;
    if (this != &i)
    {
        this->name = i.name; 
        this->hp = i.hp;
        this->ep = i.ep;
        this->att = i.att;
    }

    return (*this);
}

//FUNCTION----------------------------------------------------------------------------------

void ScavTrap::guardGate()
{
    std::cout <<  BLUE << name << "is on guard ♜ " << std::endl;
}

void ScavTrap::showStatus(void) const
{
    if (this->hp > 0)
    {
        std::cout << GRAY << "ScavTrap status !!!" << std::endl; 
        std::cout << "----------------------------" << std::endl;
        std::cout << DEFAULT << "NAME : " << GREEN << this->name << std::endl;
        std::cout << GRAY << "----------------------------" << std::endl;
        std::cout << DEFAULT << "HP : " << GREEN << this->hp << std::endl;
        std::cout << GRAY << "----------------------------" << std::endl;
        std::cout << DEFAULT << "EP : " << GREEN << this->ep << std::endl;
        std::cout << GRAY << "----------------------------" << std::endl;
        std::cout << DEFAULT << "ATT : " << GREEN << this->att << std::endl;
    }
    else
    {
        std::cout << RED << this->name << " is fainted  😢" << std::endl;
    }
}