/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:36:30 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/30 14:20:43 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("player1");

    ClapTrap p2;

    p1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    p2.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl; 

    p1.attack(p2.getName());

    p2.takeDamage(p1.getAtt());

    p2.attack(p1.getName());

    p1.takeDamage(p2.getAtt());

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p1.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p2.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p2.attack(p1.getName());
    p1.takeDamage(p2.getAtt());
    p2.attack(p1.getName());
    p1.takeDamage(p2.getAtt());
    p2.attack(p1.getName());
    p1.takeDamage(p2.getAtt());
    p2.attack(p1.getName());
    p1.takeDamage(p2.getAtt());

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p1.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p2.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p1.beRepaired(10);
    p2.beRepaired(10);

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p1.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;

    p2.showStatus();

    std::cout << DEFAULT << "-------------------------------" << std::endl;
}