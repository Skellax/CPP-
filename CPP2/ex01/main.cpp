/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:44:46 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/24 08:14:40 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed (1234.4321f);

    std::cout << YELLOW << "-----------------------------------------------" << std::endl;

    std::cout << DEFAULT << "a is " << a << std::endl;
    std::cout << DEFAULT << "b is " << b << std::endl;
    std::cout << DEFAULT << "c is " << c << std::endl;
    std::cout << DEFAULT << "d is " << d << std::endl;

    std::cout << YELLOW << "----------------------------------------------" << std::endl;

    std::cout << DEFAULT << "a is " << a.toInt() << BLUE << " as integer" << std::endl;
    std::cout << DEFAULT << "b is " << b.toInt() << BLUE << " as integer" << std::endl;
    std::cout << DEFAULT << "c is " << c.toInt() << BLUE << " as integer" << std::endl;
    std::cout << DEFAULT << "d is " << d.toInt() << BLUE << " as integer" << std::endl;

    std::cout << YELLOW << "-----------------------------------------------" << std::endl;

    return 0;
}