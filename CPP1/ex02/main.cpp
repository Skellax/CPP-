/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:51:28 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/19 10:13:00 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    #define GREEN "\033[92m"
    #define YELLOW "\033[93m"
    #define RED "\033[91m"
    #define DEFAULT "\033[39m"


    std:: string s1("HI THIS IS BRAIN.");
    std:: string *s2 (&s1);
    std:: string& s3(s1);
   

    std::cout << DEFAULT << "adress s1 : " << GREEN << &s1 << std::endl;
    std::cout << DEFAULT << "adress s2 : " << GREEN << s2 << std::endl;
    std::cout << DEFAULT << "adress s3 : " << GREEN << &s3 << std::endl;

    std::cout << YELLOW << "----------------------------------" << std:: endl;

    std::cout << DEFAULT << "s1 : " << RED << s1 << std::endl;
    std::cout << DEFAULT << "s2 : " << RED << *s2 << std::endl;
    std::cout << DEFAULT << "s3 : " << RED << s3 << std::endl;
}