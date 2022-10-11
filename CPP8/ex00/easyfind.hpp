/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:23 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/10/04 15:08:34 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_EASYFIND
#define DEF_EASYFIND

//LIBRAIRIES 

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

//COLORS

#define DEFAULT "\033[39m"
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define BLUE "\033[94m"

//FUNCTIONS

template <class T> 
void easyFind(T const &container, int nb)
{
    typename T::const_iterator it = find(container.begin(), container.end(), nb);

    if (it == container.end())
        std::cout << RED << nb << " n'a pas été trouvé !" << std::endl;
    else
        std::cout << GREEN << nb << " a été trouvé !" << std::endl;

}

#endif