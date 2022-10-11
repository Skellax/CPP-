/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:47:04 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/30 14:05:34 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_TEMPLATES
#define DEF_TEMPLATES

//LIBRAIRIES

#include <iostream>
#include <string>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//TEMPLATES

template<typename S>
void swap( S& a, S& b)
{
    S c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T max(T const& a, T const& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

template<typename M>
M min(M const& a, M const& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

#endif