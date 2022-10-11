/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:56:49 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/28 10:54:16 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    return;
}

Base* generate(void)
{
    int nb = rand() % 3;
    
    switch(nb)
    {
        case 0:
             return (new A);
             break;
        case 1:
             return (new B);
             break;
        default:
             return (new C);
            break;        
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p) != 0)
    {
        std::cout << BLUE << "Base A " << std::endl;
    }
    else if (dynamic_cast<B*>(p) != 0)
    {
        std::cout << BLUE << "Base B" << std::endl;
    }
    else if (dynamic_cast<C*>(p) != 0)
    {
        std::cout << BLUE << "Base C" << std::endl;
    }
    else
        std::cout << RED << "ERROR" << std::endl;
}

void identify (Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << GREEN << "Base A" << std::endl;
    }
    catch(const std::exception& e)
    {

    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << GREEN << "Base B" << std::endl;
    }
    catch(const std::exception& e)
    {

    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << GREEN << "Base C" << std::endl;
    }
    catch(const std::exception& e)
    {
        
    }   
}