/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:15:27 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/30 13:26:23 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::cout << RED << "--Test 1--" << std::endl;
    
    int tab[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = 9;
    iter<int>(tab, size, f<int>);
    std::cout << YELLOW << "------------------" << std::endl;
    std::cout << std::endl;

    std::cout << RED << "--Test 2--" << std::endl;
    char tab2[8] = "Bonjour";
    int size2 = 8;
    iter<char>(tab2, size2, f<char>);
    std::cout << YELLOW << "-----------------" << std::endl;
    std::cout << std::endl;


}