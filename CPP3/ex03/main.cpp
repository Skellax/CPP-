/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:31:49 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/01 10:14:16 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    //OPERATORS----------------------------------------------------------------

    std::cout << GREEN << "----------OPERATORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;

    //INITIALISATOR--------------------------------------------------------------

    DiamondTrap player1("Diamond");

    DiamondTrap player2;

    player2 = player1;
    

    std::cout << std::endl;

    //Test-----------------------------------------------------------------------

    player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.attack(player1.getName());

     std::cout << DEFAULT << "-------------------------------"  << std::endl;

     player1.takeDamage(player2.getAtt());

      std::cout << DEFAULT << "-------------------------------"  << std::endl;

        std::cout << std::endl;
    
     player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;


    player1.whoAmI();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;



    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player1.guardGate();

     std::cout << DEFAULT << "-------------------------------"  << std::endl;
    
    player2.highFivesGuys();

    std::cout << std::endl;

    //DESTRUCTORS-----------------------------------------------------------------

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;
}