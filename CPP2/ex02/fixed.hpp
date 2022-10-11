/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:21:20 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/24 16:13:24 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIXED
#define DEF_FIXED

#include <iostream>
#include <cmath>

//COLOR

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define BLUE "\033[94m"
#define MAGENTA "\033[95m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"

class Fixed
{
    private:

    int _number1;
    int const static _number2 = 8;

    public:

    Fixed();
    Fixed(const int i);
    Fixed(const float f);   
    Fixed(Fixed const& i);
    ~Fixed();
    Fixed& operator=(Fixed const& i);   
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const; 
    void getStream(std::ostream& os) const; 
    void operator+=(Fixed const& i);
    void operator-=(Fixed const& i);
    void operator*=(Fixed const& i);
    void operator/=(Fixed const& i);
    bool egal(Fixed const& i) const;
    bool plusPetit(Fixed const& i) const;
    bool plusPetitEgal(Fixed const& i) const;
    bool plusGrandEgal(Fixed const& i) const;
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);
    static Fixed& min(Fixed& a, Fixed& b);
    static Fixed const& min(Fixed const& a, Fixed const& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static Fixed const& max(Fixed const& a, Fixed const& b);

};
     std::ostream& operator<<(std::ostream& os, Fixed const& i);
     bool operator==(Fixed const& a, Fixed const& b);
     bool operator!=(Fixed const& a, Fixed const& b);
     bool operator<(Fixed const& a, Fixed const& b);
     bool operator>(Fixed const& a , Fixed const& b);
     bool operator<=(Fixed const& a, Fixed const& b);
     bool operator>=(Fixed const& a, Fixed const& b);
     Fixed operator+(Fixed const& a, Fixed const& b);
     Fixed operator-(Fixed const& a, Fixed const& b);
     Fixed operator*(Fixed const& a, Fixed const& b);
     Fixed operator/(Fixed const& a, Fixed const& b);


#endif