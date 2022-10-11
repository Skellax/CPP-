/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 07:50:32 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 09:47:19 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
   std::cout << GREEN << "Umbrella Create a new Zombie !!!" << std::endl;
   return ; 
}
Zombie::Zombie(std::string name) : m_name(name)
{
    std::cout << GREEN << "Umbrella Create a new Zombie !!!" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << RED << m_name << ": is die once again :( !!!!" << std::endl;
    return ;
}

void Zombie::announce()
{
    std::cout << GRAY << m_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(std::string name)
{
    m_name = name;
    return (m_name);
}