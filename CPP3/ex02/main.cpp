/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:09:58 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/31 14:57:00 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //OPERATORS----------------------------------------------------------------

    std::cout << GREEN << "----------OPERATORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;

    //INITIALISATION---------------------------------------------------------------

    ClapTrap player1("Cloud");
    ScavTrap player2("Sephiroth");
    FragTrap player3("Barret");

    std::cout << std::endl; 

    //TEST-------------------------------------------------------------------------

    player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player3.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player1.attack(player2.getName());
     
    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player2.takeDamage(player1.getAtt());

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player2.attack(player3.getName());

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player3.takeDamage(player2.getAtt());

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player3.beRepaired(10);

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    player3.highFivesGuys();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player1.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout<<std::endl;

    player2.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;

    player3.showStatus();

    std::cout << DEFAULT << "-------------------------------"  << std::endl;

    std::cout << std::endl;


    //DESTRUCTORS-----------------------------------------------------------------

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout <<"       ----------------    " << std::endl;
    std::cout << std::endl;
    


}