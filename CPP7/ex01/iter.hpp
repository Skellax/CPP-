/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:57:11 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/09/30 14:04:49 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ITER
#define DEF_ITER

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

template<typename T>
void iter(T const *tab, int const size, void (*f)(T const &val))
{
    for (int i(0); i < size; i++)
    {
        f(tab[i]);
    }
}

template <typename T>
void f(T const &val)
{
    static int i = 0;
    std::cout << BLUE << "tab["<< i << "] = " << GREEN << val << std::endl;
    i++;
}

#endif