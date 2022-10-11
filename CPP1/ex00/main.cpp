/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:00:23 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 07:33:50 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << YELLOW << "------------first announce-------------" << std::endl;

    std::string bob("Crimson Head");
    std::string monster1("Leacker");
    std::string monster2("Nemesis");
    
    Zombie z1(bob);

    z1.announce();

   std::cout << YELLOW << "------------second announce-------------" << std::endl;

    Zombie *z2 = newZombie(monster1);

    z2->announce();

    delete z2;

    std::cout << YELLOW << "------------third announce-------------" << std::endl;

    randomChump(monster2);

}