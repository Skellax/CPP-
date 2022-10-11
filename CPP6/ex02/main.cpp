/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:07:29 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 10:55:50 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::cout << RED << "-------test 1------(no generate)" << std::endl;
    std::cout << std::endl;

    Base* p1 = new A();
    Base* p2 = new B();
    Base* p3 = new C();

     identify(p1);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(p2);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(p3);
     std::cout << YELLOW << "----------------------" << std::endl;
     std::cout << std::endl;

     identify(*p1);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(*p2);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(*p3);
     std::cout << YELLOW << "----------------------" << std::endl;
     std::cout << std::endl;

     std::cout << RED << "-------test 2------(generate rand base)" << std::endl;
    std::cout << std::endl;

    Base *p6;
    Base *p4;
    Base *p5;

    srand(time(NULL));
    p6 = generate();
    p4 = generate();
    p5 = generate();

    identify(p6);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(p4);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(p5);
     std::cout << YELLOW << "----------------------" << std::endl;
     std::cout << std::endl;

     identify(*p6);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(*p4);
     std::cout << YELLOW << "----------------------" << std::endl;
     identify(*p5);
     std::cout << YELLOW << "----------------------" << std::endl;
     std::cout << std::endl;



}