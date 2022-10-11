/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:33:22 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/18 08:19:46 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << GREEN << " Umbrella create A new Zombie !!!" << std::endl;
    return ;
}

Zombie::Zombie(std::string name) : m_name(name)
{
    std::cout << GREEN << " Umbrella create A new Zombie !!!" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << RED << m_name << ": is die once again :( !!!" << std::endl;
    return ;    
}

void Zombie::announce(void) const
{
    std::cout << GRAY << m_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}