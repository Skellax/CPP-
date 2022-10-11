/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:21:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/25 08:01:43 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

//CONSTRUCTOR

Fixed::Fixed() : _number1(0)
{
    return;
}

Fixed::Fixed(Fixed const& i)
{
    *this = i;
    return ;
}

Fixed::Fixed(const int i)  
{
    this->_number1 = (i << this->_number2);
    return ;
}

Fixed::Fixed(const float f)  
{
    this->_number1 = roundf(f * (1 << this->_number2));
    return ;
}

Fixed& Fixed::operator=(Fixed const& i)
{
    if (this != &i)
        this->_number1 = i.getRawBits();
    
    return (*this);
}

//----------------------------------------------------------------------------------

//DESTRUCTOR

Fixed::~Fixed()
{
   return;
}

//-------------------------------------------------------------------------------------

//FUNCTIONS

int Fixed::getRawBits(void) const
{
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

//------------------------------------------------------------------------------------------

// ARITHMETICS

//ADDITION

void Fixed::operator+=(Fixed const& i)
{
    this->_number1 += i._number1;

}

Fixed operator+(Fixed const& a, Fixed const& b)
{
    Fixed copy(a);

    copy += b;
    return (copy);
}

//-------------------------------------------------------

//SOUSTRACTION

void Fixed::operator-=(Fixed const& i)
{
    this->_number1 -= i._number1;
}

Fixed operator-(Fixed const& a, Fixed const& b)
{
    Fixed copy(a);

    copy -= b;
    return (copy);
}

//-------------------------------------------------------

//MULTIPLICATION

void Fixed::operator*=(Fixed const& i)
{
    this->_number1 *= (i._number1 / (1 << this->_number2));
}

Fixed operator*(Fixed const& a, Fixed const& b)
{
    Fixed copy(a);

    copy *= b;
    return (copy);
}

//-------------------------------------------------------------

//DIVISION

void Fixed::operator/=(Fixed const& i)
{
    this->_number1 /= (i._number1 / (1 << this->_number2));
}

Fixed operator/(Fixed const& a, Fixed const& b)
{
    Fixed copy(a);

    copy /= b;
    return (copy);
}

//--------------------------------------------------------------

//COMPARAISONS

//INTERN FUNCTIONS

bool  Fixed::egal(Fixed const& i) const
{
    return (this->_number1 == i._number1);
}

bool Fixed::plusPetit(Fixed const &i) const
{
   if (this->_number1 < i._number1)
   {
        return true;
   }
   else
   {
        return false;
   }
}

bool Fixed::plusPetitEgal(Fixed const& i) const
{
    if (this->_number1 < i._number1)
    {
        return true;
    }
    else if (this->_number1 == i._number1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fixed::plusGrandEgal(Fixed const& i) const
{
    if (this->_number1 > i._number1)
    {
        return true;
    }
    else if (this->_number1 == i._number1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//-----------------------------------------------------------

//OPERATORS CMP

bool operator==(Fixed const& a, Fixed const& b)
{
    return (a.egal(b));
}

bool operator!=(Fixed const& a, Fixed const& b)
{
    return not (a == b);
}

bool operator<(Fixed const& a, Fixed const& b)
{
    return (a.plusPetit(b));
}

bool operator>(Fixed const& a, Fixed const& b)
{
    return not (a < b);
}

bool operator>=(Fixed const& a, Fixed const& b)
{
    return (a.plusGrandEgal(b));

}

bool operator <=(Fixed const& a, Fixed const& b)
{
    return (a.plusPetitEgal(b));
}

//----------------------------------------------------------

//INCREMENTATION



Fixed& Fixed::operator++(void)
{
    *this += 0.00390625f;
    return (*this);

}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    *this +=  0.00390625f;
    return (tmp);
}

//--------------------------------------------------------------

//DECREMENTATION

Fixed& Fixed::operator--(void)
{
    *this -= 0.00390625f;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    *this -= 0.00390625f;
    return (tmp);
}

//--------------------------------------------------------------------

//MIN

 Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a <= b)
        return a;
    else
        return b;
}

 Fixed const& Fixed::min(Fixed const& a, Fixed const& b) 
{
    return (a <= b ? a : b);
}

 Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a >= b)
        return a;
    else
        return b;
}

 Fixed const&  Fixed::max(Fixed const& a, Fixed const& b) 
{
   return (a >= b ? a : b);
}




