/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:26 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/09 08:41:21 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    srand(time(NULL));
    std::cout << BLUE << "------test 1 (basic test)------" << std::endl;
    std::cout << std::endl;
    std::cout << GREEN << "--OPERATORS--" << std::endl;
    Span sp = Span(5);
    std::cout << GREEN << "-------------" << std::endl;

    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.print();
        try
        {
            std::cout << BLUE << "la plus courte distance est de : " << DEFAULT << sp.shortestSpan() << std::endl;
            std::cout << BLUE << "la plus longue distance est de : " << DEFAULT << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
        std::cerr << e.what() << '\n';
        }      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      
    std::cout << YELLOW << "-----------------------" << std::endl;

    
    
    
    std::cout << BLUE << "-------------fin de test 1-------------" << std::endl;
    std::cout << std::endl;

    std::cout << BLUE << "------test 2 (Span de 1)------" << std::endl;
    std::cout << std::endl;
    std::cout << GREEN << "--OPERATORS--" << std::endl;
    Span sp2 = Span(1);
    std::cout << GREEN << "-------------" << std::endl;
    try
    {
        sp2.addNumber(12);
        sp2.print();
        try
        {
        std::cout << BLUE << "la plus courte distance est de : " << DEFAULT << sp2.shortestSpan() << std::endl;
        std::cout << BLUE << "la plus longue distance est de : " << DEFAULT << sp2.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
        std::cerr << e.what() << '\n';
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
     
    }
    
    

    std::cout << YELLOW << "-----------------------" << std::endl;

    
    
    
    std::cout << BLUE << "-------------fin de test 2-------------" << std::endl;
    std::cout << std::endl;

   /* std::cout << BLUE << "------test 3 (span 10 000 et chiffre aleatoires)------" << std::endl;
    std::cout << std::endl;
    std::cout << GREEN << "--OPERATORS--" << std::endl;
    Span sp3 = Span(10000);
    std::cout << GREEN << "-------------" << std::endl;
    try
    {
        sp3.addRange(1,10000);
        sp3.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   

  
     
    std::cout << BLUE << "-------------fin de test 3-------------" << std::endl;
    std::cout << std::endl;
*/

    std::cout << BLUE << "------test 4 (Span de 10 chiffre aleatoires)------" << std::endl;
    std::cout << std::endl;
    std::cout << GREEN << "--OPERATORS--" << std::endl;
    Span sp4 = Span(10);
    std::cout << GREEN << "-------------" << std::endl;

    try
    {
        sp4.addRange(0,9);
        sp4.print();
        try
        {
            std::cout << BLUE << "la plus courte distance est de : " << DEFAULT << sp4.shortestSpan() << std::endl;
            std::cout << BLUE << "la plus longue distance est de : " << DEFAULT << sp4.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {   
            std::cerr << e.what() << '\n';
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    

    std::cout << std::endl;
    std::cout << RED << "--DESTRUCTORS--" << std::endl;
}