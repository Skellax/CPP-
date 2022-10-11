/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 07:54:08 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/12 10:23:20 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << BLUE << "----------TEST 1----------" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;

    std::cout << YELLOW << "b1(Stanlay, 150) b2(Theodule, 1) " << std::endl;

    std::cout << std::endl;


    Bureaucrat b1("Stanlay", 150);
    std::cout << DEFAULT << "---------------" << std::endl;
    Bureaucrat b2("Theodule", 1);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;
 

    std::cout << b1 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << b2 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << DEFAULT << "grade b1 pass to 151 " << std::endl;
    b1--;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << DEFAULT << "grade b2 pass to 0 " << std::endl;
    b2++;
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << b1 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << b2 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << BLUE << "----------TEST 2----------" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << YELLOW << "b3(Jeremy, 175) b4(Bob, -20) " << std::endl;

    std::cout << std::endl;

    Bureaucrat b3("Jeremy", 175);
    Bureaucrat b4("Bob", -20);

    std::cout << BLUE << "----------TEST 3----------" << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "----------CONSTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << YELLOW << "b5(Steve, 50) b6(Wesker, 1) " << std::endl;
    std::cout << std::endl;

    Bureaucrat b5;
    std::cout << DEFAULT << "---------------" << std::endl;
    Bureaucrat b6("Wesker", 1);
    std::cout << DEFAULT << "---------------" << std::endl;

    std::cout << std::endl;

    std::cout << b5 << std::endl;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << b6 << std::endl;
    std::cout << std::endl;

    std::cout << DEFAULT << "b5 = b6" << std::endl;
    b5 = b6;
    std::cout << DEFAULT << "---------------" << std::endl;
    std::cout << std::endl;

    std::cout << b5 << std::endl;

    std::cout << std::endl;

    std::cout << RED << "----------DESTRUCTORS----------" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << std::endl;
}