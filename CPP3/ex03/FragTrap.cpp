/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:18:42 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 15:18:45 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//OPERATOR-------------------------------------------------------------------

FragTrap::FragTrap() : ClapTrap()
{
    name = "Frag_Trap";
    hp = 100;
    ep = 100;
    att = 30;

    std::cout << GREEN << "FragTrap constructor default is called !!!" << std::endl;
    
    return ;
}

FragTrap::FragTrap(std::string nom) : ClapTrap(nom)
{
    hp = 100;
    ep = 100;
    att = 30;

    std::cout << GREEN << "FragTrap constructor is called !!!" << std::endl;
    
    return ; 
}

FragTrap::FragTrap(FragTrap const& i)
{
    std::cout << YELLOW << "Copy FragTrap constructor is called !!!" << std::endl;
    *this = i;
    return ;
}

//DESTRUCTOR-----------------------------------------------------------------------

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap destructor is called !!!" << std::endl;

    return ;
}

FragTrap& FragTrap::operator=(FragTrap const& i)
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

//FUNCTION---------------------------------------------------------------------------

void FragTrap::highFivesGuys(void)
{
    std::cout << RED << this->name << " give a high five ! 👍 " << std::endl; 
}

void FragTrap::showStatus(void) const
{
    if (this->hp > 0)
    {
        std::cout << CYAN << "FragTrap status !!!" << std::endl; 
        std::cout << "----------------------------" << std::endl;
        std::cout << DEFAULT << "NAME : " << GREEN << this->name << std::endl;
        std::cout << CYAN << "----------------------------" << std::endl;
        std::cout << DEFAULT << "HP : " << GREEN << this->hp << std::endl;
        std::cout << CYAN << "----------------------------" << std::endl;
        std::cout << DEFAULT << "EP : " << GREEN << this->ep << std::endl;
        std::cout << CYAN << "----------------------------" << std::endl;
        std::cout << DEFAULT << "ATT : " << GREEN << this->att << std::endl;
    }
    else
    {
        std::cout << RED << this->name << " is fainted  😢" << std::endl;
    }

}
