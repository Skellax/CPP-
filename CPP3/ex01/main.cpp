/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:08:12 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 08:37:47 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void)
{
    std::cout << GREEN << "----------OPERATORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;

    ClapTrap player1("Cloud");
    ScavTrap player2("Sephiroth");

    player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player2.attack(player1.getName());
    player1.takeDamage(player2.getAtt());
    player1.beRepaired(5);
    
    std::cout << DEFAULT << "-------------------------------"  << std::endl;
    
    std::cout << std::endl;

    player2.guardGate();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;


     std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;
    
}