/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:39:47 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/21 16:15:41 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name)
{
    std::cout << GREEN << m_name << ": Enter to the fight !!!" << std::endl;
    m_weapon = NULL;
    return ;
}

HumanB::~HumanB()
{
    std::cout << RED << m_name << ": leave the fight !!!!" << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& type)
{
    m_weapon = &type;
}

void HumanB::attack()
{
    if (m_weapon == NULL)
    {
        std::cout << DEFAULT << m_name << " have no weapon !" << std::endl;

    }
    else
    {
        std::cout << DEFAULT << m_name << " attacks with their " << m_weapon->getType() << std::endl;
    }
}