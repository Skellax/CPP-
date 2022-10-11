/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:43:21 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/20 09:38:10 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{
    std::cout << GREEN << "Weapon initialized !" << std::endl;
    return ;
}

Weapon::Weapon()
{
    std::cout << GREEN << "Weapon intitialized !" << std::endl;
    return ;
}

Weapon::~Weapon()
{
    std::cout << RED << "Weapon destroyed !" << std::endl;
    return ;
}

void Weapon::setType(std::string type)
{
    m_type = type;
}

std::string const &Weapon::getType() 
{
    std::string const& REF = m_type;
    return (REF);
}