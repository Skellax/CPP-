/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:52:05 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/08/22 15:15:57 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIXED
#define DEF_FIXED

#include <iostream>

class Fixed
{

    private:
    int _number1;
    int const static _number2 = 8;

    public:

    Fixed();   
    Fixed(Fixed const& i);
    ~Fixed();
    Fixed& operator=(Fixed const& i);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif