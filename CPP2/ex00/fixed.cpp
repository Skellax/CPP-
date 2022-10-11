/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:27:48 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/22 14:17:22 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _number1(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const& i) : _number1(0)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = i;
}

Fixed& Fixed::operator=(Fixed const& i)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &i)
        this->_number1 = i.getRawBits();
    
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawbits member function called" << std::endl;
    return (this->_number1);
}

void Fixed::setRawBits(int const raw)
{
    this->_number1 = raw;
}