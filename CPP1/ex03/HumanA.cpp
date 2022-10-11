/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:46:39 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 09:30:56 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : m_name(name), m_weapon(type)
{
    std::cout << GREEN << m_name << ": Enter to the fight !!!" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << RED << m_name << ": leave the fight !!!!" << std::endl;
}

void HumanA::attack()
{
    std::cout << DEFAULT << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}