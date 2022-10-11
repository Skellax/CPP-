/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:17:41 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/24 10:32:34 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _number1(0)
{
    std::cout << GREEN << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const& i) : _number1(0)
{
    std::cout << GREEN << "Copy constructor called" << std::endl;
    *this = i;
    return ;
}

Fixed::Fixed(const int i)  
{
    std::cout << BLUE << "Int constructor called" << std::endl;
    this->_number1 = (i << this->_number2);
    return ;
}

Fixed::Fixed(const float f)  
{
    std::cout << MAGENTA << "Float constructor called" << std::endl;
    this->_number1 = roundf(f * (1 << this->_number2));
    return ;
}

Fixed& Fixed::operator=(Fixed const& i)
{
    std::cout << YELLOW << "Copy assignement operator called" << std::endl;
    if (this != &i)
        this->_number1 = i.getRawBits();
    
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << DEFAULT << "getRawbits member function called" << std::endl;
    return (this->_number1);
}

void Fixed::setRawBits(int const raw)
{
    this->_number1 = raw;
}

float Fixed::toFloat(void) const
{
    float f;
    f = (float)(this->_number1) / (1 << this->_number2);
    return (f);
}

int Fixed::toInt(void) const
{
    int i;
    i = this->_number1 >> this->_number2;
    return (i);
}

void Fixed::getStream(std::ostream&os) const
{
    os << this->toFloat();
}

std::ostream& operator<<(std::ostream& os, Fixed const& i)
{
    i.getStream(os);
    return (os);
}