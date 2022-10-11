/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:11:37 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/04 14:36:54 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <ctime>

class Generate
{
    public:
    int operator()() const
    {
        return rand() % 10;
    }
};

int main()
{
    std::cout << BLUE << "-----test(avec un tableau de 10 nombres aléatoires)-----" << std::endl;

    


    srand(time(NULL));
    std::vector<int> tab(10, -1);

    generate(tab.begin(), tab.end(), Generate());

    std::vector<int>::iterator it;

    for (it = tab.begin(); it != tab.end(); it++)
        std::cout << DEFAULT << *it << std::endl; 

    std::cout << YELLOW << "----------------------" << std::endl;
    std::cout << std::endl;

    std::cout << YELLOW << "on cherche le chiffre 2 dans notre tableau" << std::endl;


    ::easyFind(tab, 2);

    std::cout << YELLOW << "on cherche le chiffre 4 dans notre tableau" << std::endl;

    ::easyFind(tab, 4);

    std::cout << YELLOW << "on cherche le chiffre 6 dans notre tableau" << std::endl;

    ::easyFind(tab, 6);

    std::cout << BLUE << "------------------fin du test--------------" << std::endl;

    return 0;

}