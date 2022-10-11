/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:42:41 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/30 14:20:55 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Clap_Trap"), hp(20), ep(20), att(2)
{
    std::cout << GREEN << "ClapTrap constructor default is called !!!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string nom) : name(nom), hp(10), ep(10), att(0)
{
    std::cout << GREEN << "ClapTrap constructor is called !!!" << std::endl;
    return ; 
}

ClapTrap::ClapTrap(ClapTrap const& i)
{
    std::cout << YELLOW << "Copy ClapTrap constructor is called !!!" << std::endl;
    *this = i;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& i)
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

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap destructor is called !!!" << std::endl; 
}

void ClapTrap::showStatus(void) const
{
    if (this->hp > 0)
    {
        std::cout << YELLOW << "ClapTrap status !!!" << std::endl; 
        std::cout << "----------------------------" << std::endl;
        std::cout << DEFAULT << "NAME : " << GREEN << this->name << std::endl;
        std::cout << YELLOW << "----------------------------" << std::endl;
        std::cout << DEFAULT << "HP : " << GREEN << this->hp << std::endl;
        std::cout << YELLOW << "----------------------------" << std::endl;
        std::cout << DEFAULT << "EP : " << GREEN << this->ep << std::endl;
        std::cout << YELLOW << "----------------------------" << std::endl;
        std::cout << DEFAULT << "ATT : " << GREEN << this->att << std::endl;
    }
    else
    {
        std::cout << RED << this->name << " is fainted  😢" << std::endl;
    }
}

void ClapTrap::attack(const::std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << DEFAULT << this->name << " attacks " << target << " causing " << this->att << " points of damage" << std::endl;
        this->ep -= 1;
    }
    else 
    {
        std::cout << RED << this->name << " cannot attacks " << target << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        std::cout << DEFAULT << this->name << " take " << amount << " damage !" << std::endl;
        this->hp -= amount;
        if (this->hp < 0)
        {
            this->hp = 0;
        }
    }
    else
    {
        std::cout << RED << this->name << " is already fainted !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << GREEN << this->name << " repaired " << amount << " hp !" << std::endl;
        this->hp += amount;
        this->ep -= 1;
    }
    else
    {
        std::cout << RED << this->name << " cannot repaired !" << std::endl;
    }
}

std::string ClapTrap::getName()
{
    return (name);
}

unsigned int ClapTrap::getAtt()
{
    return (att);
}

