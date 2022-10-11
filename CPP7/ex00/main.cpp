/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:53:43 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/30 09:53:25 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main()
{
    int a = 2;
    int b = 3;

    std::cout << RED << "----TEST 1----" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "Before Swap" << std::endl;
    std::cout << BLUE << "a = " << DEFAULT << a << BLUE << " , b = " << DEFAULT << b << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << GREEN << "After Swap" << std::endl;
    ::swap(a, b);
    std::cout << BLUE << "a = " << DEFAULT << a << BLUE << " , b = " << DEFAULT << b << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "Minimum" << std::endl;
    std::cout << BLUE << "min(a, b)" << DEFAULT << ::min(a, b) << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << GREEN << "Maximum" << std::endl;
    std::cout << BLUE << "max(a, b)" << DEFAULT << ::max(a, b) << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << RED << "----TEST 2----" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "Before Swap" << std::endl;
    std::cout << BLUE << "c = " << DEFAULT << c << BLUE << " , d = " << DEFAULT << d << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << GREEN << "After Swap" << std::endl;
    ::swap(c, d);
    std::cout << BLUE << "c = " << DEFAULT << c << BLUE << " , d = " << DEFAULT << d << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "Minimum" << std::endl;
    std::cout << BLUE << "min(c, d)" << DEFAULT << ::min(c, d) << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    std::cout << GREEN << "Maximum" << std::endl;
    std::cout << BLUE << "max(c, d)" << DEFAULT << ::max(c, d) << std::endl;
    std::cout << YELLOW << "--------------------------" << std::endl;
    
}